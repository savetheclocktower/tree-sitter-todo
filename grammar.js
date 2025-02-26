const WHITE_SPACE = choice(" ", "\t", "\v", "\f");
const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "todo",

  extras: $ => [
    $.__whitespace,
  ],

  // supertypes: $ => [
  //   $.line
  // ],

  inline: $ => [
    $.line
  ],

  rules: {
    source: $ => repeat(
      $.line
    ),

    line: $ => seq(
      repeat1(
        choice(
          $.tag,
          $._name_false_alarms,
          $._text
        )
      ),
      $.__newline
    ),

    _text: $ => prec(2, repeat1(choice(/[^A-Z]/))),

    name: $ => prec(3, choice(
      "TODO",
      "FIXME",
      "CHANGED",
      "XXX",
      "IDEA",
      "HACK",
      "NOTE",
      "REVIEW",
      "NB",
      "BUG",
      "QUESTION",
      "COMBAK",
      "TEMP",
      "DEBUG",
      "OPTIMIZE",
      "WARNING")
    ),

    // line: $ =>

    _name_false_alarms: $ => /\w+/,

    tag: $ => seq(
      $.name,
      optional(':'),
    ),

    // _user: $ => seq(
    //   '(',
    //   alias(/[^()]+/, $.user),
    //   ')',
    // ),

    __newline: $ => NEWLINE,
    __whitespace: $ => token(WHITE_SPACE),
  },
});
