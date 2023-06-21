params ["_unit", "_dialog", ["_character", 0]];

// Spawn script

#include "..\..\commonDefs.hpp"

if (_character isNotEqualTo 0) then {
    localNamespace setVariable ["enclave_sheet_character", _character];
    hint str _character;
};

private _result = ["Are you sure?", "Confirm", true, true] call BIS_fnc_guiMessage;

private _tof = [1, 0, (format["SELECT charNum FROM characterinfo WHERE EXISTS (SELECT charNum FROM characterinfo WHERE charnum=%1 AND cid=%2);", _character, CID]) ] call enclave_db_fnc_callExtDB3;

diag_log _tof;

_tof = ((_tof select 1) select 0) select 0;

if (_result) exitWith { // if they say yes
    closeDialog 2;
    if (_tof) exitWith { // if their character already exists
        _unit setVariable ["enclave_character", _character, true];
    };

    [_dialog, _unit] call enclave_fnc_openDialog;
};