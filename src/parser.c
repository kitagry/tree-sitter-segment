#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  anon_sym__ = 2,
  sym_word = 3,
  sym_source_file = 4,
  sym__identifier = 5,
  sym__snake_case_identifier = 6,
  aux_sym__camel_case_identifier = 7,
  aux_sym_source_file_repeat1 = 8,
  aux_sym__snake_case_identifier_repeat1 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym__] = "_",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__identifier] = "_identifier",
  [sym__snake_case_identifier] = "_snake_case_identifier",
  [aux_sym__camel_case_identifier] = "_camel_case_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__snake_case_identifier_repeat1] = "_snake_case_identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym__] = anon_sym__,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__identifier] = sym__identifier,
  [sym__snake_case_identifier] = sym__snake_case_identifier,
  [aux_sym__camel_case_identifier] = aux_sym__camel_case_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__snake_case_identifier_repeat1] = aux_sym__snake_case_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__snake_case_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__camel_case_identifier] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__snake_case_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '_') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(6);
      END_STATE();
    case 1:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(6);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '_') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__identifier] = STATE(12),
    [sym__snake_case_identifier] = STATE(12),
    [aux_sym__camel_case_identifier] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_word] = ACTIONS(5),
  },
  [2] = {
    [sym__identifier] = STATE(12),
    [sym__snake_case_identifier] = STATE(12),
    [aux_sym__camel_case_identifier] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_word] = ACTIONS(5),
  },
  [3] = {
    [sym__identifier] = STATE(12),
    [sym__snake_case_identifier] = STATE(12),
    [aux_sym__camel_case_identifier] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_word] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(16), 1,
      anon_sym__,
    STATE(6), 1,
      aux_sym__snake_case_identifier_repeat1,
    ACTIONS(14), 2,
      aux_sym_source_file_token1,
      sym_word,
  [11] = 3,
    ACTIONS(18), 1,
      aux_sym_source_file_token1,
    ACTIONS(20), 1,
      sym_word,
    STATE(7), 1,
      aux_sym__camel_case_identifier,
  [21] = 3,
    ACTIONS(16), 1,
      anon_sym__,
    ACTIONS(22), 1,
      aux_sym_source_file_token1,
    STATE(8), 1,
      aux_sym__snake_case_identifier_repeat1,
  [31] = 3,
    ACTIONS(24), 1,
      aux_sym_source_file_token1,
    ACTIONS(26), 1,
      sym_word,
    STATE(7), 1,
      aux_sym__camel_case_identifier,
  [41] = 3,
    ACTIONS(29), 1,
      aux_sym_source_file_token1,
    ACTIONS(31), 1,
      anon_sym__,
    STATE(8), 1,
      aux_sym__snake_case_identifier_repeat1,
  [51] = 1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_word,
  [56] = 1,
    ACTIONS(29), 2,
      aux_sym_source_file_token1,
      anon_sym__,
  [61] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [65] = 1,
    ACTIONS(36), 1,
      aux_sym_source_file_token1,
  [69] = 1,
    ACTIONS(38), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 21,
  [SMALL_STATE(7)] = 31,
  [SMALL_STATE(8)] = 41,
  [SMALL_STATE(9)] = 51,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 65,
  [SMALL_STATE(13)] = 69,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__camel_case_identifier, 1),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__snake_case_identifier, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__camel_case_identifier, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__camel_case_identifier, 2), SHIFT_REPEAT(7),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__snake_case_identifier_repeat1, 2), SHIFT_REPEAT(13),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_segment(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
