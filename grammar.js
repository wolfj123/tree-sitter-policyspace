//  https://regex101.com/r/dU5fO8/73
const alpha = /[^\s0-9;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const alpha_numeric = /[^\s;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const string_regex = /[^;`|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
//const comment_block = /<\*(.|\n)*\*>/

const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
};


module.exports = grammar({
    name: 'policyspace',

    extras: $ => [
      $.comment,
      /[\s\uFEFF\u2060\u200B\u00A0]/
    ],



    rules: {
      source_file: $ => repeat($.slot),

      slot: $ => seq(
        $._identifier,
        ':',
        choice(
          $.atomic_values,
          $.aggregate_values,
          $.compound_values,
          $.todo_value),
        "."
      ),

      atomic_values: $ => seq(
        'one',
        'of',
        $._identifier,
        repeat(seq(
          ',',
          $._identifier
        ))
      ),

      aggregate_values: $ => seq(
        'some',
        'of',
        $._identifier,
        repeat(seq(
          ',',
          $._identifier
        ))
      ),

      compound_values: $ => seq(
        'consists',
        'of',
        $.identifier_simple,
        repeat(seq(
          ',',
          $.identifier_simple
        ))
      ),

      todo_value: $ => seq(
        choice(
          'TODO',
          'todo')
      ),

      _identifier: $ => choice(
        $.identifier_simple,
        $.identifier_with_desc
      ),

      identifier_simple: $ => {
        return token(seq(alpha, repeat(alpha_numeric)))
      },

      identifier_with_desc: $ => seq(
        $.identifier_simple,
        $.description
      ),

      //https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
      //comment: $ => token(prec(PREC.COMMENT, choice(
      comment: $ => prec(PREC.COMMENT, choice(
        seq('<--', /.*/), $.comment_block
        // seq(
        //   '<*',
        //   /[^*]*\*+([^/*][^*]*\*+)*/,
        //   '>'
        // )
      )),

      comment_line: $ => 
        seq('<--', /.*/),

      description: $ => token(prec(PREC.STRING, 
        seq('[', repeat(string_regex), ']'), 
      )),      
    },

    externals: $ => [
      $.comment_block
    ]
  
  });