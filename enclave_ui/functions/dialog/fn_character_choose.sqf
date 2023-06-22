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
    private _index = _forEachIndex;
    
    private _karma = [_unit, (_index + 1)] call enclave_fnc_karma;

    [_x, _karma] call enclave_fnc_character_choose_pipboy;

} forEach [1206, 1207, 1208];

{

    // private _data = [1, 0, (format["SELECT name, description, karma FROM characterinfo WHERE cid=1 AND charNum=1"]) ] call enclave_db_fnc_callExtDB3; // our index starts at 1, forEach starts at 0

    // private _name = ((_data select 1) select 0) select 0;
    // private _description = ((_data select 1) select 0) select 1;
    // private _karma = ((_data select 1) select 0) select 2;
    // grab data from db, then slap it in the namespace so we can use it later

    private _index = _forEachIndex;

    diag_log _index;

    private _data = profileNamespace getVariable [("enclave_character_info_" + str (_index + 1)), ["", "", "", ""]];

    if (_data select 0 isEqualTo ["", "", "", ""]) then {
        _name = "Unknown";
        _faction = "Unknown";
    };

    private _name = _data select 0;
    private _faction = _data select 2;
    private _karma = [_unit, (_index + 1)] call enclave_fnc_karma;

    diag_log _karma;

    // _unit setVariable [("enclave_character_info_" + str (_index + 1)), _data, true]; // make sure anyone can access it

    ((uiNamespace getVariable "enclave_sheet") displayCtrl _x) ctrlSetStructuredText parseText ([_name, _karma, _faction] call enclave_fnc_character_parsePreview);
} forEach [1100, 1101, 1102];

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
