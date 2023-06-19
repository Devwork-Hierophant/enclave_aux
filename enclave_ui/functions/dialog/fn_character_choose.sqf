params ["_unit"];

// private _test = (_ctrls select 9);

// private _eh = [] spawn {
//     waitUntil { !isNull (findDisplay 46) };
//     findDisplay 46 displayAddEventHandler ["MouseButtonDown", "playSoundUI [""enclave_ui\sounds\ui_menu_focus.ogg""];"];
//     findDisplay 46 displayAddEventHandler ["KeyUp", "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"];
// };

// add pipboy change depending on karma on character

{
    [_x] call enclave_fnc_character_choose_pipboy;
} forEach [1206, 1207, 1208];

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

((uiNamespace getVariable "enclave_sheet") displayCtrl 1104) ctrlSetStructuredText parseText _textForm;

((uiNamespace getVariable "enclave_sheet") displayCtrl 1100) ctrlSetStructuredText parseText (["Character 1", "Unknown", "Unknown"] call enclave_fnc_character_parsePreview);
((uiNamespace getVariable "enclave_sheet") displayCtrl 1101) ctrlSetStructuredText parseText (["Character 2", "Unknown", "Unknown"] call enclave_fnc_character_parsePreview);
((uiNamespace getVariable "enclave_sheet") displayCtrl 1102) ctrlSetStructuredText parseText (["Character 3", "Unknown", "Unknown"] call enclave_fnc_character_parsePreview);