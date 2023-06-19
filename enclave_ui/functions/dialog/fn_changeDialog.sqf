params ["_unit", "_dialog", ["_character", 0]];

// Spawn script

#include "..\..\commonDefs.hpp"

if (_character isNotEqualTo 0) then {
    localNamespace setVariable ["enclave_sheet_character", _character];
    hint str _character;
};

private _result = ["Are you sure?", "Confirm", true, true] call BIS_fnc_guiMessage;

if (_result) exitWith { // if they say yes
    closeDialog 2;

    [_dialog, _unit] call enclave_fnc_openDialog;
};