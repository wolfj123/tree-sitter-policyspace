#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COLON = 1,
  anon_sym_DOT = 2,
  anon_sym_one = 3,
  anon_sym_of = 4,
  anon_sym_COMMA = 5,
  anon_sym_some = 6,
  anon_sym_consists = 7,
  anon_sym_TODO = 8,
  anon_sym_todo = 9,
  sym_identifier_simple = 10,
  anon_sym_LBRACK = 11,
  aux_sym_description_token1 = 12,
  anon_sym_RBRACK = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_slot = 16,
  sym_atomic_values = 17,
  sym_aggregate_values = 18,
  sym_compound_values = 19,
  sym_todo_value = 20,
  sym__identifier = 21,
  sym_identifier_with_desc = 22,
  sym_description = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_atomic_values_repeat1 = 25,
  aux_sym_compound_values_repeat1 = 26,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_one] = "one",
  [anon_sym_of] = "of",
  [anon_sym_COMMA] = ",",
  [anon_sym_some] = "some",
  [anon_sym_consists] = "consists",
  [anon_sym_TODO] = "TODO",
  [anon_sym_todo] = "todo",
  [sym_identifier_simple] = "identifier_simple",
  [anon_sym_LBRACK] = "[",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_slot] = "slot",
  [sym_atomic_values] = "atomic_values",
  [sym_aggregate_values] = "aggregate_values",
  [sym_compound_values] = "compound_values",
  [sym_todo_value] = "todo_value",
  [sym__identifier] = "_identifier",
  [sym_identifier_with_desc] = "identifier_with_desc",
  [sym_description] = "description",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_atomic_values_repeat1] = "atomic_values_repeat1",
  [aux_sym_compound_values_repeat1] = "compound_values_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_some] = anon_sym_some,
  [anon_sym_consists] = anon_sym_consists,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_todo] = anon_sym_todo,
  [sym_identifier_simple] = sym_identifier_simple,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_slot] = sym_slot,
  [sym_atomic_values] = sym_atomic_values,
  [sym_aggregate_values] = sym_aggregate_values,
  [sym_compound_values] = sym_compound_values,
  [sym_todo_value] = sym_todo_value,
  [sym__identifier] = sym__identifier,
  [sym_identifier_with_desc] = sym_identifier_with_desc,
  [sym_description] = sym_description,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_atomic_values_repeat1] = aux_sym_atomic_values_repeat1,
  [aux_sym_compound_values_repeat1] = aux_sym_compound_values_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier_simple] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_values] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_values] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_values] = {
    .visible = true,
    .named = true,
  },
  [sym_todo_value] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_with_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atomic_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_values_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(37)
      if (lookahead != 0 &&
          (lookahead < '!' || '#' < lookahead) &&
          (lookahead < '%' || '9' < lookahead) &&
          (lookahead < ';' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_consists);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ';' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ';' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          (lookahead < '%' || '/' < lookahead) &&
          (lookahead < ';' || '@' < lookahead) &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 50},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
    [anon_sym_consists] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_slot] = STATE(4),
    [sym__identifier] = STATE(29),
    [sym_identifier_with_desc] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier_simple] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_one,
    ACTIONS(11), 1,
      anon_sym_some,
    ACTIONS(13), 1,
      anon_sym_consists,
    ACTIONS(15), 2,
      anon_sym_TODO,
      anon_sym_todo,
    STATE(26), 4,
      sym_atomic_values,
      sym_aggregate_values,
      sym_compound_values,
      sym_todo_value,
  [23] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_identifier_simple,
    STATE(3), 2,
      sym_slot,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym__identifier,
      sym_identifier_with_desc,
  [41] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier_simple,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_slot,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym__identifier,
      sym_identifier_with_desc,
  [59] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_description,
    ACTIONS(24), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [74] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [83] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_atomic_values_repeat1,
  [96] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DOT,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_compound_values_repeat1,
  [109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
  [131] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_compound_values_repeat1,
  [144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier_simple,
    STATE(20), 2,
      sym__identifier,
      sym_identifier_with_desc,
  [181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier_simple,
    STATE(18), 2,
      sym__identifier,
      sym_identifier_with_desc,
  [192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier_simple,
    STATE(7), 2,
      sym__identifier,
      sym_identifier_with_desc,
  [203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_compound_values_repeat1,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_atomic_values_repeat1,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_identifier_simple,
  [253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_of,
  [260] = 2,
    ACTIONS(62), 1,
      aux_sym_description_token1,
    ACTIONS(64), 1,
      sym_comment,
  [267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier_simple,
  [274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DOT,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_identifier_simple,
  [295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DOT,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COLON,
  [309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_of,
  [316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_of,
  [323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 229,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 267,
  [SMALL_STATE(25)] = 274,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 288,
  [SMALL_STATE(28)] = 295,
  [SMALL_STATE(29)] = 302,
  [SMALL_STATE(30)] = 309,
  [SMALL_STATE(31)] = 316,
  [SMALL_STATE(32)] = 323,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(31),
  [11] = {.count = 1, .reusable = true}, SHIFT(30),
  [13] = {.count = 1, .reusable = true}, SHIFT(22),
  [15] = {.count = 1, .reusable = true}, SHIFT(28),
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [26] = {.count = 1, .reusable = true}, SHIFT(23),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_description, 3),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 3),
  [32] = {.count = 1, .reusable = true}, SHIFT(14),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2), SHIFT_REPEAT(27),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_with_desc, 2),
  [41] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 4),
  [48] = {.count = 1, .reusable = true}, SHIFT(27),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 4),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 4),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 4),
  [60] = {.count = 1, .reusable = true}, SHIFT(24),
  [62] = {.count = 1, .reusable = false}, SHIFT(32),
  [64] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [66] = {.count = 1, .reusable = true}, SHIFT(17),
  [68] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [70] = {.count = 1, .reusable = true}, SHIFT(21),
  [72] = {.count = 1, .reusable = true}, SHIFT(19),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_todo_value, 1),
  [76] = {.count = 1, .reusable = true}, SHIFT(2),
  [78] = {.count = 1, .reusable = true}, SHIFT(16),
  [80] = {.count = 1, .reusable = true}, SHIFT(15),
  [82] = {.count = 1, .reusable = true}, SHIFT(6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_policyspace(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
