class enclave_character_choose
{
	idd=5100;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['enclave_sheet', _this select 0]";
	// onEditChanged = "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"
	// onMouseButtonDown = "playSoundUI [""enclave_ui\sounds\ui_menu_prevnext.ogg"", 3];";
	// onKeyUp = "_this call enclave_fnc_keyUp";
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Silence, v1.063, #Muveju)
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
class enclave_ui_character_creation_pipboy_1: RscPictureEnclave
{
	idc = 1206;
	text = "enclave_ui\images\pipboy_neutral_ca.paa";
	x = 0.283437 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
};
class enclave_ui_character_creation_pipboy_2: RscPictureEnclave
{
	idc = 1207;
	text = "enclave_ui\images\pipboy_neutral_ca.paa";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
};
class enclave_ui_character_creation_pipboy_3: RscPictureEnclave
{
	idc = 1208;
	text = "enclave_ui\images\pipboy_neutral_ca.paa";
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
};
class enclave_ui_character_creation_character_1: RscButtonInvisEnclave
{
	onButtonClick = "[player, ""enclave_character_creation"", 1] spawn enclave_fnc_changeDialog";

	idc = 1600;
	x = 0.283437 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,0};
};
class enclave_ui_character_creation_character_2: RscButtonInvisEnclave
{
	onButtonClick = "[player, ""enclave_character_creation"", 2] spawn enclave_fnc_changeDialog";

	idc = 1601;
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,0};
};
class enclave_ui_character_creation_character_3: RscButtonInvisEnclave
{
	onButtonClick = "[player, ""enclave_character_creation"", 3] spawn enclave_fnc_changeDialog";

	idc = 1602;
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.242 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {0,1,0,0};
};
class enclave_ui_character_creation_character_1_structured: RscStructuredTextEnclave
{
	idc = 1100;
	x = 0.283437 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.264 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_character_2_structured: RscStructuredTextEnclave
{
	idc = 1101;
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.264 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_character_3_structured: RscStructuredTextEnclave
{
	idc = 1102;
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.264 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};

/* #Wiqepa
$[
	1.063,
	["enclave_ui_character_skills",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[-1200,"enclave_ui_character_create_background",[1,"ui.jpg",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[-1800,"enclave_ui_character_creation_frame_4",[1,"",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[-1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.0464063 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.463906 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.154687 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.474375 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1104,"enclave_ui_character_creation_registration1",[1,"",["0.309219 * safezoneW + safezoneX","0.192 * safezoneH + safezoneY","0.397031 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1204,"enclave_ui_character_creation_logo",[1,"enclave_ui\images\vault_tec_ca.paa",["0.597969 * safezoneW + safezoneX","0.126 * safezoneH + safezoneY","0.118594 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1205,"enclave_ui_character_creation_frame_5",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.695937 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.04125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1600,"enclave_ui_character_creation_character_1",[1,"Character 1",["0.29375 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.12375 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 1] spawn enclave_fnc_changeDialog|;"]],
	[1206,"enclave_ui_character_creation_pipboy_1",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.283437 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1207,"enclave_ui_character_creation_pipboy_2",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.427812 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1208,"enclave_ui_character_creation_pipboy_3",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.572187 * safezoneW + safezoneX","0.313 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"enclave_ui_character_creation_character_2",[1,"Character 2",["0.438125 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.12375 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 2] spawn enclave_fnc_changeDialog|;"]],
	[1602,"enclave_ui_character_creation_character_3",[1,"Character 3",["0.5825 * safezoneW + safezoneX","0.247 * safezoneH + safezoneY","0.12375 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 3] spawn enclave_fnc_changeDialog|;"]],
	[1100,"enclave_ui_character_creation_character_1_structured",[1,"",["0.283437 * safezoneW + safezoneX","0.555 * safezoneH + safezoneY","0.144375 * safezoneW","0.22 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_character_2_structured",[1,"",["0.427812 * safezoneW + safezoneX","0.555 * safezoneH + safezoneY","0.144375 * safezoneW","0.22 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_character_3_structured",[1,"",["0.572187 * safezoneW + safezoneX","0.555 * safezoneH + safezoneY","0.144375 * safezoneW","0.22 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]]
]
*/

/* #Muveju
$[
	1.063,
	["enclave_ui_character_skills",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[-1200,"enclave_ui_character_create_background",[1,"enclave_ui\ui.jpg",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[-1800,"enclave_ui_character_creation_frame_4",[1,"",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[-1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.0464063 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.463906 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.154687 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.474375 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1104,"enclave_ui_character_creation_registration1",[1,"",["0.309219 * safezoneW + safezoneX","0.192 * safezoneH + safezoneY","0.397031 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1204,"enclave_ui_character_creation_logo",[1,"enclave_ui\images\vault_tec_ca.paa",["0.597969 * safezoneW + safezoneX","0.126 * safezoneH + safezoneY","0.118594 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1205,"enclave_ui_character_creation_frame_5",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.695937 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.04125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1206,"enclave_ui_character_creation_pipboy_1",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.283437 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1207,"enclave_ui_character_creation_pipboy_2",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.427812 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1208,"enclave_ui_character_creation_pipboy_3",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.572187 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"enclave_ui_character_creation_character_1",[1,"",["0.283437 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[0,1,0,1],[0,1,0,0],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 1] spawn enclave_fnc_changeDialog|;"]],
	[1601,"enclave_ui_character_creation_character_2",[1,"",["0.427812 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[0,1,0,1],[0,1,0,0],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 2] spawn enclave_fnc_changeDialog|;"]],
	[1602,"enclave_ui_character_creation_character_3",[1,"",["0.572187 * safezoneW + safezoneX","0.269 * safezoneH + safezoneY","0.144375 * safezoneW","0.242 * safezoneH"],[0,1,0,1],[0,1,0,0],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_creation||, 3] spawn enclave_fnc_changeDialog|;"]],
	[1100,"enclave_ui_character_creation_character_1_structured",[1,"",["0.283437 * safezoneW + safezoneX","0.511 * safezoneH + safezoneY","0.144375 * safezoneW","0.264 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_character_2_structured",[1,"",["0.427812 * safezoneW + safezoneX","0.511 * safezoneH + safezoneY","0.144375 * safezoneW","0.264 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_character_3_structured",[1,"",["0.572187 * safezoneW + safezoneX","0.511 * safezoneH + safezoneY","0.144375 * safezoneW","0.264 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]]
]
*/
