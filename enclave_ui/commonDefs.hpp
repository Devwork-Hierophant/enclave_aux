#define SOUND_ENTER 	  "enclave_ui\sounds\ui_menu_focus.ogg"
#define SOUND_PUSH 		  "enclave_ui\sounds\ui_menu_focus.ogg"
#define SOUND_CLICK 	  "enclave_ui\sounds\ui_menu_ok.ogg"
#define SOUND_ESCAPE 	  "enclave_ui\sounds\ui_menu_cancel.ogg"

#define SKILL_POINTS      10

#define SKILL_POINTS_DEFAULT 1

#define IDC_CHARISMA 1107
#define IDC_PERCEPTION 1108
#define IDC_STRENGTH 1109
#define IDC_INTELLIGENCE 1110

#define PIPBOY_GOD "\enclave_ui\images\pipboy_god_ca.paa"
#define PIPBOY_ANGEL "\enclave_ui\images\pipboy_angel_ca.paa"
#define PIPBOY_NEUTRAL "\enclave_ui\images\pipboy_neutral_ca.paa"
#define PIPBOY_DEMON "\enclave_ui\images\pipboy_demon_ca.paa"
#define PIPBOY_DEVIL "\enclave_ui\images\pipboy_devil_ca.paa"

#define PIPBOYS [PIPBOY_GOD, PIPBOY_ANGEL, PIPBOY_NEUTRAL, PIPBOY_DEMON, PIPBOY_DEVIL]

#define SKILLS ["charisma", "perception", "strength", "intelligence"]

#define STEAMID getPlayerUID player
#define CID [1, 0, (format["SELECT cid FROM playerinfo WHERE sid=%1", getPlayerUID player])] call enclave_db_fnc_callExtDB3
#define CHARNUM ["enclave_character", 0]

// these technically need updating if they ever change, bare that in mind
// EDIT: They will probably change. I feel a warhammer mod incoming....