module.exports = grammar({
  name: 'twitchspawnlanguage',

  rules: {

    extras: $ => [
      $.comment,
    ],

    externals: $ => [
      $._newline,
      $._indent,
      $.comment,

      // Allow the external scanner to check for the validity of closing brackets
      // so that it can avoid returning dedent tokens between brackets.
      ']',
      '}',
    ],

    // TODO: add the actual grammar rules
    ruleset: $ => repeat(choice(
      $.rule,
      $.meta_action_rule,
      $.advanced_action_rule,
    )),

    rule: $ => repeat(choice(
      $.action,
      $.comparator
      $.event,
    )),

    comment: $ => token(seq('#', /.*/)),

  }

});
