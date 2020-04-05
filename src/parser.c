#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_COLON = 1,
  anon_sym_DOT = 2,
  anon_sym_one = 3,
  anon_sym_of = 4,
  anon_sym_COMMA = 5,
  anon_sym_some = 6,
  anon_sym_consists = 7,
  sym_todo_value = 8,
  sym_identifier_value = 9,
  anon_sym_LT_DASH_DASH = 10,
  aux_sym_comment_token1 = 11,
  sym_description = 12,
  sym__comment_block = 13,
  sym_policyspace = 14,
  sym_slot = 15,
  sym_atomic_values = 16,
  sym_aggregate_values = 17,
  sym_compound_values = 18,
  sym_identifier = 19,
  sym_slot_value = 20,
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
  [sym_identifier_value] = "identifier_value",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_description] = "description",
  [sym__comment_block] = "_comment_block",
  [sym_policyspace] = "policyspace",
  [sym_slot] = "slot",
  [sym_atomic_values] = "atomic_values",
  [sym_aggregate_values] = "aggregate_values",
  [sym_compound_values] = "compound_values",
  [sym_identifier] = "identifier",
  [sym_slot_value] = "slot_value",
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
  [sym_identifier_value] = sym_identifier_value,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_description] = sym_description,
  [sym__comment_block] = sym__comment_block,
  [sym_policyspace] = sym_policyspace,
  [sym_slot] = sym_slot,
  [sym_atomic_values] = sym_atomic_values,
  [sym_aggregate_values] = sym_aggregate_values,
  [sym_compound_values] = sym_compound_values,
  [sym_identifier] = sym_identifier,
  [sym_slot_value] = sym_slot_value,
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
  [sym_identifier_value] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_value] = {
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
          (lookahead < '.' || '>' < lookahead) &&
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
      ACCEPT_TOKEN(sym_identifier_value);
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
          lookahead != '/' &&
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
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 33, .external_lex_state = 1},
  [20] = {.lex_state = 33, .external_lex_state = 1},
  [21] = {.lex_state = 33, .external_lex_state = 1},
  [22] = {.lex_state = 33, .external_lex_state = 1},
  [23] = {.lex_state = 33, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 33, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 33, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {-1},
  [37] = {-1},
  [38] = {.lex_state = 45},
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
    [sym_policyspace] = STATE(35),
    [sym_slot] = STATE(23),
    [sym_identifier] = STATE(34),
    [sym_comment] = STATE(1),
    [aux_sym_policyspace_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier_value] = ACTIONS(9),
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
    STATE(28), 3,
      sym_atomic_values,
      sym_aggregate_values,
      sym_compound_values,
  [27] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      sym_identifier_value,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_policyspace_repeat1,
    STATE(23), 1,
      sym_slot,
    STATE(34), 1,
      sym_identifier,
  [52] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier_value,
    STATE(23), 1,
      sym_slot,
    STATE(34), 1,
      sym_identifier,
    STATE(4), 2,
      sym_comment,
      aux_sym_policyspace_repeat1,
  [75] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(26), 1,
      anon_sym_DOT,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(30), 1,
      sym_description,
    STATE(5), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_atomic_values_repeat1,
  [97] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(34), 1,
      sym_description,
    STATE(6), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_atomic_values_repeat1,
  [119] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(7), 1,
      sym_comment,
    ACTIONS(36), 3,
      anon_sym_DOT,
      anon_sym_COMMA,
      sym_description,
  [134] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(38), 1,
      anon_sym_DOT,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    STATE(8), 2,
      sym_comment,
      aux_sym_compound_values_repeat1,
  [151] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
  [170] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(10), 2,
      sym_comment,
      aux_sym_atomic_values_repeat1,
  [187] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
    STATE(11), 1,
      sym_comment,
  [206] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(52), 1,
      sym_description,
    STATE(12), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [223] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_compound_values_repeat1,
    STATE(13), 1,
      sym_comment,
  [242] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
    STATE(14), 1,
      sym_comment,
  [261] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_atomic_values_repeat1,
    STATE(15), 1,
      sym_comment,
  [280] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_atomic_values_repeat1,
    STATE(16), 1,
      sym_comment,
  [299] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_atomic_values_repeat1,
    STATE(17), 1,
      sym_comment,
  [318] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_compound_values_repeat1,
    STATE(18), 1,
      sym_comment,
  [337] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(64), 1,
      sym_identifier_value,
    STATE(5), 1,
      sym_slot_value,
    STATE(19), 1,
      sym_comment,
  [353] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(20), 1,
      sym_comment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_identifier_value,
  [367] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(64), 1,
      sym_identifier_value,
    STATE(6), 1,
      sym_slot_value,
    STATE(21), 1,
      sym_comment,
  [383] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(64), 1,
      sym_identifier_value,
    STATE(12), 1,
      sym_slot_value,
    STATE(22), 1,
      sym_comment,
  [399] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(23), 1,
      sym_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_identifier_value,
  [413] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(72), 1,
      sym_description,
    STATE(24), 1,
      sym_comment,
  [429] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(25), 1,
      sym_comment,
    ACTIONS(38), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [443] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(26), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_DOT,
      anon_sym_COMMA,
  [457] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(76), 1,
      sym_identifier_value,
    STATE(27), 1,
      sym_comment,
  [470] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(28), 1,
      sym_comment,
  [483] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(80), 1,
      anon_sym_of,
    STATE(29), 1,
      sym_comment,
  [496] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(82), 1,
      anon_sym_of,
    STATE(30), 1,
      sym_comment,
  [509] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(84), 1,
      anon_sym_of,
    STATE(31), 1,
      sym_comment,
  [522] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(86), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_comment,
  [535] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(88), 1,
      sym_identifier_value,
    STATE(33), 1,
      sym_comment,
  [548] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(90), 1,
      anon_sym_COLON,
    STATE(34), 1,
      sym_comment,
  [561] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym_comment,
  [574] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [578] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [582] = 1,
    ACTIONS(98), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 318,
  [SMALL_STATE(19)] = 337,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 367,
  [SMALL_STATE(22)] = 383,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 443,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 470,
  [SMALL_STATE(29)] = 483,
  [SMALL_STATE(30)] = 496,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 548,
  [SMALL_STATE(35)] = 561,
  [SMALL_STATE(36)] = 574,
  [SMALL_STATE(37)] = 578,
  [SMALL_STATE(38)] = 582,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(38),
  [5] = {.count = 1, .reusable = true}, SHIFT(36),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_policyspace, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(24),
  [11] = {.count = 1, .reusable = true}, SHIFT(31),
  [13] = {.count = 1, .reusable = true}, SHIFT(30),
  [15] = {.count = 1, .reusable = true}, SHIFT(29),
  [17] = {.count = 1, .reusable = true}, SHIFT(28),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_policyspace, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 2),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 3),
  [28] = {.count = 1, .reusable = true}, SHIFT(22),
  [30] = {.count = 1, .reusable = true}, SHIFT(15),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 3),
  [34] = {.count = 1, .reusable = true}, SHIFT(17),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_values_repeat1, 2), SHIFT_REPEAT(33),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 5),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 2), SHIFT_REPEAT(22),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 5),
  [52] = {.count = 1, .reusable = true}, SHIFT(26),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 4),
  [56] = {.count = 1, .reusable = true}, SHIFT(33),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_values, 4),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_values, 4),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_compound_values, 3),
  [64] = {.count = 1, .reusable = true}, SHIFT(7),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 4, .production_id = 1),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_policyspace_repeat1, 1),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [72] = {.count = 1, .reusable = true}, SHIFT(32),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atomic_values_repeat1, 3),
  [76] = {.count = 1, .reusable = true}, SHIFT(18),
  [78] = {.count = 1, .reusable = true}, SHIFT(20),
  [80] = {.count = 1, .reusable = true}, SHIFT(27),
  [82] = {.count = 1, .reusable = true}, SHIFT(19),
  [84] = {.count = 1, .reusable = true}, SHIFT(21),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [88] = {.count = 1, .reusable = true}, SHIFT(25),
  [90] = {.count = 1, .reusable = true}, SHIFT(2),
  [92] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [98] = {.count = 1, .reusable = true}, SHIFT(37),
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
