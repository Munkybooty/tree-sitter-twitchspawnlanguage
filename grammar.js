module.exports = grammar({
  name: 'twitchspawnlanguage',

  rules: {

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

    ruleset: $ => repeat(choice(
      $.rule,
      $.meta_action_rule,
    )),

    meta_action_rule: $ => seq(
      $.meta_action,
      $.rule,
    )),

    rule: $ => repeat(choice(
      $.action,
      $.comparator,
      $.event,
      $.predicate,
    )),

    action: $ => choice(
      'DROP',
      'SUMMON',
      'EXECUTE',
      'THROW',
      'CLEAR',
      'SHUFFLE',
      'CHANGE',
    ),

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

    comment: $ => token(seq('#', /.*/)),

  }

});
