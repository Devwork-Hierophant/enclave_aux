// params [""];

/*
    Author:
    Silence

    Description:
    Runs the code that is associated with the "Accept" button on UI's. Basically saves data.

    Params:
    N/A

    Usage:
    call enclave_fnc_buttonAccept;
*/

params [["_unit", player]];

#include "..\..\commonDefs.hpp"

private _character = localNamespace getVariable ["enclave_sheet_character", 0];

private _skillPoints = localNamespace getVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

if (_skillPoints isNotEqualTo 0) exitWith {hint "You need to spend all your skill points!"};

private _skills = [];

{
    private _data = localNamespace getVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    _unit setVariable [("enclave_sheet_skill_" + _x), _data];
    _skills pushBack _data;
} forEach SKILLS;

// this array is inverted ^ because of pushback, so charisma is the last object and intelligence is the first

hint str _skills;

closeDialog 2;