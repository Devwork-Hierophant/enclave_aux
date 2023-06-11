params ["_unit"];

// private _test = (_ctrls select 9);

// private _eh = [] spawn {
//     waitUntil { !isNull (findDisplay 46) };
//     findDisplay 46 displayAddEventHandler ["MouseButtonDown", "playSoundUI [""enclave_ui\sounds\ui_menu_focus.ogg""];"];
//     findDisplay 46 displayAddEventHandler ["KeyUp", "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"];
// };

#include "..\..\commonDefs.hpp"

// private _skillPoints = localNamespace getVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

private _skillPointsIntelligence = localNamespace getVariable ["enclave_sheet_skill_intelligence", SKILL_POINTS_DEFAULT];
private _skillPointsStrength = localNamespace getVariable ["enclave_sheet_skill_strength", SKILL_POINTS_DEFAULT];
private _skillPointsPerception = localNamespace getVariable ["enclave_sheet_skill_perception", SKILL_POINTS_DEFAULT];
private _skillPointsCharisma = localNamespace getVariable ["enclave_sheet_skill_charisma", SKILL_POINTS_DEFAULT];

((uiNamespace getVariable "enclave_sheet") displayCtrl 1107) ctrlSetStructuredText ([_skillPointsCharisma] call enclave_fnc_character_skill_parseLevel);
((uiNamespace getVariable "enclave_sheet") displayCtrl 1108) ctrlSetStructuredText ([_skillPointsPerception] call enclave_fnc_character_skill_parseLevel);
((uiNamespace getVariable "enclave_sheet") displayCtrl 1109) ctrlSetStructuredText ([_skillPointsStrength] call enclave_fnc_character_skill_parseLevel);
((uiNamespace getVariable "enclave_sheet") displayCtrl 1110) ctrlSetStructuredText ([_skillPointsIntelligence] call enclave_fnc_character_skill_parseLevel);

call enclave_fnc_character_skill_updatePoints;

private _textIntelligence = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Intelligence</t>
<br />
<br />
<br />
"
];

private _textStrength = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Strength</t>
<br />
<br />
<br />
"
];

private _textPerception = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Perception</t>
<br />
<br />
<br />
"
];

private _textCharisma = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Charisma</t>
<br />
<br />
<br />
"
];

private _textForm = format
[
"
<t size='1' valign='top' align='left' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.6'>REGISTRATION FORM</t>
<br />
<br />
<br />
"
];

((uiNamespace getVariable "enclave_sheet") displayCtrl 1100) ctrlSetStructuredText parseText _textIntelligence;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1101) ctrlSetStructuredText parseText _textStrength;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1102) ctrlSetStructuredText parseText _textPerception;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1104) ctrlSetStructuredText parseText _textForm;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1106) ctrlSetStructuredText parseText _textCharisma;
// don't ask