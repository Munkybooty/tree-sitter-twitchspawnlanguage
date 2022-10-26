module.exports = grammar({
  name: 'twitchspawnlanguage',

  extras: $ => [
    $.comment,
    $.comparator,
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets.
    ']',
    '}',
  ],

  rules: {

    ruleset: $ => repeat(choice(
      $.meta_action_rule,
    )),

    meta_action_rule: $ => seq(
      $.meta_action,
      // $.rule,
    ),

    // Basic Actions

    action: $ => choice(
      $.drop_action,
      $.summon_action,
      $.execute_action,
      $.throw_action,
      $.clear_action,
      $.shuffle_action,
      $.change_action,
    ),

    drop_action: $ => seq(
      'DROP',
      $.item,
      optional(/\d+/),
      optional($.display_text),
    ),

    summon_action: $ => seq(
      'SUMMON',
      $.entity,
      optional($.coordinates),
      optional($.nbt_data),
      optional($.display_text),
    ),

    execute_action: $ => seq(
      'EXECUTE',
      repeat($.command),
      optional($.display_text),
    ),

    throw_action: $ => seq(
      'THROW',
      $.slot_val,
      optional($.display_text),
    ),

    clear_action: $ => seq(
      'CLEAR',
      $.slot_val,
      optional($.display_text),
    ),

    shuffle_action: $ => seq(
      'SHUFFLE',
      choice($.inventory_name, $.slot_group),
      optional($.display_text),
    ),

    change_action: $ => seq(
      'CHANGE',
      $.slot_val,
      'INTO',
      $.item,
      optional($.display_text),
    ),

    // Action Parameters

    action_parameter: $ => choice(
      $.item,
      $.entity,
      $.coordinates,
      $.command,
      $.inventory_name,
      $.slot_group,
    ),

    item: $ => choice(
      $.item_id,
      $.nbt_item,
    ),

    item_id: $ => choice(
      /minecraft:[a-z_]+/,
      /[a-zA-Z_]+/,
    ),

    nbt_item: $ => choice(
      /%minecraft:[a-z_]+\{.*\}%/,
      /%[a-zA-Z_]+\{.*\}%/
    ),

    entity: $ => choice(
      /minecraft:[a-z_]/,
      /[a-zA-Z_]+/,
    ),

    coordinates: $ => seq(
      $.coordinate_val, // x-coordinate
      $.coordinate_val, // y-coordinate
      $.coordinate_val, // z-coordinate
    ),

    coordinate_val: $ => choice(/\d+/, /-\d+/, '~', /~\d+/),

    nbt_data: $ => 'need to do',

    command: $ => (/%\/[\w+]+(.*)%/),

    slot_val: $ => choice(
      $.slot_name,
      $.modified_selection,
      $.inventory_name,
      seq($.slot_num, 'FROM', $.inventory_name),
    ),

    modified_selection: $ => choice(
      $.modifier,
      seq($.modifier, 'FROM', $.inventory_name),
    ),

    slot_name: $ => choice(
      'helmet',
      'chestplate',
      'leggings',
      'boots',
      'off-hand',
      'main-hand',
    ),

    inventory_name: $ => choice(
      'inventory',
      'armors',
      'hotbar',
    ),

    modifier: $ => choice(
      'randomly',
      'everything'
    ),

    slot_num: $ => seq('slot', /[0-9]|[1-3][0-9]/),

    slot_group: $ => seq('slot', /[0-9]|[1-3][0-9]/, /[0-9]|[1-3][0-9]/),

    rule: $ => seq(
      $.action,
      $.action_parameter,
      'ON',
      $.event,
      optional(repeat(seq(
        'WITH',
        $.predicate,
        $.comparator,
        $.predicate_value,
      ))),
    ),

    // Meta Actions

    meta_action: $ => choice(
      $.either_action,
      $.both_action,
      $.nothing_action,
      $.for_action,
      $.wait_action,
      $.reflect_action,
    ),

    either_action: $ => seq(
      'EITHER',
      repeat(seq(
        optional($.chance),
        $.action,
        'OR'
      )),
      optional('ALL'),
      optional($.display_text),
    ),

    both_action: $ => seq(
      'BOTH',
      optional('INSTANTLY'),
      repeat(seq(
        $.action,
        'AND'
      )),
      optional('ALL'),
      optional($.display_text),
    ),

    nothing_action: $ => seq(
      'NOTHING',
      optional($.display_text),
    ),

    for_action: $ => seq(
      'FOR', /\d+/, 'TIMES',
      $.action,
      optional($.display_text),
    ),

    wait_action: $ => seq(
      'WAIT', /\d+/, $.time_unit,
      optional($.display_text)
    ),

    reflect_action: $ => seq(
      'REFLECT',
      optional('ONLY'),
      choice('*', /\d+/, /%\w+[,\s\w+]+%/,),
      choice($.action, $.meta_action),
      optional($.display_text),
    ),

    // Meta Action Parameters

    chance: $ => seq(
      'CHANCE', /[\d+.]/, 'PERCENT'
    ),

    time_unit: $ => choice(
      'milliseconds',
      'seconds',
      'minutes',
    ),

    // Events

    event: $ => choice(
      'Donation',
      'JustGiving Donation',
      'ExtraLife Donation',
      'Patreon Pledge',
      'Tiltify Donation',
      'TreatStream Treat',
      'Loyalty Point Redemption',
      'Twitch Channel Point Reward',
      'Twitch Chat Message',
      'Twitch Follow',
      'Twitch Subscription Gift',
      'Twitch Subscription',
      'Twitch Host',
      'Twitch Raid',
      'Twitch Bits',
      'Youtube Subscription',
      'Youtube Sponsor',
      'Youtube Superchat',
      'Mixer Follow',
      'Mixer Subscription',
      'Mixer Host'
    ),

    predicate: $ => choice(
      'actor',
      choice('amount','donation_amount'),
      choice('badges', 'chat_badges'),
      choice('currency','donation_currency'),
      'gifted',
      'message',
      choice('months', 'month_count',  'subscription_months'),
      choice('raiders', 'raider_count'),
      choice('tier', 'subscription_tier'),
      'title',
      choice('viewers', 'viewer_count'),
    ),

    comparator: $ => choice(
      '=',
      '>',
      '<',
      '>=',
      '<=',
      'IS',
      'PREFIX',
      'POSTFIX',
      'IN RANGE',
      'CONTAINS',
    ),

    predicate_value: $ => choice(
      /\d+/,
      $.boolean,
      /%\w+%/,
      /\w\w\w/,
      seq(
        '%',
        repeat(choice(
          /\w+/,
          /[\!\?\.\']+/,
        )),
        '%'
      ),
      /\[\d+,\d+\]/
    ),

    // Display Text

    display_text: $ => seq(
      'DISPLAYING',
      choice(
        $.message,
        'NOTHING',
      ),
    ),

    message: $ => seq(
      '%[',
      repeat(choice(
        /\{\w+:(.*)\}/,
        seq(
          '\"',
          repeat(choice(
            seq('${',$.predicate,'}'),
            /\w+/,
            /[\!\?\.\']+/,
          )),
          '\"',
        ),
      )),
      ']%',
    ),

    // Comments

    comment: $ => token(seq('#', /.*/)),

  }
});
