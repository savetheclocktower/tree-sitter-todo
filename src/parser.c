#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__text_token1 = 1,
  anon_sym_TODO = 2,
  anon_sym_FIXME = 3,
  anon_sym_CHANGED = 4,
  anon_sym_XXX = 5,
  anon_sym_IDEA = 6,
  anon_sym_HACK = 7,
  anon_sym_NOTE = 8,
  anon_sym_REVIEW = 9,
  anon_sym_NB = 10,
  anon_sym_BUG = 11,
  anon_sym_QUESTION = 12,
  anon_sym_COMBAK = 13,
  anon_sym_TEMP = 14,
  anon_sym_DEBUG = 15,
  anon_sym_OPTIMIZE = 16,
  anon_sym_WARNING = 17,
  sym__name_false_alarms = 18,
  anon_sym_COLON = 19,
  sym___newline = 20,
  sym___whitespace = 21,
  sym_source = 22,
  sym__text = 23,
  sym_name = 24,
  sym_tag = 25,
  aux_sym_source_repeat1 = 26,
  aux_sym_line_repeat1 = 27,
  aux_sym__text_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_TODO] = "TODO",
  [anon_sym_FIXME] = "FIXME",
  [anon_sym_CHANGED] = "CHANGED",
  [anon_sym_XXX] = "XXX",
  [anon_sym_IDEA] = "IDEA",
  [anon_sym_HACK] = "HACK",
  [anon_sym_NOTE] = "NOTE",
  [anon_sym_REVIEW] = "REVIEW",
  [anon_sym_NB] = "NB",
  [anon_sym_BUG] = "BUG",
  [anon_sym_QUESTION] = "QUESTION",
  [anon_sym_COMBAK] = "COMBAK",
  [anon_sym_TEMP] = "TEMP",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_OPTIMIZE] = "OPTIMIZE",
  [anon_sym_WARNING] = "WARNING",
  [sym__name_false_alarms] = "_name_false_alarms",
  [anon_sym_COLON] = ":",
  [sym___newline] = "__newline",
  [sym___whitespace] = "__whitespace",
  [sym_source] = "source",
  [sym__text] = "_text",
  [sym_name] = "name",
  [sym_tag] = "tag",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_FIXME] = anon_sym_FIXME,
  [anon_sym_CHANGED] = anon_sym_CHANGED,
  [anon_sym_XXX] = anon_sym_XXX,
  [anon_sym_IDEA] = anon_sym_IDEA,
  [anon_sym_HACK] = anon_sym_HACK,
  [anon_sym_NOTE] = anon_sym_NOTE,
  [anon_sym_REVIEW] = anon_sym_REVIEW,
  [anon_sym_NB] = anon_sym_NB,
  [anon_sym_BUG] = anon_sym_BUG,
  [anon_sym_QUESTION] = anon_sym_QUESTION,
  [anon_sym_COMBAK] = anon_sym_COMBAK,
  [anon_sym_TEMP] = anon_sym_TEMP,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_OPTIMIZE] = anon_sym_OPTIMIZE,
  [anon_sym_WARNING] = anon_sym_WARNING,
  [sym__name_false_alarms] = sym__name_false_alarms,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym___newline] = sym___newline,
  [sym___whitespace] = sym___whitespace,
  [sym_source] = sym_source,
  [sym__text] = sym__text,
  [sym_name] = sym_name,
  [sym_tag] = sym_tag,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIXME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHANGED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XXX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IDEA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REVIEW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUESTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMBAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIMIZE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING] = {
    .visible = true,
    .named = false,
  },
  [sym__name_false_alarms] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym___newline] = {
    .visible = false,
    .named = true,
  },
  [sym___whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'Q') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == 'X') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'Q') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == 'X') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'Q') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == 'X') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__text_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_FIXME);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_CHANGED);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_XXX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_IDEA);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_HACK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_NOTE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_REVIEW);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_NB);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BUG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_QUESTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMBAK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_TEMP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_OPTIMIZE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'A') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'A') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'A') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'A') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'A') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'B') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'B') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'B') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'C') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'D') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'D') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'D') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'E') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'G') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'G') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'G') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'G') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'I') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'K') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'K') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'M') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'M') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'M') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'M') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'N') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'N') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'N') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'N') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'O') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'O') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'P') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'P') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'R') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'S') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'T') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'T') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'T') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'U') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'U') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'U') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'V') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'W') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'X') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'X') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'X') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (lookahead == 'Z') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name_false_alarms);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym___newline);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym___whitespace);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_FIXME] = ACTIONS(1),
    [anon_sym_CHANGED] = ACTIONS(1),
    [anon_sym_XXX] = ACTIONS(1),
    [anon_sym_IDEA] = ACTIONS(1),
    [anon_sym_HACK] = ACTIONS(1),
    [anon_sym_NOTE] = ACTIONS(1),
    [anon_sym_REVIEW] = ACTIONS(1),
    [anon_sym_NB] = ACTIONS(1),
    [anon_sym_BUG] = ACTIONS(1),
    [anon_sym_QUESTION] = ACTIONS(1),
    [anon_sym_COMBAK] = ACTIONS(1),
    [anon_sym_TEMP] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_OPTIMIZE] = ACTIONS(1),
    [anon_sym_WARNING] = ACTIONS(1),
    [sym__name_false_alarms] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym___newline] = ACTIONS(1),
    [sym___whitespace] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym__text] = STATE(4),
    [sym_name] = STATE(7),
    [sym_tag] = STATE(4),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym__text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_TODO] = ACTIONS(9),
    [anon_sym_FIXME] = ACTIONS(9),
    [anon_sym_CHANGED] = ACTIONS(9),
    [anon_sym_XXX] = ACTIONS(9),
    [anon_sym_IDEA] = ACTIONS(9),
    [anon_sym_HACK] = ACTIONS(9),
    [anon_sym_NOTE] = ACTIONS(9),
    [anon_sym_REVIEW] = ACTIONS(9),
    [anon_sym_NB] = ACTIONS(9),
    [anon_sym_BUG] = ACTIONS(9),
    [anon_sym_QUESTION] = ACTIONS(9),
    [anon_sym_COMBAK] = ACTIONS(9),
    [anon_sym_TEMP] = ACTIONS(9),
    [anon_sym_DEBUG] = ACTIONS(9),
    [anon_sym_OPTIMIZE] = ACTIONS(9),
    [anon_sym_WARNING] = ACTIONS(9),
    [sym__name_false_alarms] = ACTIONS(7),
    [sym___whitespace] = ACTIONS(3),
  },
  [2] = {
    [sym__text] = STATE(4),
    [sym_name] = STATE(7),
    [sym_tag] = STATE(4),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym__text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_TODO] = ACTIONS(9),
    [anon_sym_FIXME] = ACTIONS(9),
    [anon_sym_CHANGED] = ACTIONS(9),
    [anon_sym_XXX] = ACTIONS(9),
    [anon_sym_IDEA] = ACTIONS(9),
    [anon_sym_HACK] = ACTIONS(9),
    [anon_sym_NOTE] = ACTIONS(9),
    [anon_sym_REVIEW] = ACTIONS(9),
    [anon_sym_NB] = ACTIONS(9),
    [anon_sym_BUG] = ACTIONS(9),
    [anon_sym_QUESTION] = ACTIONS(9),
    [anon_sym_COMBAK] = ACTIONS(9),
    [anon_sym_TEMP] = ACTIONS(9),
    [anon_sym_DEBUG] = ACTIONS(9),
    [anon_sym_OPTIMIZE] = ACTIONS(9),
    [anon_sym_WARNING] = ACTIONS(9),
    [sym__name_false_alarms] = ACTIONS(7),
    [sym___whitespace] = ACTIONS(3),
  },
  [3] = {
    [sym__text] = STATE(4),
    [sym_name] = STATE(7),
    [sym_tag] = STATE(4),
    [aux_sym_source_repeat1] = STATE(3),
    [aux_sym_line_repeat1] = STATE(4),
    [aux_sym__text_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(15),
    [anon_sym_TODO] = ACTIONS(18),
    [anon_sym_FIXME] = ACTIONS(18),
    [anon_sym_CHANGED] = ACTIONS(18),
    [anon_sym_XXX] = ACTIONS(18),
    [anon_sym_IDEA] = ACTIONS(18),
    [anon_sym_HACK] = ACTIONS(18),
    [anon_sym_NOTE] = ACTIONS(18),
    [anon_sym_REVIEW] = ACTIONS(18),
    [anon_sym_NB] = ACTIONS(18),
    [anon_sym_BUG] = ACTIONS(18),
    [anon_sym_QUESTION] = ACTIONS(18),
    [anon_sym_COMBAK] = ACTIONS(18),
    [anon_sym_TEMP] = ACTIONS(18),
    [anon_sym_DEBUG] = ACTIONS(18),
    [anon_sym_OPTIMIZE] = ACTIONS(18),
    [anon_sym_WARNING] = ACTIONS(18),
    [sym__name_false_alarms] = ACTIONS(15),
    [sym___whitespace] = ACTIONS(3),
  },
  [4] = {
    [sym__text] = STATE(5),
    [sym_name] = STATE(7),
    [sym_tag] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [aux_sym__text_repeat1] = STATE(5),
    [aux_sym__text_token1] = ACTIONS(21),
    [anon_sym_TODO] = ACTIONS(9),
    [anon_sym_FIXME] = ACTIONS(9),
    [anon_sym_CHANGED] = ACTIONS(9),
    [anon_sym_XXX] = ACTIONS(9),
    [anon_sym_IDEA] = ACTIONS(9),
    [anon_sym_HACK] = ACTIONS(9),
    [anon_sym_NOTE] = ACTIONS(9),
    [anon_sym_REVIEW] = ACTIONS(9),
    [anon_sym_NB] = ACTIONS(9),
    [anon_sym_BUG] = ACTIONS(9),
    [anon_sym_QUESTION] = ACTIONS(9),
    [anon_sym_COMBAK] = ACTIONS(9),
    [anon_sym_TEMP] = ACTIONS(9),
    [anon_sym_DEBUG] = ACTIONS(9),
    [anon_sym_OPTIMIZE] = ACTIONS(9),
    [anon_sym_WARNING] = ACTIONS(9),
    [sym__name_false_alarms] = ACTIONS(21),
    [sym___newline] = ACTIONS(23),
    [sym___whitespace] = ACTIONS(3),
  },
  [5] = {
    [sym__text] = STATE(5),
    [sym_name] = STATE(7),
    [sym_tag] = STATE(5),
    [aux_sym_line_repeat1] = STATE(5),
    [aux_sym__text_repeat1] = STATE(5),
    [aux_sym__text_token1] = ACTIONS(25),
    [anon_sym_TODO] = ACTIONS(28),
    [anon_sym_FIXME] = ACTIONS(28),
    [anon_sym_CHANGED] = ACTIONS(28),
    [anon_sym_XXX] = ACTIONS(28),
    [anon_sym_IDEA] = ACTIONS(28),
    [anon_sym_HACK] = ACTIONS(28),
    [anon_sym_NOTE] = ACTIONS(28),
    [anon_sym_REVIEW] = ACTIONS(28),
    [anon_sym_NB] = ACTIONS(28),
    [anon_sym_BUG] = ACTIONS(28),
    [anon_sym_QUESTION] = ACTIONS(28),
    [anon_sym_COMBAK] = ACTIONS(28),
    [anon_sym_TEMP] = ACTIONS(28),
    [anon_sym_DEBUG] = ACTIONS(28),
    [anon_sym_OPTIMIZE] = ACTIONS(28),
    [anon_sym_WARNING] = ACTIONS(28),
    [sym__name_false_alarms] = ACTIONS(25),
    [sym___newline] = ACTIONS(31),
    [sym___whitespace] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__text_token1] = ACTIONS(33),
    [anon_sym_TODO] = ACTIONS(33),
    [anon_sym_FIXME] = ACTIONS(33),
    [anon_sym_CHANGED] = ACTIONS(33),
    [anon_sym_XXX] = ACTIONS(33),
    [anon_sym_IDEA] = ACTIONS(33),
    [anon_sym_HACK] = ACTIONS(33),
    [anon_sym_NOTE] = ACTIONS(33),
    [anon_sym_REVIEW] = ACTIONS(33),
    [anon_sym_NB] = ACTIONS(33),
    [anon_sym_BUG] = ACTIONS(33),
    [anon_sym_QUESTION] = ACTIONS(33),
    [anon_sym_COMBAK] = ACTIONS(33),
    [anon_sym_TEMP] = ACTIONS(33),
    [anon_sym_DEBUG] = ACTIONS(33),
    [anon_sym_OPTIMIZE] = ACTIONS(33),
    [anon_sym_WARNING] = ACTIONS(33),
    [sym__name_false_alarms] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [sym___newline] = ACTIONS(33),
    [sym___whitespace] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__text_token1] = ACTIONS(37),
    [anon_sym_TODO] = ACTIONS(37),
    [anon_sym_FIXME] = ACTIONS(37),
    [anon_sym_CHANGED] = ACTIONS(37),
    [anon_sym_XXX] = ACTIONS(37),
    [anon_sym_IDEA] = ACTIONS(37),
    [anon_sym_HACK] = ACTIONS(37),
    [anon_sym_NOTE] = ACTIONS(37),
    [anon_sym_REVIEW] = ACTIONS(37),
    [anon_sym_NB] = ACTIONS(37),
    [anon_sym_BUG] = ACTIONS(37),
    [anon_sym_QUESTION] = ACTIONS(37),
    [anon_sym_COMBAK] = ACTIONS(37),
    [anon_sym_TEMP] = ACTIONS(37),
    [anon_sym_DEBUG] = ACTIONS(37),
    [anon_sym_OPTIMIZE] = ACTIONS(37),
    [anon_sym_WARNING] = ACTIONS(37),
    [sym__name_false_alarms] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [sym___newline] = ACTIONS(37),
    [sym___whitespace] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__text_repeat1] = STATE(8),
    [aux_sym__text_token1] = ACTIONS(41),
    [anon_sym_TODO] = ACTIONS(44),
    [anon_sym_FIXME] = ACTIONS(44),
    [anon_sym_CHANGED] = ACTIONS(44),
    [anon_sym_XXX] = ACTIONS(44),
    [anon_sym_IDEA] = ACTIONS(44),
    [anon_sym_HACK] = ACTIONS(44),
    [anon_sym_NOTE] = ACTIONS(44),
    [anon_sym_REVIEW] = ACTIONS(44),
    [anon_sym_NB] = ACTIONS(44),
    [anon_sym_BUG] = ACTIONS(44),
    [anon_sym_QUESTION] = ACTIONS(44),
    [anon_sym_COMBAK] = ACTIONS(44),
    [anon_sym_TEMP] = ACTIONS(44),
    [anon_sym_DEBUG] = ACTIONS(44),
    [anon_sym_OPTIMIZE] = ACTIONS(44),
    [anon_sym_WARNING] = ACTIONS(44),
    [sym__name_false_alarms] = ACTIONS(44),
    [sym___newline] = ACTIONS(44),
    [sym___whitespace] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__text_token1] = ACTIONS(46),
    [anon_sym_TODO] = ACTIONS(46),
    [anon_sym_FIXME] = ACTIONS(46),
    [anon_sym_CHANGED] = ACTIONS(46),
    [anon_sym_XXX] = ACTIONS(46),
    [anon_sym_IDEA] = ACTIONS(46),
    [anon_sym_HACK] = ACTIONS(46),
    [anon_sym_NOTE] = ACTIONS(46),
    [anon_sym_REVIEW] = ACTIONS(46),
    [anon_sym_NB] = ACTIONS(46),
    [anon_sym_BUG] = ACTIONS(46),
    [anon_sym_QUESTION] = ACTIONS(46),
    [anon_sym_COMBAK] = ACTIONS(46),
    [anon_sym_TEMP] = ACTIONS(46),
    [anon_sym_DEBUG] = ACTIONS(46),
    [anon_sym_OPTIMIZE] = ACTIONS(46),
    [anon_sym_WARNING] = ACTIONS(46),
    [sym__name_false_alarms] = ACTIONS(46),
    [sym___newline] = ACTIONS(46),
    [sym___whitespace] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym__text_token1] = ACTIONS(48),
    [anon_sym_TODO] = ACTIONS(48),
    [anon_sym_FIXME] = ACTIONS(48),
    [anon_sym_CHANGED] = ACTIONS(48),
    [anon_sym_XXX] = ACTIONS(48),
    [anon_sym_IDEA] = ACTIONS(48),
    [anon_sym_HACK] = ACTIONS(48),
    [anon_sym_NOTE] = ACTIONS(48),
    [anon_sym_REVIEW] = ACTIONS(48),
    [anon_sym_NB] = ACTIONS(48),
    [anon_sym_BUG] = ACTIONS(48),
    [anon_sym_QUESTION] = ACTIONS(48),
    [anon_sym_COMBAK] = ACTIONS(48),
    [anon_sym_TEMP] = ACTIONS(48),
    [anon_sym_DEBUG] = ACTIONS(48),
    [anon_sym_OPTIMIZE] = ACTIONS(48),
    [anon_sym_WARNING] = ACTIONS(48),
    [sym__name_false_alarms] = ACTIONS(48),
    [sym___whitespace] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym___whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todo(void) {
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
