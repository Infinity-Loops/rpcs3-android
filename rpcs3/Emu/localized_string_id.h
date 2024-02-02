#pragma once

enum class localized_string_id
{
	INVALID,

	RSX_OVERLAYS_TROPHY_BRONZE,
	RSX_OVERLAYS_TROPHY_SILVER,
	RSX_OVERLAYS_TROPHY_GOLD,
	RSX_OVERLAYS_TROPHY_PLATINUM,
	RSX_OVERLAYS_COMPILING_SHADERS,
	RSX_OVERLAYS_COMPILING_PPU_MODULES,
	RSX_OVERLAYS_MSG_DIALOG_YES,
	RSX_OVERLAYS_MSG_DIALOG_NO,
	RSX_OVERLAYS_MSG_DIALOG_CANCEL,
	RSX_OVERLAYS_MSG_DIALOG_OK,
	RSX_OVERLAYS_SAVE_DIALOG_TITLE,
	RSX_OVERLAYS_SAVE_DIALOG_DELETE,
	RSX_OVERLAYS_SAVE_DIALOG_LOAD,
	RSX_OVERLAYS_SAVE_DIALOG_SAVE,
	RSX_OVERLAYS_OSK_DIALOG_ACCEPT,
	RSX_OVERLAYS_OSK_DIALOG_CANCEL,
	RSX_OVERLAYS_OSK_DIALOG_SPACE,
	RSX_OVERLAYS_OSK_DIALOG_BACKSPACE,
	RSX_OVERLAYS_OSK_DIALOG_SHIFT,
	RSX_OVERLAYS_OSK_DIALOG_ENTER_TEXT,
	RSX_OVERLAYS_OSK_DIALOG_ENTER_PASSWORD,
	RSX_OVERLAYS_MEDIA_DIALOG_TITLE,
	RSX_OVERLAYS_MEDIA_DIALOG_TITLE_PHOTO_IMPORT,
	RSX_OVERLAYS_MEDIA_DIALOG_EMPTY,
	RSX_OVERLAYS_LIST_SELECT,
	RSX_OVERLAYS_LIST_CANCEL,
	RSX_OVERLAYS_LIST_DENY,

	CELL_GAME_ERROR_BROKEN_GAMEDATA,
	CELL_GAME_ERROR_BROKEN_HDDGAME,
	CELL_GAME_ERROR_BROKEN_EXIT_GAMEDATA,
	CELL_GAME_ERROR_BROKEN_EXIT_HDDGAME,
	CELL_GAME_ERROR_NOSPACE,
	CELL_GAME_ERROR_NOSPACE_EXIT,
	CELL_GAME_ERROR_DIR_NAME,
	CELL_GAME_DATA_EXIT_BROKEN,
	CELL_HDD_GAME_EXIT_BROKEN,

	CELL_HDD_GAME_CHECK_NOSPACE,
	CELL_HDD_GAME_CHECK_BROKEN,
	CELL_HDD_GAME_CHECK_NODATA,
	CELL_HDD_GAME_CHECK_INVALID,

	CELL_GAMEDATA_CHECK_NOSPACE,
	CELL_GAMEDATA_CHECK_BROKEN,
	CELL_GAMEDATA_CHECK_NODATA,
	CELL_GAMEDATA_CHECK_INVALID,

	CELL_MSG_DIALOG_ERROR_DEFAULT,
	CELL_MSG_DIALOG_ERROR_80010001,
	CELL_MSG_DIALOG_ERROR_80010002,
	CELL_MSG_DIALOG_ERROR_80010003,
	CELL_MSG_DIALOG_ERROR_80010004,
	CELL_MSG_DIALOG_ERROR_80010005,
	CELL_MSG_DIALOG_ERROR_80010006,
	CELL_MSG_DIALOG_ERROR_80010007,
	CELL_MSG_DIALOG_ERROR_80010008,
	CELL_MSG_DIALOG_ERROR_80010009,
	CELL_MSG_DIALOG_ERROR_8001000A,
	CELL_MSG_DIALOG_ERROR_8001000B,
	CELL_MSG_DIALOG_ERROR_8001000C,
	CELL_MSG_DIALOG_ERROR_8001000D,
	CELL_MSG_DIALOG_ERROR_8001000F,
	CELL_MSG_DIALOG_ERROR_80010010,
	CELL_MSG_DIALOG_ERROR_80010011,
	CELL_MSG_DIALOG_ERROR_80010012,
	CELL_MSG_DIALOG_ERROR_80010013,
	CELL_MSG_DIALOG_ERROR_80010014,
	CELL_MSG_DIALOG_ERROR_80010015,
	CELL_MSG_DIALOG_ERROR_80010016,
	CELL_MSG_DIALOG_ERROR_80010017,
	CELL_MSG_DIALOG_ERROR_80010018,
	CELL_MSG_DIALOG_ERROR_80010019,
	CELL_MSG_DIALOG_ERROR_8001001A,
	CELL_MSG_DIALOG_ERROR_8001001B,
	CELL_MSG_DIALOG_ERROR_8001001C,
	CELL_MSG_DIALOG_ERROR_8001001D,
	CELL_MSG_DIALOG_ERROR_8001001E,
	CELL_MSG_DIALOG_ERROR_8001001F,
	CELL_MSG_DIALOG_ERROR_80010020,
	CELL_MSG_DIALOG_ERROR_80010021,
	CELL_MSG_DIALOG_ERROR_80010022,
	CELL_MSG_DIALOG_ERROR_80010023,
	CELL_MSG_DIALOG_ERROR_80010024,
	CELL_MSG_DIALOG_ERROR_80010025,
	CELL_MSG_DIALOG_ERROR_80010026,
	CELL_MSG_DIALOG_ERROR_80010027,
	CELL_MSG_DIALOG_ERROR_80010028,
	CELL_MSG_DIALOG_ERROR_80010029,
	CELL_MSG_DIALOG_ERROR_8001002A,
	CELL_MSG_DIALOG_ERROR_8001002B,
	CELL_MSG_DIALOG_ERROR_8001002C,
	CELL_MSG_DIALOG_ERROR_8001002D,
	CELL_MSG_DIALOG_ERROR_8001002E,
	CELL_MSG_DIALOG_ERROR_8001002F,
	CELL_MSG_DIALOG_ERROR_80010030,
	CELL_MSG_DIALOG_ERROR_80010031,
	CELL_MSG_DIALOG_ERROR_80010032,
	CELL_MSG_DIALOG_ERROR_80010033,
	CELL_MSG_DIALOG_ERROR_80010034,
	CELL_MSG_DIALOG_ERROR_80010035,
	CELL_MSG_DIALOG_ERROR_80010036,
	CELL_MSG_DIALOG_ERROR_80010037,
	CELL_MSG_DIALOG_ERROR_80010038,
	CELL_MSG_DIALOG_ERROR_80010039,
	CELL_MSG_DIALOG_ERROR_8001003A,
	CELL_MSG_DIALOG_ERROR_8001003B,
	CELL_MSG_DIALOG_ERROR_8001003C,
	CELL_MSG_DIALOG_ERROR_8001003D,
	CELL_MSG_DIALOG_ERROR_8001003E,

	CELL_OSK_DIALOG_TITLE,
	CELL_OSK_DIALOG_BUSY,

	CELL_SAVEDATA_CB_BROKEN,
	CELL_SAVEDATA_CB_FAILURE,
	CELL_SAVEDATA_CB_NO_DATA,
	CELL_SAVEDATA_CB_NO_SPACE,
	CELL_SAVEDATA_NO_DATA,
	CELL_SAVEDATA_NEW_SAVED_DATA_TITLE,
	CELL_SAVEDATA_NEW_SAVED_DATA_SUB_TITLE,
	CELL_SAVEDATA_SAVE_CONFIRMATION,
	CELL_SAVEDATA_DELETE_CONFIRMATION,
	CELL_SAVEDATA_DELETE_SUCCESS,
	CELL_SAVEDATA_DELETE,
	CELL_SAVEDATA_SAVE,
	CELL_SAVEDATA_LOAD,
	CELL_SAVEDATA_OVERWRITE,

	CELL_CROSS_CONTROLLER_MSG,
	CELL_CROSS_CONTROLLER_FW_MSG,

	CELL_NP_RECVMESSAGE_DIALOG_TITLE,
	CELL_NP_RECVMESSAGE_DIALOG_TITLE_INVITE,
	CELL_NP_RECVMESSAGE_DIALOG_TITLE_ADD_FRIEND,
	CELL_NP_RECVMESSAGE_DIALOG_FROM,
	CELL_NP_RECVMESSAGE_DIALOG_SUBJECT,

	CELL_NP_SENDMESSAGE_DIALOG_TITLE,
	CELL_NP_SENDMESSAGE_DIALOG_TITLE_INVITE,
	CELL_NP_SENDMESSAGE_DIALOG_TITLE_ADD_FRIEND,

	RECORDING_ABORTED,

	RPCN_NO_ERROR,
	RPCN_ERROR_INVALID_INPUT,
	RPCN_ERROR_WOLFSSL,
	RPCN_ERROR_RESOLVE,
	RPCN_ERROR_CONNECT,
	RPCN_ERROR_LOGIN_ERROR,
	RPCN_ERROR_ALREADY_LOGGED,
	RPCN_ERROR_INVALID_LOGIN,
	RPCN_ERROR_INVALID_PASSWORD,
	RPCN_ERROR_INVALID_TOKEN,
	RPCN_ERROR_INVALID_PROTOCOL_VERSION,
	RPCN_ERROR_UNKNOWN,
	RPCN_SUCCESS_LOGGED_ON,

	HOME_MENU_TITLE,
	HOME_MENU_EXIT_GAME,
	HOME_MENU_RESTART,
	HOME_MENU_RESUME,
	HOME_MENU_SETTINGS,
	HOME_MENU_SETTINGS_SAVE,
	HOME_MENU_SETTINGS_SAVE_BUTTON,
	HOME_MENU_SETTINGS_DISCARD,
	HOME_MENU_SETTINGS_DISCARD_BUTTON,
	HOME_MENU_SETTINGS_AUDIO,
	HOME_MENU_SETTINGS_VIDEO,
	HOME_MENU_SETTINGS_INPUT,
	HOME_MENU_SETTINGS_ADVANCED,
	HOME_MENU_SETTINGS_OVERLAYS,
	HOME_MENU_SETTINGS_PERFORMANCE_OVERLAY,
	HOME_MENU_SETTINGS_DEBUG,
	HOME_MENU_SCREENSHOT,
	HOME_MENU_SAVESTATE,
	HOME_MENU_SAVESTATE_AND_EXIT,
	HOME_MENU_RELOAD_SAVESTATE,
	HOME_MENU_RECORDING,

	EMULATION_PAUSED_RESUME_WITH_START,
	EMULATION_RESUMING,
	EMULATION_FROZEN,
};
