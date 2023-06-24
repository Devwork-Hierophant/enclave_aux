/*
    Author:
    Silence

    Description:
    Handles karma updating. Can + or - karma, and handles the associated icon that pops up on the screen.

    Params:
    _unit       <UNIT>
    _newKarma   <INT>
    _operator   <STRING> <DEFAULT: "+">
    _character  <INT> <DEFAULT: getVariable "enclave_character">

    Usage:
    [_unit, _newKarma, _operator] call enclave_fnc_handleKarma;
*/

params ["_unit", "_newKarma", ["_operator", "+"], ["_character", player getVariable ["enclave_character", 0]], ["_global", true]];

#include "..\karmaValues.hpp"
#include "\enclave_ui\commonDefs.hpp"

private _karma = [_unit] call enclave_fnc_karma;

// private _character = _unit getVariable ["enclave_character", 0];

if (_newKarma isEqualTo -1) exitWith {
    profileNamespace setVariable [("enclave_karma_" + str _character), 0];
    saveProfileNamespace;
};

if (_karma >= 1000) exitWith {
    profileNamespace setVariable [("enclave_karma_" + str _character), 1000];
    saveProfileNamespace;
};

if (_karma <= -1000) exitWith {
    profileNamespace setVariable [("enclave_karma_" + str _character), -1000];
    saveProfileNamespace;
};

if (_operator isEqualTo "-") exitWith {
    private _updatedKarma = (_karma - _newKarma);

    profileNamespace setVariable [("enclave_karma_" + str _character), _updatedKarma];
    saveProfileNamespace;

    // [0, 0, (format ['INSERT INTO characterinfo (karma) VALUES ("%1");',_updatedKarma]) ] call enclave_db_fnc_callExtDB3;

    [_unit, _updatedKarma, 0] call enclave_fnc_handleKarmaIcon;
};

private _updatedKarma = (_karma + _newKarma);

profileNamespace setVariable [("enclave_karma_" + str _character), _updatedKarma];
saveProfileNamespace;

// [0, 0, (format ['INSERT INTO characterinfo (karma) VALUES ("%1");',_updatedKarma]) ] call enclave_db_fnc_callExtDB3;

[_unit, _updatedKarma, 1] call enclave_fnc_handleKarmaIcon;