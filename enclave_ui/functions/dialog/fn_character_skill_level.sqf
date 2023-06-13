/*
    Author:
    Silence

    Description:
    Allows a skill level to be added/removed, also removes/adds available skill points

    Params:
    _skill       <STRING>
    _operation   <STRING|+/-|>
    _levels      <INTEGER>

    Usage:
    [_skill, _operation, _levels] call enclave_fnc_character_skill_level;
*/

params ["_skill", "_operation", "_levels"];

// ["charisma", "-", 1] call enclave_fnc_character_skill_level;

#include "..\..\commonDefs.hpp"

private _idcCharisma = IDC_CHARISMA;
private _idcPerception = IDC_PERCEPTION;
private _idcStrength = IDC_STRENGTH;
private _idcIntelligence = IDC_INTELLIGENCE;

private _idc = 0;

switch (_skill) do
{
    case "charisma": 
    {
        _idc = _idcCharisma;
    };
    case "perception": 
    {
        _idc = _idcPerception;
    };
    case "strength": 
    {
        _idc = _idcStrength;
    };
    case "intelligence": 
    {
        _idc = _idcIntelligence;
    };
};

// hint str _idc;

switch (_operation) do
{
    case "+":
    {
        private _skillPoints = localNamespace getVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

        if (_skillPoints isNotEqualTo 0) then {
            localNamespace setVariable ["enclave_sheet_skillPoints", (_skillPoints - _levels)];

            private _points = localNamespace getVariable [("enclave_sheet_skill_" + _skill), SKILL_POINTS_DEFAULT];
            ((uiNamespace getVariable "enclave_sheet") displayCtrl _idc) ctrlSetStructuredText ([(_points + _levels)] call enclave_fnc_character_skill_parseLevel);
            localNamespace setVariable [("enclave_sheet_skill_" + _skill), (_points + _levels)];
        };
    };
    case "-":
    {
        private _skillPoints = localNamespace getVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

        private _points = localNamespace getVariable [("enclave_sheet_skill_" + _skill), SKILL_POINTS_DEFAULT];
        if (_points isNotEqualTo 1) then {
            localNamespace setVariable ["enclave_sheet_skillPoints", (_skillPoints + _levels)];
            ((uiNamespace getVariable "enclave_sheet") displayCtrl _idc) ctrlSetStructuredText ([(_points - _levels)] call enclave_fnc_character_skill_parseLevel);
            localNamespace setVariable [("enclave_sheet_skill_" + _skill), (_points - _levels)];
        };
    };
};

call enclave_fnc_character_skill_updatePoints;