#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 1
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
  anon_sym_LT_DASH_DASH = 11,
  aux_sym_comment_token1 = 12,
  sym_description = 13,
  sym_comment_block = 14,
  sym_source_file = 15,
  sym_slot = 16,
  sym_atomic_values = 17,
  sym_aggregate_values = 18,
  sym_compound_values = 19,
  sym_todo_value = 20,
  sym__identifier = 21,
  sym_identifier_with_desc = 22,
  sym_comment = 23,
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
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_description] = "description",
  [sym_comment_block] = "comment_block",
  [sym_source_file] = "source_file",
  [sym_slot] = "slot",
  [sym_atomic_values] = "atomic_values",
  [sym_aggregate_values] = "aggregate_values",
  [sym_compound_values] = "compound_values",
  [sym_todo_value] = "todo_value",
  [sym__identifier] = "_identifier",
  [sym_identifier_with_desc] = "identifier_with_desc",
  [sym_comment] = "comment",
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
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_description] = sym_description,
  [sym_comment_block] = sym_comment_block,
  [sym_source_file] = sym_source_file,
  [sym_slot] = sym_slot,
  [sym_atomic_values] = sym_atomic_values,
  [sym_aggregate_values] = sym_aggregate_values,
  [sym_compound_values] = sym_compound_values,
  [sym_todo_value] = sym_todo_value,
  [sym__identifier] = sym__identifier,
  [sym_identifier_with_desc] = sym_identifier_with_desc,
  [sym_comment] = sym_comment,
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
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_block] = {
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
  [sym_comment] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
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
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(36)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_consists);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_description);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 36, .external_lex_state = 1},
  [4] = {.lex_state = 36, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 36, .external_lex_state = 1},
  [16] = {.lex_state = 36, .external_lex_state = 1},
  [17] = {.lex_state = 36, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 36, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 36, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 36, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 36, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 49},
  [33] = {-1},
  [34] = {-1},
};

enum {
  ts_external_token_comment_block = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment_block] = sym_comment_block,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment_block] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym_description] = ACTIONS(1),
    [sym_comment_block] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_slot] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_identifier_with_desc] = STATE(9),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier_simple] = ACTIONS(9),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym_comment_block] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(11), 1,
      anon_sym_one,
    ACTIONS(13), 1,
      anon_sym_some,
    ACTIONS(15), 1,
      anon_sym_consists,
    STATE(2), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_TODO,
      anon_sym_todo,
    STATE(26), 4,
      sym_atomic_values,
      sym_aggregate_values,
      sym_compound_values,
      sym_todo_value,
  [29] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier_simple,
    STATE(9), 1,
      sym_identifier_with_desc,
    STATE(19), 1,
      sym_slot,
    STATE(24), 1,
      sym__identifier,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [55] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      sym_identifier_with_desc,
    STATE(19), 1,
      sym_slot,
    STATE(24), 1,
      sym__identifier,
  [83] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(28), 1,
      sym_description,
    STATE(5), 1,
      sym_comment,
    ACTIONS(26), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [101] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_atomic_values_repeat1,
  [120] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_atomic_values_repeat1,
  [139] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(36), 1,
      anon_sym_DOT,
    ACTIONS(38), 1,
      anon_sym_COMMA,
    STATE(8), 2,
      sym_comment,
      aux_sym_compound_values_repeat1,
  [156] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(9), 1,
      sym_comment,
    ACTIONS(26), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [171] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(10), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [186] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_comment,
      aux_sym_atomic_values_repeat1,
  [203] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_compound_values_repeat1,
    STATE(12), 1,
      sym_comment,
  [222] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_atomic_values_repeat1,
    STATE(13), 1,
      sym_comment,
  [241] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_atomic_values_repeat1,
    STATE(14), 1,
      sym_comment,
  [260] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(9), 1,
      sym_identifier_with_desc,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      sym__identifier,
  [279] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(7), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier_with_desc,
    STATE(16), 1,
      sym_comment,
  [298] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(6), 1,
      sym__identifier,
    STATE(9), 1,
      sym_identifier_with_desc,
    STATE(17), 1,
      sym_comment,
  [317] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_compound_values_repeat1,
    STATE(18), 1,
      sym_comment,
  [336] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(19), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_identifier_simple,
  [350] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(20), 1,
      sym_comment,
    ACTIONS(36), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [364] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(21), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [378] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    STATE(22), 1,
      sym_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_identifier_simple,
  [392] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(62), 1,
      anon_sym_of,
    STATE(23), 1,
      sym_comment,
  [405] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(64), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_comment,
  [418] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(66), 1,
      sym_identifier_simple,
    STATE(25), 1,
      sym_comment,
  [431] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(68), 1,
      anon_sym_DOT,
    STATE(26), 1,
      sym_comment,
  [444] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
  [457] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(72), 1,
      sym_identifier_simple,
    STATE(28), 1,
      sym_comment,
  [470] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(74), 1,
      anon_sym_of,
    STATE(29), 1,
      sym_comment,
  [483] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(76), 1,
      anon_sym_of,
    STATE(30), 1,
      sym_comment,
  [496] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym_comment_block,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_comment,
  [509] = 1,
    ACTIONS(80), 1,
      aux_sym_comment_token1,
  [513] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [517] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 317,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 378,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 405,
  [SMALL_STATE(25)] = 418,
  [SMALL_STATE(26)] = 431,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 457,
  [SMALL_STATE(29)] = 470,
  [SMALL_STATE(30)] = 483,
  [SMALL_STATE(31)] = 496,
  [SMALL_STATE(32)] = 509,
  [SMALL_STATE(33)] = 513,
  [SMALL_STATE(34)] = 517,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(32),
  [5] = {.count = 1, .reusable = true}, SHIFT(33),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(23),
  [13] = {.count = 1, .reusable = true}, SHIFT(30),
  [15] = {.count = 1, .reusable = true}, SHIFT(29),
  [17] = {.count = 1, .reusable = true}, SHIFT(27),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [28] = {.count = 1, .reusable = true}, SHIFT(10),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 3),
  [32] = {.count = 1, .reusable = true}, SHIFT(15),
  [34] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 3),
  [36] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_with_desc, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2), SHIFT_REPEAT(15),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 4),
  [50] = {.count = 1, .reusable = true}, SHIFT(28),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 4),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 4),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 4),
  [62] = {.count = 1, .reusable = true}, SHIFT(16),
  [64] = {.count = 1, .reusable = true}, SHIFT(2),
  [66] = {.count = 1, .reusable = true}, SHIFT(18),
  [68] = {.count = 1, .reusable = true}, SHIFT(22),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_todo_value, 1),
  [72] = {.count = 1, .reusable = true}, SHIFT(20),
  [74] = {.count = 1, .reusable = true}, SHIFT(25),
  [76] = {.count = 1, .reusable = true}, SHIFT(17),
  [78] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [80] = {.count = 1, .reusable = true}, SHIFT(34),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_policyspace_external_scanner_create(void);
void tree_sitter_policyspace_external_scanner_destroy(void *);
bool tree_sitter_policyspace_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_policyspace_external_scanner_serialize(void *, char *);
void tree_sitter_policyspace_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_policyspace_external_scanner_create,
      tree_sitter_policyspace_external_scanner_destroy,
      tree_sitter_policyspace_external_scanner_scan,
      tree_sitter_policyspace_external_scanner_serialize,
      tree_sitter_policyspace_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
