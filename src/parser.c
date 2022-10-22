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
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DROP = 1,
  aux_sym_drop_rule_token1 = 2,
  anon_sym_SUMMON = 3,
  anon_sym_EXECUTE = 4,
  anon_sym_THROW = 5,
  anon_sym_CLEAR = 6,
  anon_sym_SHUFFLE = 7,
  anon_sym_CHANGE = 8,
  anon_sym_INTO = 9,
  aux_sym_item_id_token1 = 10,
  aux_sym_item_id_token2 = 11,
  aux_sym_nbt_item_token1 = 12,
  aux_sym_nbt_item_token2 = 13,
  aux_sym_entity_token1 = 14,
  aux_sym_coordinate_val_token1 = 15,
  anon_sym_TILDE = 16,
  aux_sym_coordinate_val_token2 = 17,
  anon_sym_needtodo = 18,
  sym_command = 19,
  anon_sym_FROM = 20,
  anon_sym_helmet = 21,
  anon_sym_chestplate = 22,
  anon_sym_leggings = 23,
  anon_sym_boots = 24,
  anon_sym_off_DASHhand = 25,
  anon_sym_main_DASHhand = 26,
  anon_sym_inventory = 27,
  anon_sym_armors = 28,
  anon_sym_hotbar = 29,
  anon_sym_randomly = 30,
  anon_sym_everything = 31,
  anon_sym_slot = 32,
  aux_sym_slot_num_token1 = 33,
  anon_sym_ON = 34,
  anon_sym_WITH = 35,
  anon_sym_EITHER = 36,
  anon_sym_BOTH = 37,
  anon_sym_NOTHING = 38,
  anon_sym_FOR = 39,
  anon_sym_TIMES = 40,
  anon_sym_WAIT = 41,
  anon_sym_REFLECT = 42,
  anon_sym_Donation = 43,
  anon_sym_JustGivingDonation = 44,
  anon_sym_ExtraLifeDonation = 45,
  anon_sym_PatreonPledge = 46,
  anon_sym_TiltifyDonation = 47,
  anon_sym_TreatStreamTreat = 48,
  anon_sym_LoyaltyPointRedemption = 49,
  anon_sym_TwitchChannelPointReward = 50,
  anon_sym_TwitchChatMessage = 51,
  anon_sym_TwitchFollow = 52,
  anon_sym_TwitchSubscriptionGift = 53,
  anon_sym_TwitchSubscription = 54,
  anon_sym_TwitchHost = 55,
  anon_sym_TwitchRaid = 56,
  anon_sym_TwitchBits = 57,
  anon_sym_YoutubeSubscription = 58,
  anon_sym_YoutubeSponsor = 59,
  anon_sym_YoutubeSuperchat = 60,
  anon_sym_MixerFollow = 61,
  anon_sym_MixerSubscription = 62,
  anon_sym_MixerHost = 63,
  anon_sym_actor = 64,
  anon_sym_amount = 65,
  anon_sym_donation_amount = 66,
  anon_sym_badges = 67,
  anon_sym_chat_badges = 68,
  anon_sym_currency = 69,
  anon_sym_donation_currency = 70,
  anon_sym_gifted = 71,
  anon_sym_message = 72,
  anon_sym_months = 73,
  anon_sym_month_count = 74,
  anon_sym_subscription_months = 75,
  anon_sym_raiders = 76,
  anon_sym_raider_count = 77,
  anon_sym_tier = 78,
  anon_sym_subscription_tier = 79,
  anon_sym_title = 80,
  anon_sym_viewers = 81,
  anon_sym_viewer_count = 82,
  sym_comment = 83,
  anon_sym_EQ = 84,
  anon_sym_GT = 85,
  anon_sym_LT = 86,
  anon_sym_GT_EQ = 87,
  anon_sym_LT_EQ = 88,
  anon_sym_IS = 89,
  anon_sym_PREFIX = 90,
  anon_sym_POSTFIX = 91,
  anon_sym_INRANGE = 92,
  anon_sym_CONTAINS = 93,
  anon_sym_DISPLAYING = 94,
  anon_sym_PERCENT_LBRACK = 95,
  aux_sym_display_text_token1 = 96,
  anon_sym_DQUOTE = 97,
  anon_sym_DOLLAR_LBRACE = 98,
  anon_sym_RBRACE = 99,
  aux_sym_display_text_token2 = 100,
  aux_sym_display_text_token3 = 101,
  anon_sym_RBRACK = 102,
  sym__newline = 103,
  sym__indent = 104,
  sym_ruleset = 105,
  sym_meta_action_rule = 106,
  sym_drop_rule = 107,
  sym_summon_rule = 108,
  sym_execute_rule = 109,
  sym_throw_rule = 110,
  sym_clear_rule = 111,
  sym_shuffle_rule = 112,
  sym_change_rule = 113,
  sym_item = 114,
  sym_item_id = 115,
  sym_nbt_item = 116,
  sym_entity = 117,
  sym_coordinates = 118,
  sym_coordinate_val = 119,
  sym_nbt_data = 120,
  sym_slot_val = 121,
  sym_modified_selection = 122,
  sym_slot_name = 123,
  sym_inventory_name = 124,
  sym_modifier = 125,
  sym_slot_num = 126,
  sym_slot_group = 127,
  sym_meta_action = 128,
  sym_predicate = 129,
  sym_comparator = 130,
  sym_display_text = 131,
  aux_sym_ruleset_repeat1 = 132,
  aux_sym_execute_rule_repeat1 = 133,
  aux_sym_display_text_repeat1 = 134,
  aux_sym_display_text_repeat2 = 135,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DROP] = "DROP",
  [aux_sym_drop_rule_token1] = "drop_rule_token1",
  [anon_sym_SUMMON] = "SUMMON",
  [anon_sym_EXECUTE] = "EXECUTE",
  [anon_sym_THROW] = "THROW",
  [anon_sym_CLEAR] = "CLEAR",
  [anon_sym_SHUFFLE] = "SHUFFLE",
  [anon_sym_CHANGE] = "CHANGE",
  [anon_sym_INTO] = "INTO",
  [aux_sym_item_id_token1] = "item_id_token1",
  [aux_sym_item_id_token2] = "item_id_token2",
  [aux_sym_nbt_item_token1] = "nbt_item_token1",
  [aux_sym_nbt_item_token2] = "nbt_item_token2",
  [aux_sym_entity_token1] = "entity_token1",
  [aux_sym_coordinate_val_token1] = "coordinate_val_token1",
  [anon_sym_TILDE] = "~",
  [aux_sym_coordinate_val_token2] = "coordinate_val_token2",
  [anon_sym_needtodo] = "need to do",
  [sym_command] = "command",
  [anon_sym_FROM] = "FROM",
  [anon_sym_helmet] = "helmet",
  [anon_sym_chestplate] = "chestplate",
  [anon_sym_leggings] = "leggings",
  [anon_sym_boots] = "boots",
  [anon_sym_off_DASHhand] = "off-hand",
  [anon_sym_main_DASHhand] = "main-hand",
  [anon_sym_inventory] = "inventory",
  [anon_sym_armors] = "armors",
  [anon_sym_hotbar] = "hotbar",
  [anon_sym_randomly] = "randomly",
  [anon_sym_everything] = "everything",
  [anon_sym_slot] = "slot",
  [aux_sym_slot_num_token1] = "slot_num_token1",
  [anon_sym_ON] = "ON",
  [anon_sym_WITH] = "WITH",
  [anon_sym_EITHER] = "EITHER",
  [anon_sym_BOTH] = "BOTH",
  [anon_sym_NOTHING] = "NOTHING",
  [anon_sym_FOR] = "FOR",
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
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_IS] = "IS",
  [anon_sym_PREFIX] = "PREFIX",
  [anon_sym_POSTFIX] = "POSTFIX",
  [anon_sym_INRANGE] = "IN RANGE",
  [anon_sym_CONTAINS] = "CONTAINS",
  [anon_sym_DISPLAYING] = "DISPLAYING",
  [anon_sym_PERCENT_LBRACK] = "%[",
  [aux_sym_display_text_token1] = "display_text_token1",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [aux_sym_display_text_token2] = "display_text_token2",
  [aux_sym_display_text_token3] = "display_text_token3",
  [anon_sym_RBRACK] = "]",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym_ruleset] = "ruleset",
  [sym_meta_action_rule] = "meta_action_rule",
  [sym_drop_rule] = "drop_rule",
  [sym_summon_rule] = "summon_rule",
  [sym_execute_rule] = "execute_rule",
  [sym_throw_rule] = "throw_rule",
  [sym_clear_rule] = "clear_rule",
  [sym_shuffle_rule] = "shuffle_rule",
  [sym_change_rule] = "change_rule",
  [sym_item] = "item",
  [sym_item_id] = "item_id",
  [sym_nbt_item] = "nbt_item",
  [sym_entity] = "entity",
  [sym_coordinates] = "coordinates",
  [sym_coordinate_val] = "coordinate_val",
  [sym_nbt_data] = "nbt_data",
  [sym_slot_val] = "slot_val",
  [sym_modified_selection] = "modified_selection",
  [sym_slot_name] = "slot_name",
  [sym_inventory_name] = "inventory_name",
  [sym_modifier] = "modifier",
  [sym_slot_num] = "slot_num",
  [sym_slot_group] = "slot_group",
  [sym_meta_action] = "meta_action",
  [sym_predicate] = "predicate",
  [sym_comparator] = "comparator",
  [sym_display_text] = "display_text",
  [aux_sym_ruleset_repeat1] = "ruleset_repeat1",
  [aux_sym_execute_rule_repeat1] = "execute_rule_repeat1",
  [aux_sym_display_text_repeat1] = "display_text_repeat1",
  [aux_sym_display_text_repeat2] = "display_text_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DROP] = anon_sym_DROP,
  [aux_sym_drop_rule_token1] = aux_sym_drop_rule_token1,
  [anon_sym_SUMMON] = anon_sym_SUMMON,
  [anon_sym_EXECUTE] = anon_sym_EXECUTE,
  [anon_sym_THROW] = anon_sym_THROW,
  [anon_sym_CLEAR] = anon_sym_CLEAR,
  [anon_sym_SHUFFLE] = anon_sym_SHUFFLE,
  [anon_sym_CHANGE] = anon_sym_CHANGE,
  [anon_sym_INTO] = anon_sym_INTO,
  [aux_sym_item_id_token1] = aux_sym_item_id_token1,
  [aux_sym_item_id_token2] = aux_sym_item_id_token2,
  [aux_sym_nbt_item_token1] = aux_sym_nbt_item_token1,
  [aux_sym_nbt_item_token2] = aux_sym_nbt_item_token2,
  [aux_sym_entity_token1] = aux_sym_entity_token1,
  [aux_sym_coordinate_val_token1] = aux_sym_coordinate_val_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_coordinate_val_token2] = aux_sym_coordinate_val_token2,
  [anon_sym_needtodo] = anon_sym_needtodo,
  [sym_command] = sym_command,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_helmet] = anon_sym_helmet,
  [anon_sym_chestplate] = anon_sym_chestplate,
  [anon_sym_leggings] = anon_sym_leggings,
  [anon_sym_boots] = anon_sym_boots,
  [anon_sym_off_DASHhand] = anon_sym_off_DASHhand,
  [anon_sym_main_DASHhand] = anon_sym_main_DASHhand,
  [anon_sym_inventory] = anon_sym_inventory,
  [anon_sym_armors] = anon_sym_armors,
  [anon_sym_hotbar] = anon_sym_hotbar,
  [anon_sym_randomly] = anon_sym_randomly,
  [anon_sym_everything] = anon_sym_everything,
  [anon_sym_slot] = anon_sym_slot,
  [aux_sym_slot_num_token1] = aux_sym_slot_num_token1,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_WITH] = anon_sym_WITH,
  [anon_sym_EITHER] = anon_sym_EITHER,
  [anon_sym_BOTH] = anon_sym_BOTH,
  [anon_sym_NOTHING] = anon_sym_NOTHING,
  [anon_sym_FOR] = anon_sym_FOR,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_PREFIX] = anon_sym_PREFIX,
  [anon_sym_POSTFIX] = anon_sym_POSTFIX,
  [anon_sym_INRANGE] = anon_sym_INRANGE,
  [anon_sym_CONTAINS] = anon_sym_CONTAINS,
  [anon_sym_DISPLAYING] = anon_sym_DISPLAYING,
  [anon_sym_PERCENT_LBRACK] = anon_sym_PERCENT_LBRACK,
  [aux_sym_display_text_token1] = aux_sym_display_text_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_display_text_token2] = aux_sym_display_text_token2,
  [aux_sym_display_text_token3] = aux_sym_display_text_token3,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym_ruleset] = sym_ruleset,
  [sym_meta_action_rule] = sym_meta_action_rule,
  [sym_drop_rule] = sym_drop_rule,
  [sym_summon_rule] = sym_summon_rule,
  [sym_execute_rule] = sym_execute_rule,
  [sym_throw_rule] = sym_throw_rule,
  [sym_clear_rule] = sym_clear_rule,
  [sym_shuffle_rule] = sym_shuffle_rule,
  [sym_change_rule] = sym_change_rule,
  [sym_item] = sym_item,
  [sym_item_id] = sym_item_id,
  [sym_nbt_item] = sym_nbt_item,
  [sym_entity] = sym_entity,
  [sym_coordinates] = sym_coordinates,
  [sym_coordinate_val] = sym_coordinate_val,
  [sym_nbt_data] = sym_nbt_data,
  [sym_slot_val] = sym_slot_val,
  [sym_modified_selection] = sym_modified_selection,
  [sym_slot_name] = sym_slot_name,
  [sym_inventory_name] = sym_inventory_name,
  [sym_modifier] = sym_modifier,
  [sym_slot_num] = sym_slot_num,
  [sym_slot_group] = sym_slot_group,
  [sym_meta_action] = sym_meta_action,
  [sym_predicate] = sym_predicate,
  [sym_comparator] = sym_comparator,
  [sym_display_text] = sym_display_text,
  [aux_sym_ruleset_repeat1] = aux_sym_ruleset_repeat1,
  [aux_sym_execute_rule_repeat1] = aux_sym_execute_rule_repeat1,
  [aux_sym_display_text_repeat1] = aux_sym_display_text_repeat1,
  [aux_sym_display_text_repeat2] = aux_sym_display_text_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DROP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_drop_rule_token1] = {
    .visible = false,
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
  [anon_sym_INTO] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_item_id_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_id_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nbt_item_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_coordinate_val_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_coordinate_val_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_needtodo] = {
    .visible = true,
    .named = false,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_helmet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chestplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leggings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boots] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off_DASHhand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main_DASHhand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inventory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_armors] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hotbar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_randomly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_everything] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slot] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_slot_num_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WITH] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PREFIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POSTFIX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INRANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTAINS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISPLAYING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_display_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_display_text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_text_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_drop_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_summon_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_throw_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_clear_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_shuffle_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_change_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_id] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_item] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_coordinates] = {
    .visible = true,
    .named = true,
  },
  [sym_coordinate_val] = {
    .visible = true,
    .named = true,
  },
  [sym_nbt_data] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_val] = {
    .visible = true,
    .named = true,
  },
  [sym_modified_selection] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inventory_name] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_num] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_group] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_action] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [sym_comparator] = {
    .visible = true,
    .named = true,
  },
  [sym_display_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ruleset_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_text_repeat2] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(562);
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '$') ADVANCE(549);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'J') ADVANCE(522);
      if (lookahead == 'L') ADVANCE(379);
      if (lookahead == 'M') ADVANCE(284);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == 'W') ADVANCE(33);
      if (lookahead == 'Y') ADVANCE(381);
      if (lookahead == ']') ADVANCE(729);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'h') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == 'v') ADVANCE(294);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(707);
      if (lookahead == '~') ADVANCE(615);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(564);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '?') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(504);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(705);
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '$') ADVANCE(549);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(719);
      if (lookahead == 'I') ADVANCE(716);
      if (lookahead == 'P') ADVANCE(720);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '?') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(586);
      if (lookahead == 'I') ADVANCE(583);
      if (lookahead == 'P') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(586);
      if (lookahead == 'I') ADVANCE(583);
      if (lookahead == 'P') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'P') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(618);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(612);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(611);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(554);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(560);
      if (lookahead == '[') ADVANCE(703);
      if (lookahead == 'm') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(556);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(557);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'I') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(300);
      if (lookahead == 'C') ADVANCE(279);
      if (lookahead == 'F') ADVANCE(411);
      if (lookahead == 'H') ADVANCE(408);
      if (lookahead == 'R') ADVANCE(167);
      if (lookahead == 'S') ADVANCE(532);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(146);
      END_STATE();
    case 41:
      if (lookahead == 'C') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(417);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(418);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(419);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(570);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(566);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(569);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(698);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 56:
      if (lookahead == 'F') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'H') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(531);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(638);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(702);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(47);
      END_STATE();
    case 65:
      if (lookahead == 'G') ADVANCE(287);
      END_STATE();
    case 66:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(302);
      END_STATE();
    case 68:
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'U') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'H') ADVANCE(637);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(635);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(125);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 'w') ADVANCE(295);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'H') ADVANCE(55);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'X') ADVANCE(46);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'X') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(492);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(293);
      END_STATE();
    case 90:
      if (lookahead == 'M') ADVANCE(619);
      END_STATE();
    case 91:
      if (lookahead == 'M') ADVANCE(54);
      END_STATE();
    case 92:
      if (lookahead == 'M') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'M') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(255);
      END_STATE();
    case 95:
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'S') ADVANCE(689);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(634);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(565);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(689);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'O') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'O') ADVANCE(571);
      END_STATE();
    case 109:
      if (lookahead == 'O') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 111:
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(563);
      END_STATE();
    case 118:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(393);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(326);
      END_STATE();
    case 121:
      if (lookahead == 'P') ADVANCE(412);
      END_STATE();
    case 122:
      if (lookahead == 'R') ADVANCE(639);
      END_STATE();
    case 123:
      if (lookahead == 'R') ADVANCE(568);
      END_STATE();
    case 124:
      if (lookahead == 'R') ADVANCE(636);
      END_STATE();
    case 125:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(252);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(231);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(118);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(640);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(699);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(421);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(511);
      END_STATE();
    case 135:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 'T') ADVANCE(641);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(642);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 139:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(450);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 145:
      if (lookahead == 'U') ADVANCE(61);
      END_STATE();
    case 146:
      if (lookahead == 'U') ADVANCE(142);
      END_STATE();
    case 147:
      if (lookahead == 'W') ADVANCE(567);
      END_STATE();
    case 148:
      if (lookahead == 'X') ADVANCE(692);
      END_STATE();
    case 149:
      if (lookahead == 'X') ADVANCE(695);
      END_STATE();
    case 150:
      if (lookahead == 'Y') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(175);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(335);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == 's') ADVANCE(673);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 's') ADVANCE(676);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(202);
      if (lookahead == 's') ADVANCE(681);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(503);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(498);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(462);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 187:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 188:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 189:
      if (lookahead == 'b') ADVANCE(471);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(472);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(473);
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(430);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(501);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(541);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(544);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(452);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(453);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(671);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(650);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 257:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 258:
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 260:
      if (lookahead == 'f') ADVANCE(507);
      END_STATE();
    case 261:
      if (lookahead == 'f') ADVANCE(256);
      END_STATE();
    case 262:
      if (lookahead == 'f') ADVANCE(481);
      END_STATE();
    case 263:
      if (lookahead == 'f') ADVANCE(491);
      END_STATE();
    case 264:
      if (lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 268:
      if (lookahead == 'g') ADVANCE(457);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 270:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 272:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 273:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 274:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 275:
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(448);
      END_STATE();
    case 276:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 277:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 278:
      if (lookahead == 'h') ADVANCE(166);
      END_STATE();
    case 279:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 280:
      if (lookahead == 'h') ADVANCE(460);
      END_STATE();
    case 281:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 282:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 283:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(339);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(535);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(422);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(367);
      END_STATE();
    case 306:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 307:
      if (lookahead == 'i') ADVANCE(400);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 309:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 310:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 311:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 312:
      if (lookahead == 'i') ADVANCE(404);
      END_STATE();
    case 313:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 319:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 320:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 321:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 331:
      if (lookahead == 'm') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 332:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 333:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 334:
      if (lookahead == 'm') ADVANCE(250);
      END_STATE();
    case 335:
      if (lookahead == 'm') ADVANCE(409);
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 336:
      if (lookahead == 'm') ADVANCE(389);
      END_STATE();
    case 337:
      if (lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 338:
      if (lookahead == 'm') ADVANCE(426);
      END_STATE();
    case 339:
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 341:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 342:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 343:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 344:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 345:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 346:
      if (lookahead == 'n') ADVANCE(658);
      END_STATE();
    case 347:
      if (lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 348:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 349:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 350:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 351:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 352:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 353:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 354:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 355:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(476);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(363);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(510);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 379:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 380:
      if (lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 381:
      if (lookahead == 'o') ADVANCE(524);
      END_STATE();
    case 382:
      if (lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 383:
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(375);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 420:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 421:
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 422:
      if (lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 423:
      if (lookahead == 'p') ADVANCE(517);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(520);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(521);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 430:
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 431:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 432:
      if (lookahead == 'r') ADVANCE(679);
      END_STATE();
    case 433:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 434:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 435:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 436:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 437:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 438:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 439:
      if (lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 440:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 441:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 442:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 443:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 444:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 454:
      if (lookahead == 's') ADVANCE(623);
      END_STATE();
    case 455:
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 456:
      if (lookahead == 's') ADVANCE(667);
      END_STATE();
    case 457:
      if (lookahead == 's') ADVANCE(622);
      END_STATE();
    case 458:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 459:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 460:
      if (lookahead == 's') ADVANCE(675);
      END_STATE();
    case 461:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 462:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 463:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 464:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 465:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 466:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 467:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 468:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 469:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 470:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 471:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 472:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 473:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 475:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 476:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 477:
      if (lookahead == 't') ADVANCE(631);
      END_STATE();
    case 478:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 479:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 480:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 481:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 482:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 483:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 484:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 485:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 486:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 487:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 488:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 489:
      if (lookahead == 't') ADVANCE(648);
      END_STATE();
    case 490:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 491:
      if (lookahead == 't') ADVANCE(653);
      END_STATE();
    case 492:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 493:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 494:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 495:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 496:
      if (lookahead == 't') ADVANCE(440);
      END_STATE();
    case 497:
      if (lookahead == 't') ADVANCE(523);
      END_STATE();
    case 498:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 499:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 501:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 502:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 503:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 504:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 505:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 522:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 523:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 524:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 525:
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 526:
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 527:
      if (lookahead == 'u') ADVANCE(365);
      END_STATE();
    case 528:
      if (lookahead == 'u') ADVANCE(366);
      END_STATE();
    case 529:
      if (lookahead == 'u') ADVANCE(368);
      END_STATE();
    case 530:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 531:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 532:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 533:
      if (lookahead == 'v') ADVANCE(230);
      END_STATE();
    case 534:
      if (lookahead == 'v') ADVANCE(236);
      END_STATE();
    case 535:
      if (lookahead == 'v') ADVANCE(298);
      END_STATE();
    case 536:
      if (lookahead == 'w') ADVANCE(661);
      END_STATE();
    case 537:
      if (lookahead == 'w') ADVANCE(652);
      END_STATE();
    case 538:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 539:
      if (lookahead == 'w') ADVANCE(246);
      END_STATE();
    case 540:
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 541:
      if (lookahead == 'y') ADVANCE(669);
      END_STATE();
    case 542:
      if (lookahead == 'y') ADVANCE(629);
      END_STATE();
    case 543:
      if (lookahead == 'y') ADVANCE(626);
      END_STATE();
    case 544:
      if (lookahead == 'y') ADVANCE(670);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 546:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 547:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 548:
      if (lookahead == 'y') ADVANCE(499);
      END_STATE();
    case 549:
      if (lookahead == '{') ADVANCE(706);
      END_STATE();
    case 550:
      if (lookahead == '{') ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 551:
      if (lookahead == '{') ADVANCE(554);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 552:
      if (lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 553:
      if (lookahead == '}') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 554:
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(554);
      END_STATE();
    case 555:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 556:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 557:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      END_STATE();
    case 558:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 559:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 560:
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 561:
      if (eof) ADVANCE(562);
      if (lookahead == '#') ADVANCE(683);
      if (lookahead == '-') ADVANCE(555);
      if (lookahead == '<') ADVANCE(686);
      if (lookahead == '=') ADVANCE(684);
      if (lookahead == '>') ADVANCE(685);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '~') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DROP);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_drop_rule_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_SUMMON);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_EXECUTE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_THROW);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_CLEAR);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_SHUFFLE);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_CHANGE);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_INTO);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_item_id_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == ' ') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == ':') ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == ':') ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'A') ADVANCE(581);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'E') ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'F') ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'F') ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'I') ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'I') ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'I') ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'N') ADVANCE(573);
      if (lookahead == 'S') ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'N') ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'N') ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'O') ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'O') ADVANCE(589);
      if (lookahead == 'R') ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'S') ADVANCE(700);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'S') ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'T') ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'T') ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'X') ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'X') ADVANCE(696);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'a') ADVANCE(600);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'a') ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'c') ADVANCE(606);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'c') ADVANCE(607);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'e') ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'e') ADVANCE(597);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'f') ADVANCE(608);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'f') ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'i') ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'i') ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'n') ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'n') ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'r') ADVANCE(594);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 'r') ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 't') ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (lookahead == 't') ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_item_id_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_nbt_item_token1);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(554);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_nbt_item_token2);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_entity_token1);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_coordinate_val_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_coordinate_val_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_needtodo);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '%') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_helmet);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_chestplate);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_leggings);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_boots);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_off_DASHhand);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_main_DASHhand);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_inventory);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_armors);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_hotbar);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_randomly);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_everything);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_slot_num_token1);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_slot_num_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(632);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_WITH);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_EITHER);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_BOTH);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_NOTHING);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_TIMES);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_WAIT);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_REFLECT);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_Donation);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_JustGivingDonation);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_ExtraLifeDonation);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_PatreonPledge);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_TiltifyDonation);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_TreatStreamTreat);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_LoyaltyPointRedemption);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_TwitchChannelPointReward);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_TwitchChatMessage);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_TwitchFollow);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_TwitchSubscriptionGift);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_TwitchSubscription);
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_TwitchHost);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_TwitchRaid);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_TwitchBits);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_YoutubeSubscription);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_YoutubeSponsor);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_YoutubeSuperchat);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_MixerFollow);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_MixerSubscription);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_MixerHost);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_amount);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_donation_amount);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_badges);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_chat_badges);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_currency);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_donation_currency);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_gifted);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_months);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_month_count);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_subscription_months);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_raiders);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_raider_count);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_tier);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_subscription_tier);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_viewers);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_viewer_count);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(687);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_IS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_IS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_PREFIX);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_PREFIX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_PREFIX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_POSTFIX);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_POSTFIX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_POSTFIX);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_INRANGE);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_CONTAINS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_DISPLAYING);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACK);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_display_text_token1);
      if (lookahead == '}') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(553);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == ' ') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'A') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'E') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'F') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'F') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'I') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'I') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'I') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'N') ADVANCE(708);
      if (lookahead == 'S') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'N') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'N') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'O') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'O') ADVANCE(722);
      if (lookahead == 'R') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'S') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'S') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'T') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'T') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'X') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (lookahead == 'X') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_display_text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_display_text_token3);
      if (lookahead == '!' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '?') ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [4] = {.lex_state = 561, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 561, .external_lex_state = 2},
  [7] = {.lex_state = 561, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 561, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 561, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 561, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 561, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 2},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 18, .external_lex_state = 2},
  [58] = {.lex_state = 561, .external_lex_state = 2},
  [59] = {.lex_state = 561, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 2},
  [61] = {.lex_state = 18, .external_lex_state = 2},
  [62] = {.lex_state = 18, .external_lex_state = 2},
  [63] = {.lex_state = 18, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 20, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 561, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 21, .external_lex_state = 2},
  [80] = {.lex_state = 21, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 21, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {(TSStateId)(-1)},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
  [3] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comparator] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DROP] = ACTIONS(1),
    [aux_sym_drop_rule_token1] = ACTIONS(1),
    [anon_sym_SUMMON] = ACTIONS(1),
    [anon_sym_EXECUTE] = ACTIONS(1),
    [anon_sym_THROW] = ACTIONS(1),
    [anon_sym_CLEAR] = ACTIONS(1),
    [anon_sym_SHUFFLE] = ACTIONS(1),
    [anon_sym_CHANGE] = ACTIONS(1),
    [anon_sym_INTO] = ACTIONS(1),
    [aux_sym_item_id_token1] = ACTIONS(1),
    [aux_sym_nbt_item_token1] = ACTIONS(1),
    [aux_sym_nbt_item_token2] = ACTIONS(1),
    [aux_sym_entity_token1] = ACTIONS(1),
    [aux_sym_coordinate_val_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_coordinate_val_token2] = ACTIONS(1),
    [anon_sym_needtodo] = ACTIONS(1),
    [sym_command] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_helmet] = ACTIONS(1),
    [anon_sym_chestplate] = ACTIONS(1),
    [anon_sym_leggings] = ACTIONS(1),
    [anon_sym_boots] = ACTIONS(1),
    [anon_sym_off_DASHhand] = ACTIONS(1),
    [anon_sym_main_DASHhand] = ACTIONS(1),
    [anon_sym_inventory] = ACTIONS(1),
    [anon_sym_armors] = ACTIONS(1),
    [anon_sym_hotbar] = ACTIONS(1),
    [anon_sym_randomly] = ACTIONS(1),
    [anon_sym_everything] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [aux_sym_slot_num_token1] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_WITH] = ACTIONS(1),
    [anon_sym_EITHER] = ACTIONS(1),
    [anon_sym_BOTH] = ACTIONS(1),
    [anon_sym_NOTHING] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_IS] = ACTIONS(9),
    [anon_sym_PREFIX] = ACTIONS(9),
    [anon_sym_POSTFIX] = ACTIONS(9),
    [anon_sym_INRANGE] = ACTIONS(9),
    [anon_sym_CONTAINS] = ACTIONS(9),
    [anon_sym_DISPLAYING] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACK] = ACTIONS(1),
    [aux_sym_display_text_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_display_text_token3] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
  },
  [1] = {
    [sym_ruleset] = STATE(78),
    [sym_meta_action_rule] = STATE(38),
    [sym_drop_rule] = STATE(38),
    [sym_summon_rule] = STATE(38),
    [sym_execute_rule] = STATE(38),
    [sym_throw_rule] = STATE(38),
    [sym_clear_rule] = STATE(38),
    [sym_shuffle_rule] = STATE(38),
    [sym_change_rule] = STATE(38),
    [sym_meta_action] = STATE(46),
    [sym_comparator] = STATE(1),
    [aux_sym_ruleset_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DROP] = ACTIONS(9),
    [anon_sym_SUMMON] = ACTIONS(13),
    [anon_sym_EXECUTE] = ACTIONS(15),
    [anon_sym_THROW] = ACTIONS(17),
    [anon_sym_CLEAR] = ACTIONS(19),
    [anon_sym_SHUFFLE] = ACTIONS(21),
    [anon_sym_CHANGE] = ACTIONS(23),
    [anon_sym_EITHER] = ACTIONS(25),
    [anon_sym_BOTH] = ACTIONS(25),
    [anon_sym_NOTHING] = ACTIONS(25),
    [anon_sym_FOR] = ACTIONS(27),
    [anon_sym_WAIT] = ACTIONS(25),
    [anon_sym_REFLECT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_IS] = ACTIONS(9),
    [anon_sym_PREFIX] = ACTIONS(9),
    [anon_sym_POSTFIX] = ACTIONS(9),
    [anon_sym_INRANGE] = ACTIONS(9),
    [anon_sym_CONTAINS] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_DROP,
    ACTIONS(34), 1,
      anon_sym_SUMMON,
    ACTIONS(37), 1,
      anon_sym_EXECUTE,
    ACTIONS(40), 1,
      anon_sym_THROW,
    ACTIONS(43), 1,
      anon_sym_CLEAR,
    ACTIONS(46), 1,
      anon_sym_SHUFFLE,
    ACTIONS(49), 1,
      anon_sym_CHANGE,
    ACTIONS(55), 1,
      anon_sym_FOR,
    STATE(46), 1,
      sym_meta_action,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(2), 2,
      sym_comparator,
      aux_sym_ruleset_repeat1,
    ACTIONS(52), 5,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_WAIT,
      anon_sym_REFLECT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    STATE(38), 8,
      sym_meta_action_rule,
      sym_drop_rule,
      sym_summon_rule,
      sym_execute_rule,
      sym_throw_rule,
      sym_clear_rule,
      sym_shuffle_rule,
      sym_change_rule,
  [71] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(13), 1,
      anon_sym_SUMMON,
    ACTIONS(15), 1,
      anon_sym_EXECUTE,
    ACTIONS(17), 1,
      anon_sym_THROW,
    ACTIONS(19), 1,
      anon_sym_CLEAR,
    ACTIONS(21), 1,
      anon_sym_SHUFFLE,
    ACTIONS(23), 1,
      anon_sym_CHANGE,
    ACTIONS(27), 1,
      anon_sym_FOR,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_ruleset_repeat1,
    STATE(3), 1,
      sym_comparator,
    STATE(46), 1,
      sym_meta_action,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 5,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_WAIT,
      anon_sym_REFLECT,
    ACTIONS(9), 8,
      anon_sym_DROP,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    STATE(38), 8,
      sym_meta_action_rule,
      sym_drop_rule,
      sym_summon_rule,
      sym_execute_rule,
      sym_throw_rule,
      sym_clear_rule,
      sym_shuffle_rule,
      sym_change_rule,
  [142] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      anon_sym_TILDE,
    ACTIONS(66), 1,
      anon_sym_needtodo,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(4), 1,
      sym_comparator,
    STATE(13), 1,
      sym_coordinates,
    STATE(24), 1,
      sym_nbt_data,
    STATE(47), 1,
      sym_display_text,
    STATE(59), 1,
      sym_coordinate_val,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(62), 3,
      aux_sym_drop_rule_token1,
      aux_sym_coordinate_val_token1,
      aux_sym_coordinate_val_token2,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(60), 14,
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
  [207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(5), 1,
      sym_comparator,
    STATE(82), 1,
      sym_predicate,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(70), 19,
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
  [254] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_TILDE,
    STATE(6), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(72), 19,
      ts_builtin_sym_end,
      anon_sym_DROP,
      aux_sym_drop_rule_token1,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      aux_sym_coordinate_val_token1,
      aux_sym_coordinate_val_token2,
      anon_sym_needtodo,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [301] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(78), 1,
      anon_sym_TILDE,
    STATE(7), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(76), 19,
      ts_builtin_sym_end,
      anon_sym_DROP,
      aux_sym_drop_rule_token1,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      aux_sym_coordinate_val_token1,
      aux_sym_coordinate_val_token2,
      anon_sym_needtodo,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [348] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    ACTIONS(82), 1,
      sym_command,
    STATE(8), 1,
      sym_comparator,
    STATE(12), 1,
      aux_sym_execute_rule_repeat1,
    STATE(39), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(80), 14,
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
  [399] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_slot,
    STATE(9), 1,
      sym_comparator,
    STATE(15), 1,
      sym_modifier,
    STATE(30), 1,
      sym_slot_val,
    STATE(84), 1,
      sym_slot_num,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 2,
      anon_sym_randomly,
      anon_sym_everything,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    STATE(31), 3,
      sym_modified_selection,
      sym_slot_name,
      sym_inventory_name,
    ACTIONS(84), 6,
      anon_sym_helmet,
      anon_sym_chestplate,
      anon_sym_leggings,
      anon_sym_boots,
      anon_sym_off_DASHhand,
      anon_sym_main_DASHhand,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [456] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_slot,
    STATE(10), 1,
      sym_comparator,
    STATE(15), 1,
      sym_modifier,
    STATE(34), 1,
      sym_slot_val,
    STATE(84), 1,
      sym_slot_num,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 2,
      anon_sym_randomly,
      anon_sym_everything,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    STATE(31), 3,
      sym_modified_selection,
      sym_slot_name,
      sym_inventory_name,
    ACTIONS(84), 6,
      anon_sym_helmet,
      anon_sym_chestplate,
      anon_sym_leggings,
      anon_sym_boots,
      anon_sym_off_DASHhand,
      anon_sym_main_DASHhand,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [513] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(90), 1,
      anon_sym_slot,
    STATE(11), 1,
      sym_comparator,
    STATE(15), 1,
      sym_modifier,
    STATE(74), 1,
      sym_slot_val,
    STATE(84), 1,
      sym_slot_num,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(88), 2,
      anon_sym_randomly,
      anon_sym_everything,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    STATE(31), 3,
      sym_modified_selection,
      sym_slot_name,
      sym_inventory_name,
    ACTIONS(84), 6,
      anon_sym_helmet,
      anon_sym_chestplate,
      anon_sym_leggings,
      anon_sym_boots,
      anon_sym_off_DASHhand,
      anon_sym_main_DASHhand,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [570] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    ACTIONS(82), 1,
      sym_command,
    STATE(12), 1,
      sym_comparator,
    STATE(17), 1,
      aux_sym_execute_rule_repeat1,
    STATE(49), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(92), 14,
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
  [621] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      anon_sym_needtodo,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(13), 1,
      sym_comparator,
    STATE(25), 1,
      sym_nbt_data,
    STATE(44), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(94), 14,
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
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    ACTIONS(98), 1,
      aux_sym_drop_rule_token1,
    STATE(14), 1,
      sym_comparator,
    STATE(41), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(96), 14,
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
  [720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_FROM,
    STATE(15), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(100), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(16), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(104), 17,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_FROM,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(108), 1,
      sym_command,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(17), 2,
      sym_comparator,
      aux_sym_execute_rule_repeat1,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(106), 15,
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
      anon_sym_DISPLAYING,
  [850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(111), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [891] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(113), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      aux_sym_drop_rule_token1,
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
      anon_sym_DISPLAYING,
  [932] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(20), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(115), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_needtodo,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [973] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(21), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(117), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      aux_sym_drop_rule_token1,
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
      anon_sym_DISPLAYING,
  [1014] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(22), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      sym_command,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [1055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(121), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      aux_sym_drop_rule_token1,
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
      anon_sym_DISPLAYING,
  [1096] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(24), 1,
      sym_comparator,
    STATE(44), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(94), 14,
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
  [1141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(25), 1,
      sym_comparator,
    STATE(51), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(123), 14,
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
  [1186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(125), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [1227] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [1268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(129), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [1309] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(29), 1,
      sym_comparator,
    STATE(37), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(131), 14,
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
  [1354] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(30), 1,
      sym_comparator,
    STATE(52), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(133), 14,
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
  [1399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_DROP,
      anon_sym_SUMMON,
      anon_sym_EXECUTE,
      anon_sym_THROW,
      anon_sym_CLEAR,
      anon_sym_SHUFFLE,
      anon_sym_CHANGE,
      anon_sym_INTO,
      anon_sym_EITHER,
      anon_sym_BOTH,
      anon_sym_NOTHING,
      anon_sym_FOR,
      anon_sym_WAIT,
      anon_sym_REFLECT,
      anon_sym_DISPLAYING,
  [1440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(32), 1,
      sym_comparator,
    STATE(48), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(137), 14,
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
  [1485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(33), 1,
      sym_comparator,
    STATE(40), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(139), 14,
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
  [1530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_DISPLAYING,
    STATE(34), 1,
      sym_comparator,
    STATE(50), 1,
      sym_display_text,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(141), 14,
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
  [1575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(35), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(143), 15,
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
      anon_sym_DISPLAYING,
  [1615] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(145), 15,
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
      anon_sym_DISPLAYING,
  [1655] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(147), 14,
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
  [1694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(38), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(149), 14,
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
  [1733] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(92), 14,
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
  [1772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(151), 14,
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
  [1811] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(41), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(131), 14,
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
  [1850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(42), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(153), 14,
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
  [1889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(155), 14,
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
  [1928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(44), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(123), 14,
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
  [1967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(157), 14,
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
  [2006] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(159), 14,
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
  [2045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(94), 14,
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
  [2084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(161), 14,
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
  [2123] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(49), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(163), 14,
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
  [2162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(165), 14,
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
  [2201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(51), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(167), 14,
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
  [2240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(52), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(169), 14,
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
  [2279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(53), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
    ACTIONS(171), 14,
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
  [2318] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      aux_sym_item_id_token1,
    ACTIONS(175), 1,
      aux_sym_item_id_token2,
    STATE(14), 1,
      sym_item,
    STATE(54), 1,
      sym_comparator,
    ACTIONS(177), 2,
      aux_sym_nbt_item_token1,
      aux_sym_nbt_item_token2,
    STATE(19), 2,
      sym_item_id,
      sym_nbt_item,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      aux_sym_item_id_token1,
    ACTIONS(175), 1,
      aux_sym_item_id_token2,
    STATE(33), 1,
      sym_item,
    STATE(55), 1,
      sym_comparator,
    ACTIONS(177), 2,
      aux_sym_nbt_item_token1,
      aux_sym_nbt_item_token2,
    STATE(19), 2,
      sym_item_id,
      sym_nbt_item,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2398] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_slot,
    STATE(56), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(32), 2,
      sym_inventory_name,
      sym_slot_group,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2433] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      aux_sym_display_text_token2,
    ACTIONS(187), 1,
      aux_sym_display_text_token3,
    STATE(57), 1,
      sym_comparator,
    STATE(60), 1,
      aux_sym_display_text_repeat1,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      anon_sym_TILDE,
    STATE(20), 1,
      sym_coordinate_val,
    STATE(58), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(62), 3,
      aux_sym_drop_rule_token1,
      aux_sym_coordinate_val_token1,
      aux_sym_coordinate_val_token2,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2505] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      anon_sym_TILDE,
    STATE(58), 1,
      sym_coordinate_val,
    STATE(59), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(62), 3,
      aux_sym_drop_rule_token1,
      aux_sym_coordinate_val_token1,
      aux_sym_coordinate_val_token2,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2539] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(185), 1,
      aux_sym_display_text_token2,
    ACTIONS(187), 1,
      aux_sym_display_text_token3,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_comparator,
    STATE(61), 1,
      aux_sym_display_text_repeat1,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2577] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_display_text_token2,
    ACTIONS(199), 1,
      aux_sym_display_text_token3,
    STATE(61), 2,
      sym_comparator,
      aux_sym_display_text_repeat1,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2613] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(204), 1,
      aux_sym_display_text_token2,
    STATE(62), 1,
      sym_comparator,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(202), 3,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_display_text_token3,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(208), 1,
      aux_sym_display_text_token2,
    STATE(63), 1,
      sym_comparator,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(206), 3,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_display_text_token3,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2675] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(210), 1,
      aux_sym_display_text_token1,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(64), 2,
      sym_comparator,
      aux_sym_display_text_repeat2,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2708] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(218), 1,
      aux_sym_display_text_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_display_text_repeat2,
    STATE(65), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2743] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(218), 1,
      aux_sym_display_text_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      aux_sym_display_text_repeat2,
    STATE(66), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_inventory_name,
    STATE(67), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2809] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_inventory_name,
    STATE(68), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(86), 3,
      anon_sym_inventory,
      anon_sym_armors,
      anon_sym_hotbar,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2840] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      aux_sym_item_id_token2,
    ACTIONS(228), 1,
      aux_sym_entity_token1,
    STATE(4), 1,
      sym_entity,
    STATE(69), 1,
      sym_comparator,
    ACTIONS(9), 3,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_INRANGE,
    ACTIONS(7), 6,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_CONTAINS,
  [2872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(70), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 3,
      aux_sym_display_text_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2900] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(71), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(232), 3,
      aux_sym_display_text_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2928] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    STATE(72), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(216), 3,
      aux_sym_display_text_token1,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(234), 1,
      aux_sym_drop_rule_token1,
    STATE(73), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [2982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(236), 1,
      anon_sym_INTO,
    STATE(74), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3008] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(238), 1,
      anon_sym_FROM,
    STATE(75), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3034] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(240), 1,
      anon_sym_TIMES,
    STATE(76), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3060] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(242), 1,
      anon_sym_PERCENT_LBRACK,
    STATE(77), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3086] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      aux_sym_slot_num_token1,
    STATE(79), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      aux_sym_slot_num_token1,
    STATE(80), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3190] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(254), 1,
      aux_sym_slot_num_token1,
    STATE(83), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_FROM,
    STATE(84), 1,
      sym_comparator,
    ACTIONS(7), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 7,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_IS,
      anon_sym_PREFIX,
      anon_sym_POSTFIX,
      anon_sym_INRANGE,
      anon_sym_CONTAINS,
  [3268] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 399,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 513,
  [SMALL_STATE(12)] = 570,
  [SMALL_STATE(13)] = 621,
  [SMALL_STATE(14)] = 672,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 806,
  [SMALL_STATE(18)] = 850,
  [SMALL_STATE(19)] = 891,
  [SMALL_STATE(20)] = 932,
  [SMALL_STATE(21)] = 973,
  [SMALL_STATE(22)] = 1014,
  [SMALL_STATE(23)] = 1055,
  [SMALL_STATE(24)] = 1096,
  [SMALL_STATE(25)] = 1141,
  [SMALL_STATE(26)] = 1186,
  [SMALL_STATE(27)] = 1227,
  [SMALL_STATE(28)] = 1268,
  [SMALL_STATE(29)] = 1309,
  [SMALL_STATE(30)] = 1354,
  [SMALL_STATE(31)] = 1399,
  [SMALL_STATE(32)] = 1440,
  [SMALL_STATE(33)] = 1485,
  [SMALL_STATE(34)] = 1530,
  [SMALL_STATE(35)] = 1575,
  [SMALL_STATE(36)] = 1615,
  [SMALL_STATE(37)] = 1655,
  [SMALL_STATE(38)] = 1694,
  [SMALL_STATE(39)] = 1733,
  [SMALL_STATE(40)] = 1772,
  [SMALL_STATE(41)] = 1811,
  [SMALL_STATE(42)] = 1850,
  [SMALL_STATE(43)] = 1889,
  [SMALL_STATE(44)] = 1928,
  [SMALL_STATE(45)] = 1967,
  [SMALL_STATE(46)] = 2006,
  [SMALL_STATE(47)] = 2045,
  [SMALL_STATE(48)] = 2084,
  [SMALL_STATE(49)] = 2123,
  [SMALL_STATE(50)] = 2162,
  [SMALL_STATE(51)] = 2201,
  [SMALL_STATE(52)] = 2240,
  [SMALL_STATE(53)] = 2279,
  [SMALL_STATE(54)] = 2318,
  [SMALL_STATE(55)] = 2358,
  [SMALL_STATE(56)] = 2398,
  [SMALL_STATE(57)] = 2433,
  [SMALL_STATE(58)] = 2471,
  [SMALL_STATE(59)] = 2505,
  [SMALL_STATE(60)] = 2539,
  [SMALL_STATE(61)] = 2577,
  [SMALL_STATE(62)] = 2613,
  [SMALL_STATE(63)] = 2644,
  [SMALL_STATE(64)] = 2675,
  [SMALL_STATE(65)] = 2708,
  [SMALL_STATE(66)] = 2743,
  [SMALL_STATE(67)] = 2778,
  [SMALL_STATE(68)] = 2809,
  [SMALL_STATE(69)] = 2840,
  [SMALL_STATE(70)] = 2872,
  [SMALL_STATE(71)] = 2900,
  [SMALL_STATE(72)] = 2928,
  [SMALL_STATE(73)] = 2956,
  [SMALL_STATE(74)] = 2982,
  [SMALL_STATE(75)] = 3008,
  [SMALL_STATE(76)] = 3034,
  [SMALL_STATE(77)] = 3060,
  [SMALL_STATE(78)] = 3086,
  [SMALL_STATE(79)] = 3112,
  [SMALL_STATE(80)] = 3138,
  [SMALL_STATE(81)] = 3164,
  [SMALL_STATE(82)] = 3190,
  [SMALL_STATE(83)] = 3216,
  [SMALL_STATE(84)] = 3242,
  [SMALL_STATE(85)] = 3268,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleset, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(54),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(69),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(56),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(11),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 2), SHIFT_REPEAT(73),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ruleset, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summon_rule, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinate_val, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_coordinate_val, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entity, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_rule, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_rule, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summon_rule, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_rule, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modified_selection, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_rule_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_execute_rule_repeat1, 2), SHIFT_REPEAT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_val, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coordinates, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_item, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_execute_rule_repeat1, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_id, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summon_rule, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_name, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inventory_name, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modified_selection, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_rule, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_rule, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_val, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_rule, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_rule, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clear_rule, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nbt_data, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_group, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_rule, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ruleset_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_rule, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_text, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_text, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action_rule, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle_rule, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_execute_rule, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clear_rule, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summon_rule, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throw_rule, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_action, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_display_text_repeat1, 2), SHIFT_REPEAT(5),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_display_text_repeat1, 2), SHIFT_REPEAT(62),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_display_text_repeat1, 2), SHIFT_REPEAT(62),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_display_text_repeat1, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat1, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_display_text_repeat1, 3),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_display_text_repeat2, 2), SHIFT_REPEAT(70),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_display_text_repeat2, 2), SHIFT_REPEAT(57),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat2, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat2, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_display_text_repeat2, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot_num, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparator, 1),
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
