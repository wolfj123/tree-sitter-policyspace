#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COLON = 1,
  anon_sym_DOT = 2,
  anon_sym_one = 3,
  anon_sym_of = 4,
  anon_sym_COMMA = 5,
  anon_sym_some = 6,
  anon_sym_consists = 7,
  sym_todo_value = 8,
  sym_identifier_simple = 9,
  anon_sym_LT_DASH_DASH = 10,
  aux_sym_comment_token1 = 11,
  sym_description = 12,
  sym__comment_block = 13,
  sym_policyspace = 14,
  sym_slot = 15,
  sym_atomic_values = 16,
  sym_aggregate_values = 17,
  sym_compound_values = 18,
  sym__identifier = 19,
  sym_identifier_with_desc = 20,
  sym_comment = 21,
  aux_sym_policyspace_repeat1 = 22,
  aux_sym_atomic_values_repeat1 = 23,
  aux_sym_compound_values_repeat1 = 24,
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
  [sym_todo_value] = "todo_value",
  [sym_identifier_simple] = "identifier_simple",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_description] = "description",
  [sym__comment_block] = "_comment_block",
  [sym_policyspace] = "policyspace",
  [sym_slot] = "slot",
  [sym_atomic_values] = "atomic_values",
  [sym_aggregate_values] = "aggregate_values",
  [sym_compound_values] = "compound_values",
  [sym__identifier] = "_identifier",
  [sym_identifier_with_desc] = "identifier_with_desc",
  [sym_comment] = "comment",
  [aux_sym_policyspace_repeat1] = "policyspace_repeat1",
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
  [sym_todo_value] = sym_todo_value,
  [sym_identifier_simple] = sym_identifier_simple,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_description] = sym_description,
  [sym__comment_block] = sym__comment_block,
  [sym_policyspace] = sym_policyspace,
  [sym_slot] = sym_slot,
  [sym_atomic_values] = sym_atomic_values,
  [sym_aggregate_values] = sym_aggregate_values,
  [sym_compound_values] = sym_compound_values,
  [sym__identifier] = sym__identifier,
  [sym_identifier_with_desc] = sym_identifier_with_desc,
  [sym_comment] = sym_comment,
  [aux_sym_policyspace_repeat1] = aux_sym_policyspace_repeat1,
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
  [sym_todo_value] = {
    .visible = true,
    .named = true,
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
  [sym__comment_block] = {
    .visible = false,
    .named = true,
  },
  [sym_policyspace] = {
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
  [aux_sym_policyspace_repeat1] = {
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

enum {
  field_name = 1,
  field_values = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_values, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 's') ADVANCE(14);
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
      if (lookahead == '-') ADVANCE(44);
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
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(47);
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
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '{') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(33)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_consists);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_todo_value);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_description);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 33, .external_lex_state = 1},
  [4] = {.lex_state = 33, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 33, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 33, .external_lex_state = 1},
  [18] = {.lex_state = 33, .external_lex_state = 1},
  [19] = {.lex_state = 33, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 33, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 33, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 33, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 45},
  [32] = {-1},
  [33] = {-1},
};

enum {
  ts_external_token__comment_block = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__comment_block] = sym__comment_block,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__comment_block] = true,
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
    [sym_todo_value] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym_description] = ACTIONS(1),
    [sym__comment_block] = ACTIONS(5),
  },
  [1] = {
    [sym_policyspace] = STATE(27),
    [sym_slot] = STATE(22),
    [sym__identifier] = STATE(30),
    [sym_identifier_with_desc] = STATE(10),
    [sym_comment] = STATE(1),
    [aux_sym_policyspace_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier_simple] = ACTIONS(9),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      anon_sym_one,
    ACTIONS(13), 1,
      anon_sym_some,
    ACTIONS(15), 1,
      anon_sym_consists,
    ACTIONS(17), 1,
      sym_todo_value,
    STATE(2), 1,
      sym_comment,
    STATE(23), 3,
      sym_atomic_values,
      sym_aggregate_values,
      sym_compound_values,
  [27] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier_simple,
    STATE(10), 1,
      sym_identifier_with_desc,
    STATE(22), 1,
      sym_slot,
    STATE(30), 1,
      sym__identifier,
    STATE(3), 2,
      sym_comment,
      aux_sym_policyspace_repeat1,
  [53] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_policyspace_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_identifier_with_desc,
    STATE(22), 1,
      sym_slot,
    STATE(30), 1,
      sym__identifier,
  [81] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      sym_description,
    STATE(5), 1,
      sym_comment,
    ACTIONS(26), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [99] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(30), 1,
      anon_sym_DOT,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_compound_values_repeat1,
  [118] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      sym_identifier_with_desc,
    STATE(20), 1,
      sym__identifier,
  [137] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(34), 1,
      anon_sym_DOT,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(8), 2,
      sym_comment,
      aux_sym_compound_values_repeat1,
  [154] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(9), 2,
      sym_comment,
      aux_sym_atomic_values_repeat1,
  [171] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(10), 1,
      sym_comment,
    ACTIONS(26), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [186] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_compound_values_repeat1,
    STATE(11), 1,
      sym_comment,
  [205] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(12), 1,
      sym_comment,
    ACTIONS(46), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_COMMA,
  [220] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_atomic_values_repeat1,
    STATE(13), 1,
      sym_comment,
  [239] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_atomic_values_repeat1,
    STATE(14), 1,
      sym_comment,
  [258] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_atomic_values_repeat1,
    STATE(15), 1,
      sym_comment,
  [277] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_atomic_values_repeat1,
    STATE(16), 1,
      sym_comment,
  [296] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(10), 1,
      sym_identifier_with_desc,
    STATE(15), 1,
      sym__identifier,
    STATE(17), 1,
      sym_comment,
  [315] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      sym_identifier_simple,
    STATE(10), 1,
      sym_identifier_with_desc,
    STATE(16), 1,
      sym__identifier,
    STATE(18), 1,
      sym_comment,
  [334] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(19), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_identifier_simple,
  [348] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(20), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [362] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(21), 1,
      sym_comment,
    ACTIONS(34), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(22), 1,
      sym_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_identifier_simple,
  [390] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_comment,
  [403] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(64), 1,
      sym_identifier_simple,
    STATE(24), 1,
      sym_comment,
  [416] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(66), 1,
      anon_sym_of,
    STATE(25), 1,
      sym_comment,
  [429] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(68), 1,
      anon_sym_of,
    STATE(26), 1,
      sym_comment,
  [442] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
  [455] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(72), 1,
      anon_sym_of,
    STATE(28), 1,
      sym_comment,
  [468] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(74), 1,
      sym_identifier_simple,
    STATE(29), 1,
      sym_comment,
  [481] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(76), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_comment,
  [494] = 1,
    ACTIONS(78), 1,
      aux_sym_comment_token1,
  [498] = 1,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
  [502] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 258,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 376,
  [SMALL_STATE(23)] = 390,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 455,
  [SMALL_STATE(29)] = 468,
  [SMALL_STATE(30)] = 481,
  [SMALL_STATE(31)] = 494,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 502,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(31),
  [5] = {.count = 1, .reusable = true}, SHIFT(32),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_policyspace, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(28),
  [13] = {.count = 1, .reusable = true}, SHIFT(26),
  [15] = {.count = 1, .reusable = true}, SHIFT(25),
  [17] = {.count = 1, .reusable = true}, SHIFT(23),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_policyspace, 1),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym__identifier, 1),
  [28] = {.count = 1, .reusable = true}, SHIFT(12),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 3),
  [32] = {.count = 1, .reusable = true}, SHIFT(29),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 4),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_identifier_with_desc, 2),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 4),
  [50] = {.count = 1, .reusable = true}, SHIFT(7),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 4),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 3),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 4, .production_id = 1),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(19),
  [64] = {.count = 1, .reusable = true}, SHIFT(6),
  [66] = {.count = 1, .reusable = true}, SHIFT(24),
  [68] = {.count = 1, .reusable = true}, SHIFT(17),
  [70] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [72] = {.count = 1, .reusable = true}, SHIFT(18),
  [74] = {.count = 1, .reusable = true}, SHIFT(21),
  [76] = {.count = 1, .reusable = true}, SHIFT(2),
  [78] = {.count = 1, .reusable = true}, SHIFT(33),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
