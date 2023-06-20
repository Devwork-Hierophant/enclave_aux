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

#include "..\..\commonDefs.hpp"

private _character = localNamespace getVariable ["enclave_sheet_character", 0];
private _cid = [1,0, (format["SELECT cid FROM playerinfo WHERE sid=%1",getPlayerUID player]) ] call enclave_db_fnc_callExtDB3;

private _skills = [];

{
    private _data = localNamespace getVariable [("enclave_sheet_skill_" + _x), SKILL_POINTS_DEFAULT];
    _skills pushBack _data;
} forEach SKILLS;
//God help me. I've no idea if this is right
[0,0, (format["INSERT INTO skillstable VALUES (%1,%2,%3,%4,%5)",_cid, _skills select 1, _skills select 2, _skills select 3, _skills select 4]) ] call enclave_db_fnc_callExtDB3;

//hint str _skills;

closeDialog 2;
