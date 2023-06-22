params ["_unit", ["_character", _unit getVariable ["enclave_character", 0]]];

profileNamespace setVariable [("enclave_character_info_" + str _character), ["", "", "", ""]];
profileNamespace setVariable [("enclave_character_skills_" + str _character), ["", "", "", ""]];

[_unit, -1, "-", _character] call enclave_fnc_handleKarma;