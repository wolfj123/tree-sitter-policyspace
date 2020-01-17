//const alpha = /[^\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
//const alpha_numeric = /[^\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/



//.,/~?!()@:#$%^&*_+-

//const alpha = /[^\s0-9;`"'@#.,|^&<=>+\-*/\\%?!~(){}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
//const alpha_numeric = /[^\s;`"'@#.,|^&<=>+\-*/\\%?!~(){}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
//const newline = /[\n]|[\n\r]/


// const identifier_punctuation = /[\.,\/~\?!\(\)@:#\$%\^&\*_\+-]/
// const alpha = /[0-9a-zA-Z]/
// const alpha_numeric = /[0-9a-zA-Z]/
// const numeric = /[0-9]/
// const whitespace = /\s/
// const description_alpha = /[0-9a-zA-Z]|[\.,\/~\?!\(\)@:#\$%\^&\*_\+-]|[\s]/



const alpha = /[^\s0-9;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const alpha_numeric = /[^\s;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const string_regex = /[^;`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/


const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
};




module.exports = grammar({
    name: 'policyspace',
  
    rules: {
      // TODO: add the actual grammar rules
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
        //,$.identifier_simple
      ),

      identifier_simple: $ => {
        return token(seq(alpha, repeat(alpha_numeric)))
        //return token(seq(alpha, repeat(choice(alpha_numeric, identifier_punctuation))))
        //return token(seq(repeat(alpha)))
      },

      identifier_with_desc: $ => seq(
        $.identifier_simple,
        $.description
      ),

      // description: $ => seq(
      //   '[',
      //   token(repeat(
      //     alpha_numeric
      //   )),
      //   ']'
      // ),

      //https://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment
      comment: $ => token(prec(PREC.COMMENT, choice(
        seq('<--', /.*/),
        seq(
          '<*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '>'
        )
      ))),

      description: $ => token(prec(PREC.STRING, //choice(
        seq('[', repeat(string_regex), ']'), //one line description
        // seq(
        //   '[',
        //   repeat(choice(alpha_numeric, newline)),
        //   ']'
        // ) //multi line description
        //)
      )),
          
    },

    extras: $ => [
      $.comment,
      /[\s\uFEFF\u2060\u200B\u00A0]/
    ],
  });