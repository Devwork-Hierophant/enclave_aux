/*
    Author:
    Silence

    Description:
    Handles each kill. Determines wether or not to do a + or - karma change. If a custom skeleton is in use, you'll have to add this script to the skeleton, like is done via CAManBase

    Params:
    _unit        <UNIT>

    Usage:
    [_unit] call enclave_fnc_handleKill;
*/

params ["_unit"];

#include "..\karmaValues.hpp"

_unit addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];

    private _karma = [_instigator] call enclave_fnc_karma;

    private _sideUnit = side group _unit;
    private _sideInstigator = side group _instigator;

    private _isFriendly = [_sideUnit, _sideInstigator] call BIS_fnc_sideIsFriendly;
    private _evilUnits = missionNamespace getVariable ["enclave_karma_evilUnits", [""]];

    switch (true) do
    {
        case (_sideUnit isEqualTo civilian):
        {
            [_instigator, KILL_CIV, "-"] call enclave_fnc_handleKarma;
            // _instigator setVariable ["enclave_karma", KILL_CIV, true];
        };
        case (_isFriendly isEqualTo true):
        {
            [_instigator, KILL_FRIENDLY, "-"] call enclave_fnc_handleKarma;
            // _instigator setVariable ["enclave_karma", KILL_FRIENDLY, true];
        };
        case (_isFriendly isEqualTo false):
        {
            [_instigator, KILL_ENEMY, "+"] call enclave_fnc_handleKarma;
            // _instigator setVariable ["enclave_karma", KILL_ENEMY, true];
        };
        case (typeOf _unit in _evilUnits):
        {
            [_instigator, KILL_EVIL, "+"] call enclave_fnc_handleKarma;
            // _instigator setVariable ["enclave_karma", KILL_EVIL, true];
        };
    };
}];