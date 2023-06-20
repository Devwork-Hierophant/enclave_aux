params ["_unit"];

// private _test = (_ctrls select 9);

// private _eh = [] spawn {
//     waitUntil { !isNull (findDisplay 46) };
//     findDisplay 46 displayAddEventHandler ["MouseButtonDown", "playSoundUI [""enclave_ui\sounds\ui_menu_focus.ogg""];"];
//     findDisplay 46 displayAddEventHandler ["KeyUp", "playSoundUI [""enclave_ui\sounds\ui_menu_ok.ogg""];"];
// };

// add pipboy change depending on karma on character

#include "..\..\commonDefs.hpp"

{
    [_x] call enclave_fnc_character_choose_pipboy;

    private _data = [1, 0, (format["SELECT name, description, karma FROM characterinfo WHERE cid=%1 AND charNum=%2", CID, (_forEachIndex+1)]) ] call enclave_db_fnc_callExtDB3; // our index starts at 1, forEach starts at 0

    private _name = ((_data select 1) select 0) select 0;
    private _description = ((_data select 1) select 0) select 1;
    private _karma = ((_data select 1) select 0) select 2;
    // grab data from db, then slap it in the namespace so we can use it later
    localNamespace setVariable [("enclave_character_" + (_forEachIndex+1)), [_name, _description, _karma]];
    {
        ((uiNamespace getVariable "enclave_sheet") displayCtrl _x) ctrlSetStructuredText parseText ([_name, _karma, _description] call enclave_fnc_character_parsePreview);
    } forEach [1100, 1101, 1102];
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