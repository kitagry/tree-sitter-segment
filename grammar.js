module.exports = grammar({
  name: 'segment',

  rules: {
    source_file: $ => repeat(seq($._identifier, /[^a-zA-Z0-9]+/)),
    _identifier: $ => choice(
      $._camel_case_identifier,
      $._snake_case_identifier,
    ),
    _snake_case_identifier: $ => seq(
      $.word,
      repeat1(seq('_', $.word)),
    ),
    _camel_case_identifier: $ => repeat1($.word),
    word: $ => /[a-zA-Z][a-z0-9]*/,
  }
});
