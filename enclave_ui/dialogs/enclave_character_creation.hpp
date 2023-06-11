class enclave_character_creation
{
	idd=5000;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['enclave_sheet', _this select 0]";
	// onEditChanged = "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"
	// onMouseButtonDown = "playSoundUI [""enclave_ui\sounds\ui_menu_prevnext.ogg"", 3];";
	onKeyUp = "_this call enclave_fnc_keyUp";
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Silence, v1.063, #Vyfema)
////////////////////////////////////////////////////////

class enclave_ui_character_create_background: RscPictureEnclave
{
	idc = 1200;
	text = "enclave_ui\ui.jpg";
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.474375 * safezoneW;
	h = 0.55 * safezoneH;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {1,1,1,0.5};
	colorActive[] = {1,1,1,0.5};
};
class enclave_ui_character_creation_frame_4: RscFrameEnclave
{
	idc = 1800;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.474375 * safezoneW;
	h = 0.55 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,1};
	colorActive[] = {0,1,0,1};
};
class enclave_ui_character_creation_frame_1: RscPictureEnclave
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.0055 * safezoneH;
	colorText[] = {-1,1,0,1};
	colorBackground[] = {-1,1,0,1};
	colorActive[] = {-1,1,0,1};
};
class enclave_ui_character_creation_frame_2: RscPictureEnclave
{
	idc = 1202;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.463906 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.0055 * safezoneH;
	colorText[] = {-1,1,0,1};
	colorBackground[] = {-1,1,0,1};
	colorActive[] = {-1,1,0,1};
};
class enclave_ui_character_creation_frame_3: RscPictureEnclave
{
	idc = 1203;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.775 * safezoneH + safezoneY;
	w = 0.474375 * safezoneW;
	h = 0.0055 * safezoneH;
	colorText[] = {-1,1,0,1};
	colorBackground[] = {-1,1,0,1};
	colorActive[] = {-1,1,0,1};
};
class enclave_ui_character_creation_name_structured: RscStructuredTextEnclave
{
	idc = 1100;
	x = 0.288594 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_age_structured: RscStructuredTextEnclave
{
	idc = 1101;
	x = 0.288594 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_faction_structured: RscStructuredTextEnclave
{
	idc = 1102;
	x = 0.288594 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_background_structured: RscStructuredTextEnclave
{
	idc = 1103;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_name_edit: RscEditEnclave
{
	idc = 1400;
	x = 0.360781 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.149531 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,1,0,1};
	colorActive[] = {0,1,0,1};
	sizeEx = 1.5 * GUI_GRID_H;
};
class enclave_ui_character_creation_age_edit: RscEditEnclave
{
	idc = 1401;
	x = 0.360781 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.149531 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,1,0,1};
	colorActive[] = {0,1,0,1};
	sizeEx = 1.5 * GUI_GRID_H;
};
class enclave_ui_character_creation_faction_edit: RscEditEnclave
{
	idc = 1402;
	x = 0.360781 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.149531 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,1,0,1};
	colorActive[] = {0,1,0,1};
	sizeEx = 1.5 * GUI_GRID_H;
};
class enclave_ui_character_creation_background_edit: RscEditMultiEnclave
{
	idc = 1403;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.216563 * safezoneW;
	h = 0.11 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,1,0,1};
	colorActive[] = {0,1,0,1};
	sizeEx = 1.5 * GUI_GRID_H;
};
class enclave_ui_character_creation_registration1: RscStructuredTextEnclave
{
	idc = 1104;
	x = 0.309219 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.397031 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,0};
	colorActive[] = {0,1,0,0};
	sizeEx = 1.5 * GUI_GRID_H;
};
class enclave_ui_character_creation_logo: RscPictureEnclave
{
	idc = 1204;
	text = "enclave_ui\images\vault_tec_ca.paa";
	x = 0.597969 * safezoneW + safezoneX;
	y = 0.126 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.209 * safezoneH;
};
class enclave_ui_character_creation_frame_5: RscPictureEnclave
{
	idc = 1205;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.695937 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.0055 * safezoneH;
	colorText[] = {-1,1,0,1};
	colorBackground[] = {-1,1,0,1};
	colorActive[] = {-1,1,0,1};
};
class enclave_ui_character_creation_reset: RscButtonEnclave
{
	onButtonClick = "[player, ""enclave_character_creation""] spawn enclave_fnc_buttonReset";

	idc = 1600;
	text = "Reset"; //--- ToDo: Localize;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,1};
};
class enclave_ui_character_creation_accept: RscButtonEnclave
{
	onButtonClick = "[player, ""enclave_character_skills""] call enclave_fnc_nextDialog";

	idc = 1601;
	text = "Next"; //--- ToDo: Localize;
	x = 0.695937 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,1};
};
class enclave_ui_character_creation_pipboy: RscPictureEnclave
{
	idc = 1206;
	text = "enclave_ui\images\pipboy_1.paa";
	x = 0.567031 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.264 * safezoneH;
};
class enclave_ui_character_creation_description: RscStructuredTextEnclave
{
	idc = 1105;
	x = 0.54125 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.154687 * safezoneW;
	h = 0.209 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};

/* #Wecaxe
$[
	1.063,
	["enclave_ui_character_creation",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1200,"enclave_ui_character_create_background",[1,"ui2.jpg",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.4125 * safezoneW","0.495 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[1800,"enclave_ui_character_creation_frame_4",[1,"",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.4125 * safezoneW","0.495 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[1000,"enclave_ui_character_creation_registration",[1,"REGISTRATION FORM",["0.309219 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.144375 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0154688 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.45875 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.2475 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.29375 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.4125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1100,"enclave_ui_character_creation_name_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_age_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.401 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_faction_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1103,"enclave_ui_character_creation_background_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.232031 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1400,"enclave_ui_character_creation_name_edit",[1,"Fat",["0.386562 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[-1,-1,-1,1],[-1,-1,-1,0],[-1,-1,-1,0],"","-1"],[]],
	[1401,"enclave_ui_character_creation_age_edit",[1,"Fat",["0.386562 * safezoneW + safezoneX","0.401 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[-1,-1,-1,1],[-1,-1,-1,0],[-1,-1,-1,0],"","-1"],[]],
	[1402,"enclave_ui_character_creation_faction_edit",[1,"Fat",["0.386562 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[-1,-1,-1,1],[-1,-1,-1,0],[-1,-1,-1,0],"","-1"],[]],
	[1403,"enclave_ui_character_creation_background_edit",[1,"Fat",["0.304062 * safezoneW + safezoneX","0.632 * safezoneH + safezoneY","0.232031 * safezoneW","0.132 * safezoneH"],[-1,-1,-1,1],[-1,-1,-1,0],[-1,-1,-1,0],"","-1"],[]]
]
*/

/* #Pebijy
$[
	1.063,
	["enclave_ui_character_creation",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1200,"enclave_ui_character_create_background",[1,"ui2.jpg",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.4125 * safezoneW","0.495 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[1800,"enclave_ui_character_creation_frame_4",[1,"",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.4125 * safezoneW","0.495 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.29375 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0154688 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.45875 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.154687 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.29375 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.4125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1100,"enclave_ui_character_creation_name_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_age_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.401 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_faction_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1103,"enclave_ui_character_creation_background_structured",[1,"",["0.304063 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.221719 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1400,"enclave_ui_character_creation_name_edit",[1,"Fat",["0.37625 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1401,"enclave_ui_character_creation_age_edit",[1,"Fat",["0.37625 * safezoneW + safezoneX","0.401 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1402,"enclave_ui_character_creation_faction_edit",[1,"Fat",["0.37625 * safezoneW + safezoneX","0.489 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1403,"enclave_ui_character_creation_background_edit",[1,"Fat",["0.304062 * safezoneW + safezoneX","0.643 * safezoneH + safezoneY","0.221719 * safezoneW","0.11 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1104,"enclave_ui_character_creation_registration1",[1,"",["0.309219 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.397031 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1204,"enclave_ui_character_creation_logo",[1,"images\vault_tec_ca.paa",["0.597969 * safezoneW + safezoneX","0.181 * safezoneH + safezoneY","0.113437 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1205,"enclave_ui_character_creation_frame_5",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.695937 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0103125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]]
]
*/

/* #Vyfema
$[
	1.063,
	["enclave_ui_character_creation",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[-1200,"enclave_ui_character_create_background",[1,"enclave_ui\ui.jpg",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[-1800,"enclave_ui_character_creation_frame_4",[1,"",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[-1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.0464063 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.463906 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.154687 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.474375 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1100,"enclave_ui_character_creation_name_structured",[1,"",["0.288594 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_age_structured",[1,"",["0.288594 * safezoneW + safezoneX","0.357 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_faction_structured",[1,"",["0.288594 * safezoneW + safezoneX","0.445 * safezoneH + safezoneY","0.0721875 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1103,"enclave_ui_character_creation_background_structured",[1,"",["0.29375 * safezoneW + safezoneX","0.533 * safezoneH + safezoneY","0.216563 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1400,"enclave_ui_character_creation_name_edit",[1,"",["0.360781 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1401,"enclave_ui_character_creation_age_edit",[1,"",["0.360781 * safezoneW + safezoneX","0.357 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1402,"enclave_ui_character_creation_faction_edit",[1,"",["0.360781 * safezoneW + safezoneX","0.445 * safezoneH + safezoneY","0.149531 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1403,"enclave_ui_character_creation_background_edit",[1,"",["0.29375 * safezoneW + safezoneX","0.577 * safezoneH + safezoneY","0.216563 * safezoneW","0.11 * safezoneH"],[0,0,0,1],[0,1,0,1],[0,1,0,1],"","1.5"],[]],
	[1104,"enclave_ui_character_creation_registration1",[1,"",["0.309219 * safezoneW + safezoneX","0.192 * safezoneH + safezoneY","0.397031 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1204,"enclave_ui_character_creation_logo",[1,"enclave_ui\images\vault_tec_ca.paa",["0.597969 * safezoneW + safezoneX","0.126 * safezoneH + safezoneY","0.118594 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1205,"enclave_ui_character_creation_frame_5",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.695937 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.04125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1600,"enclave_ui_character_creation_reset",[1,"Reset",["0.262812 * safezoneW + safezoneX","0.786 * safezoneH + safezoneY","0.04125 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||] spawn enclave_fnc_buttonReset|;"]],
	[1601,"enclave_ui_character_creation_accept",[1,"Next",["0.695937 * safezoneW + safezoneX","0.786 * safezoneH + safezoneY","0.04125 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_skills||] call enclave_fnc_nextDialog|;"]],
	[1206,"enclave_ui_character_creation_pipboy",[1,"enclave_ui\images\pipboy_1.paa",["0.567031 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.154687 * safezoneW","0.264 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1105,"enclave_ui_character_creation_description",[1,"",["0.54125 * safezoneW + safezoneX","0.533 * safezoneH + safezoneY","0.154687 * safezoneW","0.209 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]]
]
*/
