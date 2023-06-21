params ["_unit", "_newKarma", ["_operator", "+"], ["_global", true]];

#include "..\karmaValues.hpp"
#include "\enclave_ui\commonDefs.hpp"

private _karma = [_unit] call enclave_fnc_karma;

if (_karma >= 1000) exitWith {};
if (_karma <= -1000) exitWith {};

if (_operator isEqualTo "-") exitWith {
    private _updatedKarma = (_karma - _newKarma);

    // _unit setVariable ["enclave_karma", _updatedKarma, _global];

    [0, 0, (format ['INSERT INTO characterinfo (karma) VALUES ("%1");',_updatedKarma]) ] call enclave_db_fnc_callExtDB3;

    [_unit, _updatedKarma, 0] call enclave_fnc_handleKarmaIcon;
};

private _updatedKarma = (_karma + _newKarma);

// _unit setVariable ["enclave_karma", _updatedKarma, _global];

[0, 0, (format ['INSERT INTO characterinfo (karma) VALUES ("%1");',_updatedKarma]) ] call enclave_db_fnc_callExtDB3;

[_unit, _updatedKarma, 1] call enclave_fnc_handleKarmaIcon;