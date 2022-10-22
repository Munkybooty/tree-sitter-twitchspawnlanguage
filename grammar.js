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
      $.drop_rule,
      $.summon_rule,
      $.execute_rule,
      $.throw_rule,
      $.clear_rule,
      $.shuffle_rule,
      $.change_rule,
      $.meta_action_rule,
    )),

    meta_action_rule: $ => seq(
      $.meta_action,
      $.rule,
    ),

    // Basic Actions

    drop_rule: $ => seq(
      'DROP',
      $.item,
      optional(/\d+/),
      optional($.display_text),
    ),

    summon_rule: $ => seq(
      'SUMMON',
      $.entity,
      optional($.coordinates),
      optional($.nbt_data),
      optional($.display_text),
    ),

    execute_rule: $ => seq(
      'EXECUTE',
      repeat($.command),
      optional($.display_text),
    ),

    throw_rule: $ => seq(
      'THROW',
      $.slot_val,
      optional($.display_text),
    ),

    clear_rule: $ => seq(
      'CLEAR',
      $.slot_val,
      optional($.display_text),
    ),

    shuffle_rule: $ => seq(
      'SHUFFLE',
      choice($.inventory_name, $.slot_group),
      optional($.display_text),
    ),

    change_rule: $ => seq(
      'CHANGE',
      $.slot_val,
      'INTO',
      $.item,
      optional($.display_text),
    ),

    // Action Parameters

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

    // rule: $ => seq(
    //   $.action,
    //   $.action_parameters,
    //   'ON',
    //   $.event,
    //   optional(repeat(seq(
    //     'WITH',
    //     $.predicate,
    //     $.comparator,
    //     $.predicate_value,
    //   ))),
    // ),

    // Meta Actions

    meta_action: $ => choice(
      'EITHER',
      'BOTH',
      'NOTHING',
      seq('FOR', /\d+/, 'TIMES'),
      'WAIT',
      'REFLECT',
    ),

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

    comment: $ => token(seq('#', /.*/)),

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

    predicate_value: $ => 'need to do',

    // Display Text

    display_text: $ => 'need to do',

  }
});
