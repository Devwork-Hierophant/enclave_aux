/*
    Author:
    Silence

    Description:
    Runs the code that is associated with the "Reset" button on UI's. Basically resets data.

    Params:
    _unit   <UNIT>
    _dialog   <STRING>

    Usage:
    [_unit, _dialog] spawn enclave_fnc_buttonReset;
*/

params ["_unit", "_dialog"];

// Spawn script

#include "..\..\commonDefs.hpp"

private _result = ["Are you sure?", "Confirm", true, true] call BIS_fnc_guiMessage;

if (_result) exitWith { // if they say yes
    closeDialog 2;

    localNamespace setVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

    {
        localNamespace setVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    } forEach SKILLS;

    [_dialog, _unit] call enclave_fnc_openDialog;
};