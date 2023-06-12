class enclave_character_skills
{
	idd=5100;
	movingEnable = 0;
	onLoad = "uiNamespace setVariable ['enclave_sheet', _this select 0]";
	// onEditChanged = "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"
	// onMouseButtonDown = "playSoundUI [""enclave_ui\sounds\ui_menu_prevnext.ogg"", 3];";
	onKeyUp = "_this call enclave_fnc_keyUp";
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Silence, v1.063, #Lydipy)
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
class enclave_ui_character_creation_intelligence_structured: RscStructuredTextEnclave
{
	idc = 1100;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_strength_structured: RscStructuredTextEnclave
{
	idc = 1101;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_perception_structured: RscStructuredTextEnclave
{
	idc = 1102;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_points_available_structured: RscStructuredTextEnclave
{
	idc = 1103;
	x = 0.288594 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.211406 * safezoneW;
	h = 0.154 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_charisma_structured: RscStructuredTextEnclave
{
	idc = 1106;
	x = 0.262812 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
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
	onButtonClick = "[player, ""enclave_character_skills""] spawn enclave_fnc_buttonReset";

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
	onButtonClick = "[] call enclave_fnc_buttonAccept";

	idc = 1601;
	text = "Accept"; //--- ToDo: Localize;
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
	text = "enclave_ui\images\pipboy_neutral_ca.paa";
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
class enclave_ui_character_creation_charisma_button_left: RscButtonEnclave
{
	onButtonClick = "[""charisma"", ""-"", 1] call enclave_fnc_character_skill_level";

	idc = 1602;
	text = "<"; //--- ToDo: Localize;
	x = 0.453594 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_charisma_button_right: RscButtonEnclave
{
	onButtonClick = "[""charisma"", ""+"", 1] call enclave_fnc_character_skill_level";

	idc = 1603;
	text = ">"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_charisma_points_structured: RscStructuredTextEnclave
{
	idc = 1107;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_perception_button_left: RscButtonEnclave
{
	onButtonClick = "[""perception"", ""-"", 1] call enclave_fnc_character_skill_level";

	idc = 1604;
	text = "<"; //--- ToDo: Localize;
	x = 0.453594 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_perception_button_right: RscButtonEnclave
{
	onButtonClick = "[""perception"", ""+"", 1] call enclave_fnc_character_skill_level";

	idc = 1605;
	text = ">"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_perception_points_structured: RscStructuredTextEnclave
{
	idc = 1108;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_strength_button_left: RscButtonEnclave
{
	onButtonClick = "[""strength"", ""-"", 1] call enclave_fnc_character_skill_level";

	idc = 1606;
	text = "<"; //--- ToDo: Localize;
	x = 0.453594 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_strength_button_right: RscButtonEnclave
{
	onButtonClick = "[""strength"", ""+"", 1] call enclave_fnc_character_skill_level";

	idc = 1607;
	text = ">"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_strength_points_structured: RscStructuredTextEnclave
{
	idc = 1109;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
class enclave_ui_character_creation_intelligence_button_left: RscButtonEnclave
{
	onButtonClick = "[""intelligence"", ""-"", 1] call enclave_fnc_character_skill_level";

	idc = 1608;
	text = "<"; //--- ToDo: Localize;
	x = 0.453594 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_intelligence_button_right: RscButtonEnclave
{
	onButtonClick = "[""intelligence"", ""+"", 1] call enclave_fnc_character_skill_level";

	idc = 1609;
	text = ">"; //--- ToDo: Localize;
	x = 0.484531 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.0103125 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,1,0,1};
	colorBackground[] = {-1,-1,-1,0};
	sizeEx = 2 * GUI_GRID_H;
};
class enclave_ui_character_creation_intelligence_points_structured: RscStructuredTextEnclave
{
	idc = 1110;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {0,0,0,0};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};

/* #Lydipy
$[
	1.063,
	["enclave_ui_character_skills",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[-1200,"enclave_ui_character_create_background",[1,"enclave_ui\ui.jpg",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[1,1,1,0.5],[1,1,1,0.5],[1,1,1,0.5],"","-1"],[]],
	[-1800,"enclave_ui_character_creation_frame_4",[1,"",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.474375 * safezoneW","0.55 * safezoneH"],[0,1,0,1],[0,1,0,1],[0,1,0,1],"","-1"],[]],
	[-1201,"enclave_ui_character_creation_frame_1",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.0464063 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1202,"enclave_ui_character_creation_frame_2",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.463906 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.154687 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[-1203,"enclave_ui_character_creation_frame_3",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.262812 * safezoneW + safezoneX","0.775 * safezoneH + safezoneY","0.474375 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1100,"enclave_ui_character_creation_intelligence_structured",[1,"",["0.262812 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.118594 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1101,"enclave_ui_character_creation_strength_structured",[1,"",["0.262812 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.118594 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1102,"enclave_ui_character_creation_perception_structured",[1,"",["0.262812 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.118594 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1103,"enclave_ui_character_creation_points_available_structured",[1,"",["0.288594 * safezoneW + safezoneX","0.599 * safezoneH + safezoneY","0.211406 * safezoneW","0.154 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1106,"enclave_ui_character_creation_charisma_structured",[1,"",["0.262812 * safezoneW + safezoneX","0.544 * safezoneH + safezoneY","0.118594 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1104,"enclave_ui_character_creation_registration1",[1,"",["0.309219 * safezoneW + safezoneX","0.192 * safezoneH + safezoneY","0.397031 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,0],[0,1,0,0],"","1.5"],[]],
	[1204,"enclave_ui_character_creation_logo",[1,"enclave_ui\images\vault_tec_ca.paa",["0.597969 * safezoneW + safezoneX","0.126 * safezoneH + safezoneY","0.118594 * safezoneW","0.209 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1205,"enclave_ui_character_creation_frame_5",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.695937 * safezoneW + safezoneX","0.225 * safezoneH + safezoneY","0.04125 * safezoneW","0.0055 * safezoneH"],[-1,1,0,1],[-1,1,0,1],[-1,1,0,1],"","-1"],[]],
	[1600,"enclave_ui_character_creation_reset",[1,"Reset",["0.262812 * safezoneW + safezoneX","0.786 * safezoneH + safezoneY","0.04125 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[player, ||enclave_character_skills||] spawn enclave_fnc_buttonReset|;"]],
	[1601,"enclave_ui_character_creation_accept",[1,"Accept",["0.695937 * safezoneW + safezoneX","0.786 * safezoneH + safezoneY","0.04125 * safezoneW","0.033 * safezoneH"],[0,1,0,1],[0,1,0,1],[-1,-1,-1,-1],"","-1"],["onButtonClick = |[] call enclave_fnc_buttonAccept|;"]],
	[-1206,"enclave_ui_character_creation_pipboy",[1,"enclave_ui\images\pipboy_neutral_ca.paa",["0.567031 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.154687 * safezoneW","0.264 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[-1105,"enclave_ui_character_creation_description",[1,"",["0.54125 * safezoneW + safezoneX","0.533 * safezoneH + safezoneY","0.154687 * safezoneW","0.209 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1602,"enclave_ui_character_creation_charisma_button_left",[1,"<",["0.453594 * safezoneW + safezoneX","0.544 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||charisma||, ||-||, 1] call enclave_fnc_character_skill_level|;"]],
	[1603,"enclave_ui_character_creation_charisma_button_right",[1,">",["0.484531 * safezoneW + safezoneX","0.544 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||charisma||, ||+||, 1] call enclave_fnc_character_skill_level|;"]],
	[-1107,"enclave_ui_character_creation_charisma_points_structured",[1,"",["0.45875 * safezoneW + safezoneX","0.544 * safezoneH + safezoneY","0.0309375 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1604,"enclave_ui_character_creation_perception_button_left",[1,"<",["0.453594 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||perception||, ||-||, 1] call enclave_fnc_character_skill_level|;"]],
	[1605,"enclave_ui_character_creation_perception_button_right",[1,">",["0.484531 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||perception||, ||+||, 1] call enclave_fnc_character_skill_level|;"]],
	[-1108,"enclave_ui_character_creation_perception_points_structured",[1,"",["0.45875 * safezoneW + safezoneX","0.456 * safezoneH + safezoneY","0.0309375 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1606,"enclave_ui_character_creation_strength_button_left",[1,"<",["0.453594 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||strength||, ||-||, 1] call enclave_fnc_character_skill_level|;"]],
	[1607,"enclave_ui_character_creation_strength_button_right",[1,">",["0.484531 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||strength||, ||+||, 1] call enclave_fnc_character_skill_level|;"]],
	[-1109,"enclave_ui_character_creation_strength_points_structured",[1,"",["0.45875 * safezoneW + safezoneX","0.368 * safezoneH + safezoneY","0.0309375 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]],
	[1608,"enclave_ui_character_creation_intelligence_button_left",[1,"<",["0.453594 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||intelligence||, ||-||, 1] call enclave_fnc_character_skill_level|;"]],
	[1609,"enclave_ui_character_creation_intelligence_button_right",[1,">",["0.484531 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0103125 * safezoneW","0.044 * safezoneH"],[0,1,0,1],[-1,-1,-1,0],[-1,-1,-1,-1],"","2"],["onButtonClick = |[||intelligence||, ||+||, 1] call enclave_fnc_character_skill_level|;"]],
	[-1110,"enclave_ui_character_creation_intelligence_points_structured",[1,"",["0.45875 * safezoneW + safezoneX","0.28 * safezoneH + safezoneY","0.0309375 * safezoneW","0.044 * safezoneH"],[0,0,0,1],[0,0,0,0],[0,0,0,0],"","-1"],[]]
]
*/

