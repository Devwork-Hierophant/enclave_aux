/*
    Author:
    Silence

    Description:
    Opens provided dialog, and prevents it from being closed by esc key

    Params:
    _dialog   <STRING>
    _unit   <UNIT>

    Usage:
    [_dialog, _unit] call enclave_fnc_openDialog;
*/

params ["_dialog", "_unit"];
#include "\a3\ui_f\hpp\definedikcodes.inc"

// createDialog _dialog;

private _display = createDialog _dialog;

// private _ctrls = allControls _display;

switch (_dialog) do 
{
    case "enclave_character_creation": 
    {
        [_unit] call enclave_fnc_character_creation;
    };
    case "enclave_character_choose": 
    {
        [_unit] call enclave_fnc_character_choose;
    };
    case "enclave_character_skills": 
    {
        [_unit] call enclave_fnc_character_skills;
    };
};

(uiNamespace getVariable "enclave_sheet") displayAddEventHandler ["KeyDown",
{
	params ["", "_key"];
	_key == DIK_ESCAPE;
}];