#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ON = 1,
  anon_sym_WITH = 2,
  anon_sym_DROP = 3,
  anon_sym_SUMMON = 4,
  anon_sym_EXECUTE = 5,
  anon_sym_THROW = 6,
  anon_sym_CLEAR = 7,
  anon_sym_SHUFFLE = 8,
  anon_sym_CHANGE = 9,
  anon_sym_EITHER = 10,
  anon_sym_BOTH = 11,
  anon_sym_NOTHING = 12,
  anon_sym_FOR = 13,
  aux_sym_meta_action_token1 = 14,
  anon_sym_TIMES = 15,
  anon_sym_WAIT = 16,
  anon_sym_REFLECT = 17,
  anon_sym_Donation = 18,
  anon_sym_JustGivingDonation = 19,
  anon_sym_ExtraLifeDonation = 20,
  anon_sym_PatreonPledge = 21,
  anon_sym_TiltifyDonation = 22,
  anon_sym_TreatStreamTreat = 23,
  anon_sym_LoyaltyPointRedemption = 24,
  anon_sym_TwitchChannelPointReward = 25,
  anon_sym_TwitchChatMessage = 26,
  anon_sym_TwitchFollow = 27,
  anon_sym_TwitchSubscriptionGift = 28,
  anon_sym_TwitchSubscription = 29,
  anon_sym_TwitchHost = 30,
  anon_sym_TwitchRaid = 31,
  anon_sym_TwitchBits = 32,
  anon_sym_YoutubeSubscription = 33,
  anon_sym_YoutubeSponsor = 34,
  anon_sym_YoutubeSuperchat = 35,
  anon_sym_MixerFollow = 36,
  anon_sym_MixerSubscription = 37,
  anon_sym_MixerHost = 38,
  anon_sym_actor = 39,
  anon_sym_amount = 40,
  anon_sym_donation_amount = 41,
  anon_sym_badges = 42,
  anon_sym_chat_badges = 43,
  anon_sym_currency = 44,
  anon_sym_donation_currency = 45,
  anon_sym_gifted = 46,
  anon_sym_message = 47,
  anon_sym_months = 48,
  anon_sym_month_count = 49,
  anon_sym_subscription_months = 50,
  anon_sym_raiders = 51,
  anon_sym_raider_count = 52,
  anon_sym_tier = 53,
  anon_sym_subscription_tier = 54,
  anon_sym_title = 55,
  anon_sym_viewers = 56,
  anon_sym_viewer_count = 57,
  sym_comment = 58,
  anon_sym_needtodo = 59,
  anon_sym_RBRACK = 60,
  anon_sym_RBRACE = 61,
  sym__newline = 62,
  sym__indent = 63,
  sym_ruleset = 64,
  sym_meta_action_rule = 65,
  sym_rule = 66,
  sym_action = 67,
  sym_meta_action = 68,
  sym_event = 69,
  sym_predicate = 70,
  sym_action_parameters = 71,
  sym_comparator = 72,
  sym_predicate_value = 73,
  aux_sym_ruleset_repeat1 = 74,
  aux_sym_rule_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ON] = "ON",
  [anon_sym_WITH] = "WITH",
  [anon_sym_DROP] = "DROP",
  [anon_sym_SUMMON] = "SUMMON",
  [anon_sym_EXECUTE] = "EXECUTE",
  [anon_sym_THROW] = "THROW",
  [anon_sym_CLEAR] = "CLEAR",
  [anon_sym_SHUFFLE] = "SHUFFLE",
  [anon_sym_CHANGE] = "CHANGE",
  [anon_sym_EITHER] = "EITHER",
  [anon_sym_BOTH] = "BOTH",
  [anon_sym_NOTHING] = "NOTHING",
  [anon_sym_FOR] = "FOR",
  [aux_sym_meta_action_token1] = "meta_action_token1",
  [anon_sym_TIMES] = "TIMES",
  [anon_sym_WAIT] = "WAIT",
  [anon_sym_REFLECT] = "REFLECT",
  [anon_sym_Donation] = "Donation",
  [anon_sym_JustGivingDonation] = "JustGiving Donation",
  [anon_sym_ExtraLifeDonation] = "ExtraLife Donation",
  [anon_sym_PatreonPledge] = "Patreon Pledge",
  [anon_sym_TiltifyDonation] = "Tiltify Donation",
  [anon_sym_TreatStreamTreat] = "TreatStream Treat",
  [anon_sym_LoyaltyPointRedemption] = "Loyalty Point Redemption",
  [anon_sym_TwitchChannelPointReward] = "Twitch Channel Point Reward",
  [anon_sym_TwitchChatMessage] = "Twitch Chat Message",
  [anon_sym_TwitchFollow] = "Twitch Follow",
  [anon_sym_TwitchSubscriptionGift] = "Twitch Subscription Gift",
  [anon_sym_TwitchSubscription] = "Twitch Subscription",
  [anon_sym_TwitchHost] = "Twitch Host",
  [anon_sym_TwitchRaid] = "Twitch Raid",
  [anon_sym_TwitchBits] = "Twitch Bits",
  [anon_sym_YoutubeSubscription] = "Youtube Subscription",
  [anon_sym_YoutubeSponsor] = "Youtube Sponsor",
  [anon_sym_YoutubeSuperchat] = "Youtube Superchat",
  [anon_sym_MixerFollow] = "Mixer Follow",
  [anon_sym_MixerSubscription] = "Mixer Subscription",
  [anon_sym_MixerHost] = "Mixer Host",
  [anon_sym_actor] = "actor",
  [anon_sym_amount] = "amount",
  [anon_sym_donation_amount] = "donation_amount",
  [anon_sym_badges] = "badges",
  [anon_sym_chat_badges] = "chat_badges",
  [anon_sym_currency] = "currency",
  [anon_sym_donation_currency] = "donation_currency",
  [anon_sym_gifted] = "gifted",
  [anon_sym_message] = "message",
  [anon_sym_months] = "months",
  [anon_sym_month_count] = "month_count",
  [anon_sym_subscription_months] = "subscription_months",
  [anon_sym_raiders] = "raiders",
  [anon_sym_raider_count] = "raider_count",
  [anon_sym_tier] = "tier",
  [anon_sym_subscription_tier] = "subscription_tier",
  [anon_sym_title] = "title",
  [anon_sym_viewers] = "viewers",
  [anon_sym_viewer_count] = "viewer_count",
  [sym_comment] = "comment",
  [anon_sym_needtodo] = "need to do",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym_ruleset] = "ruleset",
  [sym_meta_action_rule] = "meta_action_rule",
  [sym_rule] = "rule",
  [sym_action] = "action",
  [sym_meta_action] = "meta_action",
  [sym_event] = "event",
  [sym_predicate] = "predicate",
  [sym_action_parameters] = "action_parameters",
  [sym_comparator] = "comparator",
  [sym_predicate_value] = "predicate_value",
  [aux_sym_ruleset_repeat1] = "ruleset_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_DROP] = anon_sym_DROP,
  [anon_sym_SUMMON] = anon_sym_SUMMON,
  [anon_sym_EXECUTE] = anon_sym_EXECUTE,
  [anon_sym_THROW] = anon_sym_THROW,
  [anon_sym_CLEAR] = anon_sym_CLEAR,
  [anon_sym_SHUFFLE] = anon_sym_SHUFFLE,
  [anon_sym_CHANGE] = anon_sym_CHANGE,
  [anon_sym_EITHER] = anon_sym_EITHER,
  [anon_sym_BOTH] = anon_sym_BOTH,
  [anon_sym_NOTHING] = anon_sym_NOTHING,
  [anon_sym_FOR] = anon_sym_FOR,
  [aux_sym_meta_action_token1] = aux_sym_meta_action_token1,
  [anon_sym_TIMES] = anon_sym_TIMES,
  [anon_sym_WAIT] = anon_sym_WAIT,
  [anon_sym_REFLECT] = anon_sym_REFLECT,
  [anon_sym_Donation] = anon_sym_Donation,
  [anon_sym_JustGivingDonation] = anon_sym_JustGivingDonation,
  [anon_sym_ExtraLifeDonation] = anon_sym_ExtraLifeDonation,
  [anon_sym_PatreonPledge] = anon_sym_PatreonPledge,
  [anon_sym_TiltifyDonation] = anon_sym_TiltifyDonation,
  [anon_sym_TreatStreamTreat] = anon_sym_TreatStreamTreat,
  [anon_sym_LoyaltyPointRedemption] = anon_sym_LoyaltyPointRedemption,
  [anon_sym_TwitchChannelPointReward] = anon_sym_TwitchChannelPointReward,
  [anon_sym_TwitchChatMessage] = anon_sym_TwitchChatMessage,
  [anon_sym_TwitchFollow] = anon_sym_TwitchFollow,
  [anon_sym_TwitchSubscriptionGift] = anon_sym_TwitchSubscriptionGift,
  [anon_sym_TwitchSubscription] = anon_sym_TwitchSubscription,
  [anon_sym_TwitchHost] = anon_sym_TwitchHost,
  [anon_sym_TwitchRaid] = anon_sym_TwitchRaid,
  [anon_sym_TwitchBits] = anon_sym_TwitchBits,
  [anon_sym_YoutubeSubscription] = anon_sym_YoutubeSubscription,
  [anon_sym_YoutubeSponsor] = anon_sym_YoutubeSponsor,
  [anon_sym_YoutubeSuperchat] = anon_sym_YoutubeSuperchat,
  [anon_sym_MixerFollow] = anon_sym_MixerFollow,
  [anon_sym_MixerSubscription] = anon_sym_MixerSubscription,
  [anon_sym_MixerHost] = anon_sym_MixerHost,
  [anon_sym_actor] = anon_sym_actor,
  [anon_sym_amount] = anon_sym_amount,
  [anon_sym_donation_amount] = anon_sym_donation_amount,
  [anon_sym_badges] = anon_sym_badges,
  [anon_sym_chat_badges] = anon_sym_chat_badges,
  [anon_sym_currency] = anon_sym_currency,
  [anon_sym_donation_currency] = anon_sym_donation_currency,
  [anon_sym_gifted] = anon_sym_gifted,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_months] = anon_sym_months,
  [anon_sym_month_count] = anon_sym_month_count,
  [anon_sym_subscription_months] = anon_sym_subscription_months,
  [anon_sym_raiders] = anon_sym_raiders,
  [anon_sym_raider_count] = anon_sym_raider_count,
  [anon_sym_tier] = anon_sym_tier,
  [anon_sym_subscription_tier] = anon_sym_subscription_tier,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_viewers] = anon_sym_viewers,
  [anon_sym_viewer_count] = anon_sym_viewer_count,
  [sym_comment] = sym_comment,
  [anon_sym_needtodo] = anon_sym_needtodo,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym_ruleset] = sym_ruleset,
  [sym_meta_action_rule] = sym_meta_action_rule,
  [sym_rule] = sym_rule,
  [sym_action] = sym_action,
  [sym_meta_action] = sym_meta_action,
  [sym_event] = sym_event,
  [sym_predicate] = sym_predicate,
  [sym_action_parameters] = sym_action_parameters,
  [sym_comparator] = sym_comparator,
  [sym_predicate_value] = sym_predicate_value,
  [aux_sym_ruleset_repeat1] = aux_sym_ruleset_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUMMON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXECUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THROW] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLEAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHUFFLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EITHER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOTH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTHING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_meta_action_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TIMES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REFLECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Donation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JustGivingDonation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ExtraLifeDonation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PatreonPledge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TiltifyDonation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TreatStreamTreat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LoyaltyPointRedemption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchChannelPointReward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchChatMessage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchFollow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchSubscriptionGift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchSubscription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchHost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchRaid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwitchBits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YoutubeSubscription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YoutubeSponsor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YoutubeSuperchat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MixerFollow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MixerSubscription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MixerHost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_amount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_donation_amount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_badges] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chat_badges] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_donation_currency] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gifted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_month_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subscription_months] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raiders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raider_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subscription_tier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_viewers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_viewer_count] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_needtodo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym_ruleset] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_action_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_action] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_action_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_comparator] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ruleset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
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
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(411);
      if (lookahead == '#') ADVANCE(469);
      if (lookahead == 'B') ADVANCE(63);
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'J') ADVANCE(388);
      if (lookahead == 'L') ADVANCE(271);
      if (lookahead == 'M') ADVANCE(197);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead == 'P') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'W') ADVANCE(16);
      if (lookahead == 'Y') ADVANCE(274);
      if (lookahead == ']') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 's') ADVANCE(389);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'v') ADVANCE(205);
      if (lookahead == '}') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(373);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(298);
      if (lookahead == 'H') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(301);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(303);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(305);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(420);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(416);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(419);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'F') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'F') ADVANCE(275);
      if (lookahead == 'H') ADVANCE(294);
      if (lookahead == 'S') ADVANCE(398);
      END_STATE();
    case 36:
      if (lookahead == 'F') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'G') ADVANCE(423);
      END_STATE();
    case 39:
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'G') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == 'G') ADVANCE(220);
      END_STATE();
    case 42:
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'U') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'H') ADVANCE(422);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(413);
      END_STATE();
    case 46:
      if (lookahead == 'H') ADVANCE(77);
      if (lookahead == 'I') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 'w') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == 'H') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'H') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(86);
      if (lookahead == 'X') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(364);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(204);
      END_STATE();
    case 55:
      if (lookahead == 'M') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'M') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(179);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(412);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(415);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'P') ADVANCE(414);
      END_STATE();
    case 70:
      if (lookahead == 'P') ADVANCE(291);
      END_STATE();
    case 71:
      if (lookahead == 'P') ADVANCE(233);
      END_STATE();
    case 72:
      if (lookahead == 'P') ADVANCE(300);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(424);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(418);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(421);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(175);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(162);
      END_STATE();
    case 80:
      if (lookahead == 'S') ADVANCE(426);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(307);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(383);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(427);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(428);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'T') ADVANCE(330);
      END_STATE();
    case 91:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 92:
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 'W') ADVANCE(417);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(237);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 's') ADVANCE(462);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(351);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(367);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(338);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(347);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(348);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(324);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(332);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(457);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(436);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 181:
      if (lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 182:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(362);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(410);
      END_STATE();
    case 185:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 186:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 187:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 191:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 192:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 193:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 194:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 195:
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 196:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 197:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 199:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(280);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(371);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 227:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 228:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 229:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 231:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 233:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 236:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 237:
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 238:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 239:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 240:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 241:
      if (lookahead == 'n') ADVANCE(433);
      END_STATE();
    case 242:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 243:
      if (lookahead == 'n') ADVANCE(448);
      END_STATE();
    case 244:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 245:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 248:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 250:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 251:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 297:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 298:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 299:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 300:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 301:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 302:
      if (lookahead == 'o') ADVANCE(394);
      END_STATE();
    case 303:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 310:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 311:
      if (lookahead == 'p') ADVANCE(386);
      END_STATE();
    case 312:
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(453);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(443);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(365);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(441);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(452);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 369:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 370:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 371:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 372:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 373:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 374:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 375:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 388:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 389:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 390:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 391:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 392:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 393:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 394:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 395:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 400:
      if (lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 401:
      if (lookahead == 'w') ADVANCE(447);
      END_STATE();
    case 402:
      if (lookahead == 'w') ADVANCE(438);
      END_STATE();
    case 403:
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 404:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 405:
      if (lookahead == 'x') ADVANCE(166);
      END_STATE();
    case 406:
      if (lookahead == 'y') ADVANCE(455);
      END_STATE();
    case 407:
      if (lookahead == 'y') ADVANCE(456);
      END_STATE();
    case 408:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 409:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 410:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DROP);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_SUMMON);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_EXECUTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_THROW);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_CLEAR);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_SHUFFLE);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_CHANGE);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EITHER);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BOTH);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_NOTHING);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_meta_action_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_REFLECT);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_Donation);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_JustGivingDonation);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_ExtraLifeDonation);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_PatreonPledge);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_TiltifyDonation);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_TreatStreamTreat);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LoyaltyPointRedemption);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_TwitchChannelPointReward);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_TwitchChatMessage);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_TwitchFollow);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_TwitchSubscriptionGift);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_TwitchSubscription);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_TwitchHost);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_TwitchRaid);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_TwitchBits);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_YoutubeSubscription);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_YoutubeSponsor);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_YoutubeSuperchat);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_MixerFollow);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_MixerSubscription);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_MixerHost);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_amount);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_donation_amount);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_badges);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_chat_badges);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_donation_currency);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_gifted);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_month_count);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_subscription_months);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_raiders);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_raider_count);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_tier);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_subscription_tier);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_viewers);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_viewer_count);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_needtodo);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token_comment = 2,
  ts_external_token_RBRACK = 3,
  ts_external_token_RBRACE = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comparator] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_DROP] = ACTIONS(1),
    [anon_sym_SUMMON] = ACTIONS(1),
    [anon_sym_EXECUTE] = ACTIONS(1),
    [anon_sym_THROW] = ACTIONS(1),
    [anon_sym_CLEAR] = ACTIONS(1),
    [anon_sym_SHUFFLE] = ACTIONS(1),
    [anon_sym_CHANGE] = ACTIONS(1),
    [anon_sym_EITHER] = ACTIONS(1),
    [anon_sym_BOTH] = ACTIONS(1),
    [anon_sym_NOTHING] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [aux_sym_meta_action_token1] = ACTIONS(1),
    [anon_sym_TIMES] = ACTIONS(1),
    [anon_sym_WAIT] = ACTIONS(1),
    [anon_sym_REFLECT] = ACTIONS(1),
    [anon_sym_Donation] = ACTIONS(1),
    [anon_sym_JustGivingDonation] = ACTIONS(1),
    [anon_sym_ExtraLifeDonation] = ACTIONS(1),
    [anon_sym_PatreonPledge] = ACTIONS(1),
    [anon_sym_TiltifyDonation] = ACTIONS(1),
    [anon_sym_TreatStreamTreat] = ACTIONS(1),
    [anon_sym_LoyaltyPointRedemption] = ACTIONS(1),
    [anon_sym_TwitchChannelPointReward] = ACTIONS(1),
    [anon_sym_TwitchChatMessage] = ACTIONS(1),
    [anon_sym_TwitchFollow] = ACTIONS(1),
    [anon_sym_TwitchSubscriptionGift] = ACTIONS(1),
    [anon_sym_TwitchSubscription] = ACTIONS(1),
    [anon_sym_TwitchHost] = ACTIONS(1),
    [anon_sym_TwitchRaid] = ACTIONS(1),
    [anon_sym_TwitchBits] = ACTIONS(1),
    [anon_sym_YoutubeSubscription] = ACTIONS(1),
    [anon_sym_YoutubeSponsor] = ACTIONS(1),
    [anon_sym_YoutubeSuperchat] = ACTIONS(1),
    [anon_sym_MixerFollow] = ACTIONS(1),
    [anon_sym_MixerSubscription] = ACTIONS(1),
    [anon_sym_MixerHost] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [anon_sym_amount] = ACTIONS(1),
    [anon_sym_donation_amount] = ACTIONS(1),
    [anon_sym_badges] = ACTIONS(1),
    [anon_sym_chat_badges] = ACTIONS(1),
    [anon_sym_currency] = ACTIONS(1),
    [anon_sym_donation_currency] = ACTIONS(1),
    [anon_sym_gifted] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_months] = ACTIONS(1),
    [anon_sym_month_count] = ACTIONS(1),
    [anon_sym_subscription_months] = ACTIONS(1),
    [anon_sym_raiders] = ACTIONS(1),
    [anon_sym_raider_count] = ACTIONS(1),
    [anon_sym_tier] = ACTIONS(1),
    [anon_sym_subscription_tier] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_viewers] = ACTIONS(1),
    [anon_sym_viewer_count] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_needtodo] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
  },
  [1] = {
    [sym_ruleset] = STATE(21),
    [sym_meta_action_rule] = STATE(12),
    [sym_rule] = STATE(12),
    [sym_action] = STATE(20),
    [sym_meta_action] = STATE(14),
    [sym_comparator] = STATE(1),
    [aux_sym_ruleset_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DROP] = ACTIONS(9),
    [anon_sym_SUMMON] = ACTIONS(9),
    [anon_sym_EXECUTE] = ACTIONS(9),
    [anon_sym_THROW] = ACTIONS(9),
    [anon_sym_CLEAR] = ACTIONS(9),
    [anon_sym_SHUFFLE] = ACTIONS(9),
    [anon_sym_CHANGE] = ACTIONS(9),
    [anon_sym_EITHER] = ACTIONS(11),
    [anon_sym_BOTH] = ACTIONS(11),
    [anon_sym_NOTHING] = ACTIONS(11),
    [anon_sym_FOR] = ACTIONS(13),
    [anon_sym_WAIT] = ACTIONS(11),
    [anon_sym_REFLECT] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_needtodo] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(17), 1,
      anon_sym_TwitchSubscription,
    STATE(2), 1,
      sym_comparator,
    STATE(8), 1,
      sym_event,
    ACTIONS(15), 20,
      anon_sym_Donation,
      anon_sym_JustGivingDonation,
      anon_sym_ExtraLifeDonation,
      anon_sym_PatreonPledge,
      anon_sym_TiltifyDonation,
      anon_sym_TreatStreamTreat,
      anon_sym_LoyaltyPointRedemption,
      anon_sym_TwitchChannelPointReward,
      anon_sym_TwitchChatMessage,
      anon_sym_TwitchFollow,
      anon_sym_TwitchSubscriptionGift,
      anon_sym_TwitchHost,
      anon_sym_TwitchRaid,
      anon_sym_TwitchBits,
      anon_sym_YoutubeSubscription,
      anon_sym_YoutubeSponsor,
      anon_sym_YoutubeSuperchat,
      anon_sym_MixerFollow,
      anon_sym_MixerSubscription,
      anon_sym_MixerHost,
  [38] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(3), 1,
      sym_comparator,
    STATE(24), 1,
      sym_predicate,
    ACTIONS(19), 19,
      anon_sym_actor,
      anon_sym_amount,
      anon_sym_donation_amount,
      anon_sym_badges,
      anon_sym_chat_badges,
      anon_sym_currency,
      anon_sym_donation_currency,
      anon_sym_gifted,
      anon_sym_message,
      anon_sym_months,
      anon_sym_month_count,
      anon_sym_subscription_months,
      anon_sym_raiders,
      anon_sym_raider_count,
      anon_sym_tier,
      anon_sym_subscription_tier,
      anon_sym_title,
      anon_sym_viewers,
      anon_sym_viewer_count,
  [72] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_FOR,
    STATE(14), 1,
      sym_meta_action,
    STATE(20), 1,
      sym_action,
    STATE(4), 2,
      sym_comparator,
      aux_sym_ruleset_repeat1,
    STATE(12), 2,
      sym_meta_action_rule,
      sym_rule,
    ACTIONS(26), 5,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_WAIT,
      anon_sym_REFLECT,
    ACTIONS(23), 7,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
  [115] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(13), 1,
      anon_sym_FOR,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_ruleset_repeat1,
    STATE(5), 1,
      sym_comparator,
    STATE(14), 1,
      sym_meta_action,
    STATE(20), 1,
      sym_action,
    STATE(12), 2,
      sym_meta_action_rule,
      sym_rule,
    ACTIONS(11), 5,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_WAIT,
      anon_sym_REFLECT,
    ACTIONS(9), 7,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
  [160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(36), 1,
      anon_sym_WITH,
    STATE(6), 2,
      sym_comparator,
      aux_sym_rule_repeat1,
    ACTIONS(34), 14,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(41), 1,
      anon_sym_WITH,
    STATE(6), 1,
      aux_sym_rule_repeat1,
    STATE(7), 1,
      sym_comparator,
    ACTIONS(39), 14,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(41), 1,
      anon_sym_WITH,
    STATE(7), 1,
      aux_sym_rule_repeat1,
    STATE(8), 1,
      sym_comparator,
    ACTIONS(43), 14,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(9), 1,
      sym_comparator,
    ACTIONS(45), 15,
      ts_builtin_sym_end,
      anon_sym_WITH,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(10), 1,
      sym_comparator,
    ACTIONS(47), 15,
      ts_builtin_sym_end,
      anon_sym_WITH,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(11), 1,
      sym_comparator,
    ACTIONS(49), 15,
      ts_builtin_sym_end,
      anon_sym_WITH,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(12), 1,
      sym_comparator,
    ACTIONS(51), 14,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(13), 1,
      sym_comparator,
    ACTIONS(53), 14,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
  [387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(13), 1,
      sym_rule,
    STATE(14), 1,
      sym_comparator,
    STATE(20), 1,
      sym_action,
    ACTIONS(9), 7,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
  [412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(15), 1,
      sym_comparator,
    ACTIONS(55), 7,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
  [431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    STATE(16), 1,
      sym_comparator,
    ACTIONS(57), 7,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(59), 1,
      anon_sym_ON,
    STATE(17), 1,
      sym_comparator,
  [463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(61), 1,
      anon_sym_ON,
    STATE(18), 1,
      sym_comparator,
  [476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(63), 1,
      anon_sym_TIMES,
    STATE(19), 1,
      sym_comparator,
  [489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_needtodo,
    STATE(17), 1,
      sym_action_parameters,
    STATE(20), 1,
      sym_comparator,
  [502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comparator,
  [515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_needtodo,
    ACTIONS(69), 1,
      aux_sym_meta_action_token1,
    STATE(22), 1,
      sym_comparator,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_needtodo,
    STATE(23), 1,
      sym_comparator,
  [538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_needtodo,
    STATE(24), 1,
      sym_comparator,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_needtodo,
    STATE(25), 1,
      sym_comparator,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_needtodo,
    STATE(26), 1,
      sym_comparator,
  [568] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 254,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 387,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 502,
  [SMALL_STATE(22)] = 515,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 538,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 568,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleset, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(25),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(16),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleset, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate_value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action_rule, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_parameters, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparator, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_twitchspawnlanguage_external_scanner_create(void);
void tree_sitter_twitchspawnlanguage_external_scanner_destroy(void *);
bool tree_sitter_twitchspawnlanguage_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_twitchspawnlanguage_external_scanner_serialize(void *, char *);
void tree_sitter_twitchspawnlanguage_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_twitchspawnlanguage(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_twitchspawnlanguage_external_scanner_create,
      tree_sitter_twitchspawnlanguage_external_scanner_destroy,
      tree_sitter_twitchspawnlanguage_external_scanner_scan,
      tree_sitter_twitchspawnlanguage_external_scanner_serialize,
      tree_sitter_twitchspawnlanguage_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
