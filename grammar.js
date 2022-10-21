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

    action_parameters: $ => 'need to do',

    comparator: $ => 'need to do',

    predicate_value: $ => 'need to do',

  }
});
