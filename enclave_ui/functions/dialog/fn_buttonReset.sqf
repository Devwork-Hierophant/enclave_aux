params ["_unit", "_dialog"];

// Spawn script

#include "..\..\commonDefs.hpp"

private _result = ["Are you sure?", "Confirm", true, true] call BIS_fnc_guiMessage;

if (_result) exitWith { // if they say yes
    closeDialog 2;

    localNamespace setVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

    {
        localNamespace setVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    } forEach ["charisma", "perception", "strength", "intelligence"];

    [_dialog, _unit] call enclave_fnc_openDialog;
};