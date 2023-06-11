params [""];

private _skills = [];

{
    private _data = localNamespace getVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    _skills pushBack _data;
} forEach ["charisma", "perception", "strength", "intelligence"];

hint str _skills;

closeDialog 2;