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

private _skills = [];

{
    private _data = localNamespace getVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    _skills pushBack _data;
} forEach ["charisma", "perception", "strength", "intelligence"];

hint str _skills;

closeDialog 2;

_skills