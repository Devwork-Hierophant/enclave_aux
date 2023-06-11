/*
    Author:
    Silence

    Description:
    Sets up the main character creation screen

    Params:
    _unit   <UNIT>

    Usage:
    [_unit] call enclave_fnc_character_creation;
*/

params ["_unit"];

// private _test = (_ctrls select 9);

// private _eh = [] spawn {
//     waitUntil { !isNull (findDisplay 46) };
//     findDisplay 46 displayAddEventHandler ["MouseButtonDown", "playSoundUI [""enclave_ui\sounds\ui_menu_focus.ogg""];"];
//     findDisplay 46 displayAddEventHandler ["KeyUp", "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"];
// };

private _textName = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Name: </t>
<br />
<br />
<br />
"
];

private _textAge = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Age:</t>
<br />
<br />
<br />
"
];

private _textFaction = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Faction:</t>
<br />
<br />
<br />
"
];

private _textBackground = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.7'>Background</t>
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

((uiNamespace getVariable "enclave_sheet") displayCtrl 1100) ctrlSetStructuredText parseText _textName;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1101) ctrlSetStructuredText parseText _textAge;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1102) ctrlSetStructuredText parseText _textFaction;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1103) ctrlSetStructuredText parseText _textBackground;
((uiNamespace getVariable "enclave_sheet") displayCtrl 1104) ctrlSetStructuredText parseText _textForm;