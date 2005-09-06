/* Opcodes.h
 *
 * Copyright (C) 2004 Wow Daemon
 * Copyright (C) 2005 MaNGOS <https://opensvn.csie.org/traccgi/MaNGOS/trac.cgi/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _OPCODES_H
#define _OPCODES_H

// NOTE: All SERVER opcodes are now uint16's, as of patch 4 (3807/0.9.0)
//       Client opcodes are still uint32 as far as we know.
enum OpCodes
{
    MSG_NULL_ACTION = 0,
    CMSG_BOOTME = 1,
    CMSG_DBLOOKUP = 2,
    SMSG_DBLOOKUP = 3,
    CMSG_QUERY_OBJECT_POSITION = 4,
    SMSG_QUERY_OBJECT_POSITION = 5,
    CMSG_QUERY_OBJECT_ROTATION = 6,
    SMSG_QUERY_OBJECT_ROTATION = 7,
    CMSG_WORLD_TELEPORT = 8,
    CMSG_TELEPORT_TO_UNIT = 9,
    CMSG_ZONE_MAP = 10,
    SMSG_ZONE_MAP = 11,
    CMSG_DEBUG_CHANGECELLZONE = 12,
    CMSG_EMBLAZON_TABARD_OBSOLETE = 13,
    CMSG_UNEMBLAZON_TABARD_OBSOLETE = 14,
    CMSG_RECHARGE = 15,
    CMSG_LEARN_SPELL = 16,
    CMSG_CREATEMONSTER = 17,
    CMSG_DESTROYMONSTER = 18,
    CMSG_CREATEITEM = 19,
    CMSG_CREATEGAMEOBJECT = 20,
    CMSG_MAKEMONSTERATTACKME = 21,
    CMSG_MAKEMONSTERATTACKGUID = 22,
    CMSG_ENABLEDEBUGCOMBATLOGGING_OBSOLETE = 23,
    CMSG_FORCEACTION = 24,
    CMSG_FORCEACTIONONOTHER = 25,
    CMSG_FORCEACTIONSHOW = 26,
    SMSG_FORCEACTIONSHOW = 27,
    SMSG_ATTACKERSTATEUPDATEDEBUGINFO_OBSOLETE = 28,
    SMSG_DEBUGINFOSPELL_OBSOLETE = 29,
    SMSG_DEBUGINFOSPELLMISS_OBSOLETE = 30,
    SMSG_DEBUG_PLAYER_RANGE_OBSOLETE = 31,
    CMSG_UNDRESSPLAYER = 32,
    CMSG_BEASTMASTER = 33,
    CMSG_GODMODE = 34,
    SMSG_GODMODE = 35,
    CMSG_CHEAT_SETMONEY = 36,
    CMSG_LEVEL_CHEAT = 37,
    CMSG_PET_LEVEL_CHEAT = 38,
    CMSG_LEVELUP_CHEAT_OBSOLETE = 39,
    CMSG_COOLDOWN_CHEAT = 40,
    CMSG_USE_SKILL_CHEAT = 41,
    CMSG_FLAG_QUEST = 42,
    CMSG_FLAG_QUEST_FINISH = 43,
    CMSG_CLEAR_QUEST = 44,
    CMSG_SEND_EVENT = 45,
    CMSG_DEBUG_AISTATE = 46,
    SMSG_DEBUG_AISTATE = 47,
    CMSG_DISABLE_PVP_CHEAT = 48,
    CMSG_ADVANCE_SPAWN_TIME = 49,
    CMSG_PVP_PORT_OBSOLETE = 50,
    CMSG_AUTH_SRP6_BEGIN = 51,
    CMSG_AUTH_SRP6_PROOF = 52,
    CMSG_AUTH_SRP6_RECODE = 53,
    CMSG_CHAR_CREATE = 54,
    CMSG_CHAR_ENUM = 55,
    CMSG_CHAR_DELETE = 56,
    SMSG_AUTH_SRP6_RESPONSE = 57,
    SMSG_CHAR_CREATE = 58,
    SMSG_CHAR_ENUM = 59,
    SMSG_CHAR_DELETE = 60,
    CMSG_PLAYER_LOGIN = 61,
    SMSG_NEW_WORLD = 62,
    SMSG_TRANSFER_PENDING = 63,
    SMSG_TRANSFER_ABORTED = 64,
    SMSG_CHARACTER_LOGIN_FAILED = 65,
    SMSG_LOGIN_SETTIMESPEED = 66,
    SMSG_GAMETIME_UPDATE = 67,
    CMSG_GAMETIME_SET = 68,
    SMSG_GAMETIME_SET = 69,
    CMSG_GAMESPEED_SET = 70,
    SMSG_GAMESPEED_SET = 71,
    CMSG_SERVERTIME = 72,
    SMSG_SERVERTIME = 73,
    CMSG_PLAYER_LOGOUT = 74,
    CMSG_LOGOUT_REQUEST = 75,
    SMSG_LOGOUT_RESPONSE = 76,
    SMSG_LOGOUT_COMPLETE = 77,
    CMSG_LOGOUT_CANCEL = 78,
    SMSG_LOGOUT_CANCEL_ACK = 79,
    CMSG_NAME_QUERY = 80,
    SMSG_NAME_QUERY_RESPONSE = 81,
    CMSG_PET_NAME_QUERY = 82,
    SMSG_PET_NAME_QUERY_RESPONSE = 83,
    CMSG_GUILD_QUERY = 84,
    SMSG_GUILD_QUERY_RESPONSE = 85,
    CMSG_ITEM_QUERY_SINGLE = 86,
    CMSG_ITEM_QUERY_MULTIPLE = 87,
    SMSG_ITEM_QUERY_SINGLE_RESPONSE = 88,
    SMSG_ITEM_QUERY_MULTIPLE_RESPONSE = 89,
    CMSG_PAGE_TEXT_QUERY = 90,
    SMSG_PAGE_TEXT_QUERY_RESPONSE = 91,
    CMSG_QUEST_QUERY = 92,
    SMSG_QUEST_QUERY_RESPONSE = 93,
    CMSG_GAMEOBJECT_QUERY = 94,
    SMSG_GAMEOBJECT_QUERY_RESPONSE = 95,
    CMSG_CREATURE_QUERY = 96,
    SMSG_CREATURE_QUERY_RESPONSE = 97,
    CMSG_WHO = 98,
    SMSG_WHO = 99,
    CMSG_WHOIS = 100,
    SMSG_WHOIS = 101,
    CMSG_FRIEND_LIST = 102,
    SMSG_FRIEND_LIST = 103,
    SMSG_FRIEND_STATUS = 104,
    CMSG_ADD_FRIEND = 105,
    CMSG_DEL_FRIEND = 106,
    SMSG_IGNORE_LIST = 107,
    CMSG_ADD_IGNORE = 108,
    CMSG_DEL_IGNORE = 109,
    CMSG_GROUP_INVITE = 110,
    SMSG_GROUP_INVITE = 111,
    CMSG_GROUP_CANCEL = 112,
    SMSG_GROUP_CANCEL = 113,
    CMSG_GROUP_ACCEPT = 114,
    CMSG_GROUP_DECLINE = 115,
    SMSG_GROUP_DECLINE = 116,
    CMSG_GROUP_UNINVITE = 117,
    CMSG_GROUP_UNINVITE_GUID = 118,
    SMSG_GROUP_UNINVITE = 119,
    CMSG_GROUP_SET_LEADER = 120,
    SMSG_GROUP_SET_LEADER = 121,
    CMSG_LOOT_METHOD = 122,
    CMSG_GROUP_DISBAND = 123,
    SMSG_GROUP_DESTROYED = 124,
    SMSG_GROUP_LIST = 125,
    SMSG_PARTY_MEMBER_STATS = 126,
    SMSG_PARTY_COMMAND_RESULT = 127,
    UMSG_UPDATE_GROUP_MEMBERS = 128,
    CMSG_GUILD_CREATE = 129,
    CMSG_GUILD_INVITE = 130,
    SMSG_GUILD_INVITE = 131,
    CMSG_GUILD_ACCEPT = 132,
    CMSG_GUILD_DECLINE = 133,
    SMSG_GUILD_DECLINE = 134,
    CMSG_GUILD_INFO = 135,
    SMSG_GUILD_INFO = 136,
    CMSG_GUILD_ROSTER = 137,
    SMSG_GUILD_ROSTER = 138,
    CMSG_GUILD_PROMOTE = 139,
    CMSG_GUILD_DEMOTE = 140,
    CMSG_GUILD_LEAVE = 141,
    CMSG_GUILD_REMOVE = 142,
    CMSG_GUILD_DISBAND = 143,
    CMSG_GUILD_LEADER = 144,
    CMSG_GUILD_MOTD = 145,
    SMSG_GUILD_EVENT = 146,
    SMSG_GUILD_COMMAND_RESULT = 147,
    UMSG_UPDATE_GUILD = 148,
    CMSG_MESSAGECHAT = 149,
    SMSG_MESSAGECHAT = 150,
    CMSG_JOIN_CHANNEL = 151,
    CMSG_LEAVE_CHANNEL = 152,
    SMSG_CHANNEL_NOTIFY = 153,
    CMSG_CHANNEL_LIST = 154,
    SMSG_CHANNEL_LIST = 155,
    CMSG_CHANNEL_PASSWORD = 156,
    CMSG_CHANNEL_SET_OWNER = 157,
    CMSG_CHANNEL_OWNER = 158,
    CMSG_CHANNEL_MODERATOR = 159,
    CMSG_CHANNEL_UNMODERATOR = 160,
    CMSG_CHANNEL_MUTE = 161,
    CMSG_CHANNEL_UNMUTE = 162,
    CMSG_CHANNEL_INVITE = 163,
    CMSG_CHANNEL_KICK = 164,
    CMSG_CHANNEL_BAN = 165,
    CMSG_CHANNEL_UNBAN = 166,
    CMSG_CHANNEL_ANNOUNCEMENTS = 167,
    CMSG_CHANNEL_MODERATE = 168,
    SMSG_UPDATE_OBJECT = 169,
    SMSG_DESTROY_OBJECT = 170,
    CMSG_USE_ITEM = 171,
    CMSG_OPEN_ITEM = 172,
    CMSG_READ_ITEM = 173,
    SMSG_READ_ITEM_OK = 174,
    SMSG_READ_ITEM_FAILED = 175,
    SMSG_ITEM_COOLDOWN = 176,
    CMSG_GAMEOBJ_USE = 177,
    CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE = 178,
    SMSG_GAMEOBJECT_CUSTOM_ANIM = 179,
    CMSG_AREATRIGGER = 180,
    MSG_MOVE_START_FORWARD = 181,
    MSG_MOVE_START_BACKWARD = 182,
    MSG_MOVE_STOP = 183,
    MSG_MOVE_START_STRAFE_LEFT = 184,
    MSG_MOVE_START_STRAFE_RIGHT = 185,
    MSG_MOVE_STOP_STRAFE = 186,
    MSG_MOVE_JUMP = 187,
    MSG_MOVE_START_TURN_LEFT = 188,
    MSG_MOVE_START_TURN_RIGHT = 189,
    MSG_MOVE_STOP_TURN = 190,
    MSG_MOVE_START_PITCH_UP = 191,
    MSG_MOVE_START_PITCH_DOWN = 192,
    MSG_MOVE_STOP_PITCH = 193,
    MSG_MOVE_SET_RUN_MODE = 194,
    MSG_MOVE_SET_WALK_MODE = 195,
    MSG_MOVE_TOGGLE_LOGGING = 196,
    MSG_MOVE_TELEPORT = 197,
    MSG_MOVE_TELEPORT_CHEAT = 198,
    MSG_MOVE_TELEPORT_ACK = 199,
    MSG_MOVE_TOGGLE_FALL_LOGGING = 200,
    MSG_MOVE_FALL_LAND = 201,
    MSG_MOVE_START_SWIM = 202,
    MSG_MOVE_STOP_SWIM = 203,
    MSG_MOVE_SET_RUN_SPEED_CHEAT = 204,
    MSG_MOVE_SET_RUN_SPEED = 205,
    MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT = 206,
    MSG_MOVE_SET_RUN_BACK_SPEED = 207,
    MSG_MOVE_SET_WALK_SPEED_CHEAT = 208,
    MSG_MOVE_SET_WALK_SPEED = 209,
    MSG_MOVE_SET_SWIM_SPEED_CHEAT = 210,
    MSG_MOVE_SET_SWIM_SPEED = 211,
    MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT = 212,
    MSG_MOVE_SET_SWIM_BACK_SPEED = 213,
    MSG_MOVE_SET_ALL_SPEED_CHEAT = 214,
    MSG_MOVE_SET_TURN_RATE_CHEAT = 215,
    MSG_MOVE_SET_TURN_RATE = 216,
    MSG_MOVE_TOGGLE_COLLISION_CHEAT = 217,
    MSG_MOVE_SET_FACING = 218,
    MSG_MOVE_SET_PITCH = 219,
    MSG_MOVE_WORLDPORT_ACK = 220,
    SMSG_MONSTER_MOVE = 221,
    SMSG_MOVE_WATER_WALK = 222,
    SMSG_MOVE_LAND_WALK = 223,
    MSG_MOVE_SET_RAW_POSITION_ACK = 224,
    CMSG_MOVE_SET_RAW_POSITION = 225,
    SMSG_FORCE_RUN_SPEED_CHANGE = 226,
    CMSG_FORCE_RUN_SPEED_CHANGE_ACK = 227,
    SMSG_FORCE_RUN_BACK_SPEED_CHANGE = 228,
    CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK = 229,
    SMSG_FORCE_SWIM_SPEED_CHANGE = 230,
    CMSG_FORCE_SWIM_SPEED_CHANGE_ACK = 231,
    SMSG_FORCE_MOVE_ROOT = 232,
    CMSG_FORCE_MOVE_ROOT_ACK = 233,
    SMSG_FORCE_MOVE_UNROOT = 234,
    CMSG_FORCE_MOVE_UNROOT_ACK = 235,
    MSG_MOVE_ROOT = 236,
    MSG_MOVE_UNROOT = 237,
    MSG_MOVE_HEARTBEAT = 238,
    SMSG_MOVE_KNOCK_BACK = 239,
    CMSG_MOVE_KNOCK_BACK_ACK = 240,
    MSG_MOVE_KNOCK_BACK = 241,
    SMSG_MOVE_FEATHER_FALL = 242,
    SMSG_MOVE_NORMAL_FALL = 243,
    SMSG_MOVE_SET_HOVER = 244,
    SMSG_MOVE_UNSET_HOVER = 245,
    CMSG_MOVE_HOVER_ACK = 246,
    MSG_MOVE_HOVER = 247,
    CMSG_TRIGGER_CINEMATIC_CHEAT = 248,
    CMSG_OPENING_CINEMATIC = 249,
    SMSG_TRIGGER_CINEMATIC = 250,
    CMSG_NEXT_CINEMATIC_CAMERA = 251,
    CMSG_COMPLETE_CINEMATIC = 252,
    SMSG_TUTORIAL_FLAGS = 253,
    CMSG_TUTORIAL_FLAG = 254,
    CMSG_TUTORIAL_CLEAR = 255,
    CMSG_TUTORIAL_RESET = 256,
    CMSG_STANDSTATECHANGE = 257,
    CMSG_EMOTE = 258,
    SMSG_EMOTE = 259,
    CMSG_TEXT_EMOTE = 260,
    SMSG_TEXT_EMOTE = 261,
    CMSG_AUTOEQUIP_GROUND_ITEM = 262,
    CMSG_AUTOSTORE_GROUND_ITEM = 263,
    CMSG_AUTOSTORE_LOOT_ITEM = 264,
    CMSG_STORE_LOOT_IN_SLOT = 265,
    CMSG_AUTOEQUIP_ITEM = 266,
    CMSG_AUTOSTORE_BAG_ITEM = 267,
    CMSG_SWAP_ITEM = 268,
    CMSG_SWAP_INV_ITEM = 269,
    CMSG_SPLIT_ITEM = 270,
    CMSG_PICKUP_ITEM = 271,
    CMSG_DROP_ITEM = 272,
    CMSG_DESTROYITEM = 273,
    SMSG_INVENTORY_CHANGE_FAILURE = 274,
    SMSG_OPEN_CONTAINER = 275,
    CMSG_INSPECT = 276,
    SMSG_INSPECT = 277,
    CMSG_INITIATE_TRADE = 278,
    CMSG_BEGIN_TRADE = 279,
    CMSG_BUSY_TRADE = 280,
    CMSG_IGNORE_TRADE = 281,
    CMSG_ACCEPT_TRADE = 282,
    CMSG_UNACCEPT_TRADE = 283,
    CMSG_CANCEL_TRADE = 284,
    CMSG_SET_TRADE_ITEM = 285,
    CMSG_CLEAR_TRADE_ITEM = 286,
    CMSG_SET_TRADE_GOLD = 287,
    SMSG_TRADE_STATUS = 288,
    SMSG_TRADE_STATUS_EXTENDED = 289,
    SMSG_INITIALIZE_FACTIONS = 290,
    SMSG_SET_FACTION_VISIBLE = 291,
    SMSG_SET_FACTION_STANDING = 292,
    CMSG_SET_FACTION_ATWAR = 293,
    CMSG_SET_FACTION_CHEAT = 294,
    SMSG_SET_PROFICIENCY = 295,
    CMSG_SET_ACTION_BUTTON = 296,
    SMSG_ACTION_BUTTONS = 297,
    SMSG_INITIAL_SPELLS = 298,
    SMSG_LEARNED_SPELL = 299,
    SMSG_SUPERCEDED_SPELL = 300,
    CMSG_NEW_SPELL_SLOT = 301,
    CMSG_CAST_SPELL = 302,
    CMSG_CANCEL_CAST = 303,
    SMSG_CAST_RESULT = 304,
    SMSG_SPELL_START = 305,
    SMSG_SPELL_GO = 306,
    SMSG_SPELL_FAILURE = 307,
    SMSG_SPELL_COOLDOWN = 308,
    SMSG_COOLDOWN_EVENT = 309,
    CMSG_CANCEL_AURA = 310,
    SMSG_UPDATE_AURA_DURATION = 311,
    SMSG_PET_CAST_FAILED = 312,
    MSG_CHANNEL_START = 313,
    MSG_CHANNEL_UPDATE = 314,
    CMSG_CANCEL_CHANNELLING = 315,
    SMSG_AI_REACTION = 316,
    CMSG_SET_SELECTION = 317,
    CMSG_SET_TARGET = 318,
    CMSG_UNUSED = 319,
    CMSG_UNUSED2 = 320,
    CMSG_ATTACKSWING = 321,
    CMSG_ATTACKSTOP = 322,
    SMSG_ATTACKSTART = 323,
    SMSG_ATTACKSTOP = 324,
    SMSG_ATTACKSWING_NOTINRANGE = 325,
    SMSG_ATTACKSWING_BADFACING = 326,
    SMSG_ATTACKSWING_NOTSTANDING = 327,
    SMSG_ATTACKSWING_DEADTARGET = 328,
    SMSG_ATTACKSWING_CANT_ATTACK = 329,
    SMSG_ATTACKERSTATEUPDATE = 330,
    SMSG_VICTIMSTATEUPDATE_OBSOLETE = 331,
    SMSG_DAMAGE_DONE_OBSOLETE = 332,
    SMSG_DAMAGE_TAKEN_OBSOLETE = 333,
    SMSG_CANCEL_COMBAT = 334,
    SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE = 335,
    SMSG_HEALSPELL_ON_PLAYER_OBSOLETE = 336,
    SMSG_HEALSPELL_ON_PLAYERS_PET_OBSOLETE = 337,
    CMSG_SHEATHE_OBSOLETE = 338,
    CMSG_SAVE_PLAYER = 339,
    CMSG_SETDEATHBINDPOINT = 340,
    SMSG_BINDPOINTUPDATE = 341,
    CMSG_GETDEATHBINDZONE = 342,
    SMSG_BINDZONEREPLY = 343,
    SMSG_PLAYERBOUND = 344,
    SMSG_DEATH_NOTIFY_OBSOLETE = 345,
    CMSG_REPOP_REQUEST = 346,
    SMSG_RESURRECT_REQUEST = 347,
    CMSG_RESURRECT_RESPONSE = 348,
    CMSG_LOOT = 349,
    CMSG_LOOT_MONEY = 350,
    CMSG_LOOT_RELEASE = 351,
    SMSG_LOOT_RESPONSE = 352,
    SMSG_LOOT_RELEASE_RESPONSE = 353,
    SMSG_LOOT_REMOVED = 354,
    SMSG_LOOT_MONEY_NOTIFY = 355,
    SMSG_LOOT_ITEM_NOTIFY = 356,
    SMSG_LOOT_CLEAR_MONEY = 357,
    SMSG_ITEM_PUSH_RESULT = 358,
    SMSG_DUEL_REQUESTED = 359,
    SMSG_DUEL_OUTOFBOUNDS = 360,
    SMSG_DUEL_INBOUNDS = 361,
    SMSG_DUEL_COMPLETE = 362,
    SMSG_DUEL_WINNER = 363,
    CMSG_DUEL_ACCEPTED = 364,
    CMSG_DUEL_CANCELLED = 365,
    SMSG_MOUNTRESULT = 366,
    SMSG_DISMOUNTRESULT = 367,
    SMSG_PUREMOUNT_CANCELLED_OBSOLETE = 368,
    CMSG_MOUNTSPECIAL_ANIM = 369,
    SMSG_MOUNTSPECIAL_ANIM = 370,
    SMSG_PET_TAME_FAILURE = 371,
    CMSG_PET_SET_ACTION = 372,
    CMSG_PET_ACTION = 373,
    CMSG_PET_ABANDON = 374,
    CMSG_PET_RENAME = 375,
    SMSG_PET_NAME_INVALID = 376,
    SMSG_PET_SPELLS = 377,
    CMSG_PET_CAST_SPELL_OBSOLETE = 378,
    CMSG_GOSSIP_HELLO = 379,
    CMSG_GOSSIP_SELECT_OPTION = 380,
    SMSG_GOSSIP_MESSAGE = 381,
    SMSG_GOSSIP_COMPLETE = 382,
    CMSG_NPC_TEXT_QUERY = 383,
    SMSG_NPC_TEXT_UPDATE = 384,
    SMSG_NPC_WONT_TALK = 385,
    CMSG_QUESTGIVER_STATUS_QUERY = 386,
    SMSG_QUESTGIVER_STATUS = 387,
    CMSG_QUESTGIVER_HELLO = 388,
    SMSG_QUESTGIVER_QUEST_LIST = 389,
    CMSG_QUESTGIVER_QUERY_QUEST = 390,
    CMSG_QUESTGIVER_QUEST_AUTOLAUNCH = 391,
    SMSG_QUESTGIVER_QUEST_DETAILS = 392,
    CMSG_QUESTGIVER_ACCEPT_QUEST = 393,
    CMSG_QUESTGIVER_COMPLETE_QUEST = 394,
    SMSG_QUESTGIVER_REQUEST_ITEMS = 395,
    CMSG_QUESTGIVER_REQUEST_REWARD = 396,
    SMSG_QUESTGIVER_OFFER_REWARD = 397,
    CMSG_QUESTGIVER_CHOOSE_REWARD = 398,
    SMSG_QUESTGIVER_QUEST_INVALID = 399,
    CMSG_QUESTGIVER_CANCEL = 400,
    SMSG_QUESTGIVER_QUEST_COMPLETE = 401,
    SMSG_QUESTGIVER_QUEST_FAILED = 402,
    CMSG_QUESTLOG_SWAP_QUEST = 403,
    CMSG_QUESTLOG_REMOVE_QUEST = 404,
    SMSG_QUESTLOG_FULL = 405,
    SMSG_QUESTUPDATE_FAILED = 406,
    SMSG_QUESTUPDATE_FAILEDTIMER = 407,
    SMSG_QUESTUPDATE_COMPLETE = 408,
    SMSG_QUESTUPDATE_ADD_KILL = 409,
    SMSG_QUESTUPDATE_ADD_ITEM = 410,
    CMSG_QUEST_CONFIRM_ACCEPT = 411,
    SMSG_QUEST_CONFIRM_ACCEPT = 412,
    CMSG_PUSHQUESTTOPARTY = 413,
    CMSG_LIST_INVENTORY = 414,
    SMSG_LIST_INVENTORY = 415,
    CMSG_SELL_ITEM = 416,
    SMSG_SELL_ITEM = 417,
    CMSG_BUY_ITEM = 418,
    CMSG_BUY_ITEM_IN_SLOT = 419,
    SMSG_BUY_ITEM = 420,
    SMSG_BUY_FAILED = 421,
    CMSG_TAXICLEARALLNODES = 422,
    CMSG_TAXIENABLEALLNODES = 423,
    CMSG_TAXISHOWNODES = 424,
    SMSG_SHOWTAXINODES = 425,
    CMSG_TAXINODE_STATUS_QUERY = 426,
    SMSG_TAXINODE_STATUS = 427,
    CMSG_TAXIQUERYAVAILABLENODES = 428,
    CMSG_ACTIVATETAXI = 429,
    SMSG_ACTIVATETAXIREPLY = 430,
    SMSG_NEW_TAXI_PATH = 431,
    CMSG_TRAINER_LIST = 432,
    SMSG_TRAINER_LIST = 433,
    CMSG_TRAINER_BUY_SPELL = 434,
    SMSG_TRAINER_BUY_SUCCEEDED = 435,
    SMSG_TRAINER_BUY_FAILED = 436,
    CMSG_BINDER_ACTIVATE = 437,
    SMSG_PLAYERBINDERROR = 438,
    CMSG_BANKER_ACTIVATE = 439,
    SMSG_SHOW_BANK = 440,
    CMSG_BUY_BANK_SLOT = 441,
    SMSG_BUY_BANK_SLOT_RESULT = 442,
    CMSG_PETITION_SHOWLIST = 443,
    SMSG_PETITION_SHOWLIST = 444,
    CMSG_PETITION_BUY = 445,
    CMSG_PETITION_SHOW_SIGNATURES = 446,
    SMSG_PETITION_SHOW_SIGNATURES = 447,
    CMSG_PETITION_SIGN = 448,
    SMSG_PETITION_SIGN_RESULTS = 449,
    MSG_PETITION_DECLINE = 450,
    CMSG_OFFER_PETITION = 451,
    CMSG_TURN_IN_PETITION = 452,
    SMSG_TURN_IN_PETITION_RESULTS = 453,
    CMSG_PETITION_QUERY = 454,
    SMSG_PETITION_QUERY_RESPONSE = 455,
    SMSG_FISH_NOT_HOOKED = 456,
    SMSG_FISH_ESCAPED = 457,
    CMSG_BUG = 458,
    SMSG_NOTIFICATION = 459,
    CMSG_PLAYED_TIME = 460,
    SMSG_PLAYED_TIME = 461,
    CMSG_QUERY_TIME = 462,
    SMSG_QUERY_TIME_RESPONSE = 463,
    SMSG_LOG_XPGAIN = 464,
    MSG_SPLIT_MONEY = 465,
    CMSG_RECLAIM_CORPSE = 466,
    CMSG_WRAP_ITEM = 467,
    SMSG_LEVELUP_INFO = 468,
    MSG_MINIMAP_PING = 469,
    SMSG_RESISTLOG = 470,
    SMSG_ENCHANTMENTLOG = 471,
    CMSG_SET_SKILL_CHEAT = 472,
    SMSG_START_MIRROR_TIMER = 473,
    SMSG_PAUSE_MIRROR_TIMER = 474,
    SMSG_STOP_MIRROR_TIMER = 475,
    CMSG_PING = 476,
    SMSG_PONG = 477,
    SMSG_CLEAR_COOLDOWN = 478,
    SMSG_GAMEOBJECT_PAGETEXT = 479,
    CMSG_SETSHEATHED = 480,
    SMSG_COOLDOWN_CHEAT = 481,
    SMSG_SPELL_DELAYED = 482,
    CMSG_PLAYER_MACRO_OBSOLETE = 483,
    SMSG_PLAYER_MACRO_OBSOLETE = 484,
    CMSG_GHOST = 485,
    CMSG_GM_INVIS = 486,
    CMSG_SCREENSHOT = 487,
    MSG_GM_BIND_OTHER = 488,
    MSG_GM_SUMMON = 489,
    SMSG_ITEM_TIME_UPDATE = 490,
    SMSG_ITEM_ENCHANT_TIME_UPDATE = 491,
    SMSG_AUTH_CHALLENGE = 492,
    CMSG_AUTH_SESSION = 493,
    SMSG_AUTH_RESPONSE = 494,
    MSG_GM_SHOWLABEL = 495,
    MSG_ADD_DYNAMIC_TARGET = 496,
    MSG_SAVE_GUILD_EMBLEM = 497,
    MSG_TABARDVENDOR_ACTIVATE = 498,
    SMSG_PLAY_SPELL_VISUAL = 499,
    CMSG_ZONEUPDATE = 500,
    SMSG_PARTYKILLLOG = 501,
    SMSG_COMPRESSED_UPDATE_OBJECT = 502,
    SMSG_OBSOLETE = 503,
    SMSG_EXPLORATION_EXPERIENCE = 504,
    CMSG_GM_SET_SECURITY_GROUP = 505,
    CMSG_GM_NUKE = 506,
    MSG_RANDOM_ROLL = 507,
    SMSG_ENVIRONMENTALDAMAGELOG = 508,
    CMSG_RWHOIS = 509,
    SMSG_RWHOIS = 510,
    MSG_LOOKING_FOR_GROUP = 511,
    CMSG_SET_LOOKING_FOR_GROUP = 512,
    CMSG_UNLEARN_SPELL = 513,
    CMSG_UNLEARN_SKILL = 514,
    SMSG_REMOVED_SPELL = 515,
    CMSG_DECHARGE = 516,
    CMSG_GMTICKET_CREATE = 517,
    SMSG_GMTICKET_CREATE = 518,
    CMSG_GMTICKET_UPDATETEXT = 519,
    SMSG_GMTICKET_UPDATETEXT = 520,
    SMSG_ACCOUNT_DATA_MD5 = 521,
    CMSG_REQUEST_ACCOUNT_DATA = 522,
    CMSG_UPDATE_ACCOUNT_DATA = 523,
    SMSG_UPDATE_ACCOUNT_DATA = 524,
    SMSG_CLEAR_FAR_SIGHT_IMMEDIATE = 525,
    SMSG_POWERGAINLOG_OBSOLETE = 526,
    CMSG_GM_TEACH = 527,
    CMSG_GM_CREATE_ITEM_TARGET = 528,
    CMSG_GMTICKET_GETTICKET = 529,
    SMSG_GMTICKET_GETTICKET = 530,
    CMSG_UNLEARN_TALENTS = 531,
    SMSG_GAMEOBJECT_SPAWN_ANIM = 532,
    SMSG_GAMEOBJECT_DESPAWN_ANIM = 533,
    MSG_CORPSE_QUERY = 534,
    CMSG_GMTICKET_DELETETICKET = 535,
    SMSG_GMTICKET_DELETETICKET = 536,
    SMSG_CHAT_WRONG_FACTION = 537,
    CMSG_GMTICKET_SYSTEMSTATUS = 538,
    SMSG_GMTICKET_SYSTEMSTATUS = 539,
    CMSG_SPIRIT_HEALER_ACTIVATE = 540,
    CMSG_SET_STAT_CHEAT = 541,
    SMSG_SET_REST_START = 542,
    CMSG_SKILL_BUY_STEP = 543,
    CMSG_SKILL_BUY_RANK = 544,
    CMSG_XP_CHEAT = 545,
    SMSG_SPIRIT_HEALER_CONFIRM = 546,
    CMSG_CHARACTER_POINT_CHEAT = 547,
    SMSG_GOSSIP_POI = 548,
    CMSG_CHAT_IGNORED = 549,
    CMSG_GM_VISION = 550,
    CMSG_SERVER_COMMAND = 551,
    CMSG_GM_SILENCE = 552,
    CMSG_GM_REVEALTO = 553,
    CMSG_GM_RESURRECT = 554,
    CMSG_GM_SUMMONMOB = 555,
    CMSG_GM_MOVECORPSE = 556,
    CMSG_GM_FREEZE = 557,
    CMSG_GM_UBERINVIS = 558,
    CMSG_GM_REQUEST_PLAYER_INFO = 559,
    SMSG_GM_PLAYER_INFO = 560,
    CMSG_GUILD_RANK = 561,
    CMSG_GUILD_ADD_RANK = 562,
    CMSG_GUILD_DEL_RANK = 563,
    CMSG_GUILD_SET_PUBLIC_NOTE = 564,
    CMSG_GUILD_SET_OFFICER_NOTE = 565,
    SMSG_LOGIN_VERIFY_WORLD = 566,
    CMSG_CLEAR_EXPLORATION = 567,
    CMSG_SEND_MAIL = 568,
    SMSG_SEND_MAIL_RESULT = 569,
    CMSG_GET_MAIL_LIST = 570,
    SMSG_MAIL_LIST_RESULT = 571,
    CMSG_BATTLEFIELD_LIST = 572,
    SMSG_BATTLEFIELD_LIST = 573,
    CMSG_BATTLEFIELD_JOIN = 574,
    SMSG_BATTLEFIELD_WIN = 575,
    SMSG_BATTLEFIELD_LOSE = 576,
    CMSG_TAXICLEARNODE = 577,
    CMSG_TAXIENABLENODE = 578,
    CMSG_ITEM_TEXT_QUERY = 579,
    SMSG_ITEM_TEXT_QUERY_RESPONSE = 580,
    CMSG_MAIL_TAKE_MONEY = 581,
    CMSG_MAIL_TAKE_ITEM = 582,
    CMSG_MAIL_MARK_AS_READ = 583,
    CMSG_MAIL_RETURN_TO_SENDER = 584,
    CMSG_MAIL_DELETE = 585,
    CMSG_MAIL_CREATE_TEXT_ITEM = 586,
    SMSG_SPELLLOGMISS = 587,
    SMSG_SPELLLOGEXECUTE = 588,
    SMSG_DEBUGAURAPROC = 589,
    SMSG_PERIODICAURALOG = 590,
    SMSG_SPELLDAMAGESHIELD = 591,
    SMSG_SPELLNONMELEEDAMAGELOG = 592,
    CMSG_LEARN_TALENT = 593,
    SMSG_RESURRECT_FAILED = 594,
    CMSG_ENABLE_PVP = 595,
    SMSG_ZONE_UNDER_ATTACK = 596,
    MSG_AUCTION_HELLO = 597,
    CMSG_AUCTION_SELL_ITEM = 598,
    CMSG_AUCTION_REMOVE_ITEM = 599,
    CMSG_AUCTION_LIST_ITEMS = 600,
    CMSG_AUCTION_LIST_OWNER_ITEMS = 601,
    CMSG_AUCTION_PLACE_BID = 602,
    SMSG_AUCTION_COMMAND_RESULT = 603,
    SMSG_AUCTION_LIST_RESULT = 604,
    SMSG_AUCTION_OWNER_LIST_RESULT = 605,
    SMSG_AUCTION_BIDDER_NOTIFICATION = 606,
    SMSG_AUCTION_OWNER_NOTIFICATION = 607,
    SMSG_PROCRESIST = 608,
    SMSG_STANDSTATE_CHANGE_FAILURE = 609,
    SMSG_DISPEL_FAILED = 610,
    SMSG_SPELLORDAMAGE_IMMUNE = 611,
    CMSG_AUCTION_LIST_BIDDER_ITEMS = 612,
    SMSG_AUCTION_BIDDER_LIST_RESULT = 613,
    SMSG_SET_FLAT_SPELL_MODIFIER = 614,
    SMSG_SET_PCT_SPELL_MODIFIER = 615,
    CMSG_SET_AMMO = 616,
    SMSG_CORPSE_RECLAIM_DELAY = 617,
    CMSG_SET_ACTIVE_MOVER = 618,
    CMSG_PET_CANCEL_AURA = 619,
    CMSG_PLAYER_AI_CHEAT = 620,
    CMSG_CANCEL_AUTO_REPEAT_SPELL = 621,
    MSG_GM_ACCOUNT_ONLINE = 622,
    MSG_LIST_STABLED_PETS = 623,
    CMSG_STABLE_PET = 624,
    CMSG_UNSTABLE_PET = 625,
    CMSG_BUY_STABLE_SLOT = 626,
    SMSG_STABLE_RESULT = 627,
    CMSG_STABLE_REVIVE_PET = 628,
    CMSG_STABLE_SWAP_PET = 629,
    MSG_QUEST_PUSH_RESULT = 630,
    SMSG_PLAY_MUSIC = 631,
    SMSG_PLAY_OBJECT_SOUND = 632,
    CMSG_REQUEST_PET_INFO = 633,
    CMSG_FAR_SIGHT = 634,
    SMSG_SPELLDISPELLOG = 635,
    SMSG_DAMAGE_CALC_LOG = 636,
    CMSG_ENABLE_DAMAGE_LOG = 637,
    CMSG_GROUP_CHANGE_SUB_GROUP = 638,
    SMSG_RAID_MEMBER_STATS = 639,
    CMSG_GROUP_SWAP_SUB_GROUP = 640,
    CMSG_RESET_FACTION_CHEAT = 641,
    CMSG_AUTOSTORE_BANK_ITEM = 642,
    CMSG_AUTOBANK_ITEM = 643,
    MSG_QUERY_NEXT_MAIL_TIME = 644,
    SMSG_RECEIVED_MAIL = 645,
    SMSG_RAID_GROUP_ONLY = 646,
    CMSG_SET_DURABILITY_CHEAT = 647,
    CMSG_SET_PVP_RANK_CHEAT = 648,
    CMSG_ADD_PVP_MEDAL_CHEAT = 649,
    CMSG_DEL_PVP_MEDAL_CHEAT = 650,
    CMSG_SET_PVP_TITLE = 651,
    SMSG_PVP_CREDIT = 652,
    SMSG_AUCTION_REMOVED_NOTIFICATION = 653,
    CMSG_GROUP_RAID_CONVERT = 654,
    CMSG_GROUP_ASSISTANT_LEADER = 655,
    CMSG_BUYBACK_ITEM = 656,
    SMSG_SERVER_MESSAGE = 657,
    CMSG_MEETINGSTONE_JOIN = 658,
    CMSG_MEETINGSTONE_LEAVE = 659,
    CMSG_MEETINGSTONE_CHEAT = 660,
    SMSG_MEETINGSTONE_SETQUEUE = 661,
    CMSG_MEETINGSTONE_INFO = 662,
    SMSG_MEETINGSTONE_COMPLETE = 663,
    SMSG_MEETINGSTONE_IN_PROGRESS = 664,
    SMSG_MEETINGSTONE_MEMBER_ADDED = 665,
    CMSG_GMTICKETSYSTEM_TOGGLE = 666,
    CMSG_CANCEL_GROWTH_AURA = 667,
    SMSG_CANCEL_AUTO_REPEAT = 668,
    SMSG_STANDSTATE_CHANGE_ACK = 669,
    SMSG_LOOT_ALL_PASSED = 670,
    SMSG_LOOT_ROLL_WON = 671,
    CMSG_LOOT_ROLL = 672,
    SMSG_LOOT_START_ROLL = 673,
    SMSG_LOOT_ROLL = 674,
    CMSG_LOOT_MASTER_GIVE = 675,
    SMSG_LOOT_MASTER_LIST = 676,
    SMSG_SET_FORCED_REACTIONS = 677,
    SMSG_SPELL_FAILED_OTHER = 678,
    SMSG_GAMEOBJECT_RESET_STATE = 679,
    CMSG_REPAIR_ITEM = 680,
    SMSG_CHAT_PLAYER_NOT_FOUND = 681,
    MSG_TALENT_WIPE_CONFIRM = 682,
    SMSG_SUMMON_REQUEST = 683,
    CMSG_SUMMON_RESPONSE = 684,
    MSG_MOVE_TOGGLE_GRAVITY_CHEAT = 685,
    SMSG_MONSTER_MOVE_TRANSPORT = 686,
    SMSG_PET_BROKEN = 687,
    MSG_MOVE_FEATHER_FALL = 688,
    MSG_MOVE_WATER_WALK = 689,
    CMSG_SERVER_BROADCAST = 690,
    CMSG_SELF_RES = 691,
    SMSG_FEIGN_DEATH_RESISTED = 692,
    CMSG_RUN_SCRIPT = 693,
    SMSG_SCRIPT_MESSAGE = 694,
    SMSG_DUEL_COUNTDOWN = 695,
    SMSG_AREA_TRIGGER_MESSAGE = 696,
    CMSG_TOGGLE_HELM = 697,
    CMSG_TOGGLE_CLOAK = 698,
    SMSG_SPELL_REFLECTED = 699,
    SMSG_PLAYER_SKINNED = 700,
    SMSG_DURABILITY_DAMAGE_DEATH = 701,
    CMSG_SET_EXPLORATION = 702,
    CMSG_SET_ACTIONBAR_TOGGLES = 703,
    UMSG_DELETE_GUILD_CHARTER = 704,
    MSG_PETITION_RENAME = 705,
    SMSG_INIT_WORLD_STATES = 706,
    SMSG_UPDATE_WORLD_STATE = 707,
    CMSG_ITEM_NAME_QUERY = 708,
    SMSG_ITEM_NAME_QUERY_RESPONSE = 709,
    SMSG_PET_ACTION_FEEDBACK = 710,
    NUM_MSG_TYPES = 711,
};

enum FriendsResult
{
    FRIEND_DB_ERROR                               = 0x00,
    FRIEND_LIST_FULL                              = 0x01,
    FRIEND_ONLINE                                 = 0x02,
    FRIEND_OFFLINE                                = 0x03,
    FRIEND_NOT_FOUND                              = 0x04,
    FRIEND_REMOVED                                = 0x05,
    FRIEND_ADDED_ONLINE                           = 0x06,
    FRIEND_ADDED_OFFLINE                          = 0x07,
    FRIEND_ALREADY                                = 0x08,
    FRIEND_SELF                                   = 0x09,
    FRIEND_ENEMY                                  = 0x0A,
    FRIEND_IGNORE_FULL                            = 0x0B,
    FRIEND_IGNORE_SELF                            = 0x0C,
    FRIEND_IGNORE_NOT_FOUND                       = 0x0D,
    FRIEND_IGNORE_ALREADY                         = 0x0E,
    FRIEND_IGNORE_ADDED                           = 0x0F,
    FRIEND_IGNORE_REMOVED                         = 0x10
};

/*
0 = Universal
1 = ?Orcish?
2 = Darnassian
3 = Taurahe
4 = ?
5 = ?
6 = Dwarvish
7 = Common
8 = Demonic
9 = Titan
10 = Thelassian
11 = Draconic
12 = Kalimag
13 = Gnomish
14 = Troll
*/

enum NPCFlags
{
    UNIT_NPC_FLAG_NONE              = 0,          // None
    UNIT_NPC_FLAG_GOSSIP            = 1,          // Gossip/Talk (CMSG_GOSSIP_HELLO, ?)
    UNIT_NPC_FLAG_QUESTGIVER        = 2,          // Questgiver
    UNIT_NPC_FLAG_VENDOR            = 4,          // Vendor (CMSG_LIST_INVENTORY, SMSG_LIST_INVENTORY)
    UNIT_NPC_FLAG_TAXIVENDOR        = 8,          // Taxi Vendor (CMSG_TAXIQUERYAVAILABLENODES, SMSG_SHOWTAXINODES)
    UNIT_NPC_FLAG_TRAINER           = 16,         // Trainer (CMSG_TRAINER_LIST, SMSG_TRAINER_LIST)
    // unknown                         = 32,
    UNIT_NPC_FLAG_SPIRITHEALER      = 64,         // Spirithealer (CMSG_BINDER_ACTIVATE, ?)
    UNIT_NPC_FLAG_BANKER            = 128,        // Banker (CMSG_BANKER_ACTIVATE, SMSG_SHOW_BANK)
    UNIT_NPC_FLAG_PETITIONER        = 256,        // Petitioner/?Guild Charter? (CMSG_PETITION_SHOWLIST, SMSG_PETITION_SHOWLIST)
    UNIT_NPC_FLAG_TABARDVENDOR      = 512,        // Tabard Vendor (MSG_TABARDVENDOR_ACTIVATE)
    UNIT_NPC_FLAG_BATTLEFIELDPERSON = 1024,       // Battlefield Person (CMSG_BATTLEFIELD_LIST, SMSG_BATTLEFIELD_LIST)
    UNIT_NPC_FLAG_AUCTIONEER        = 2048        // Auctioneer (MSG_AUCTION_HELLO)
};

//enum FieldFlags {
//    0x00000008 == can't climb slopes too steep
//    0x40000000 == sheathed
//};

typedef struct
{
    uint64 PlayerGUID;
    unsigned char Status;

    uint32 Area;
    uint32 Level;
    uint32 Class;
} FriendStr ;
#endif
