/*
    Author:
    Silence

    Description:
    Gets the current karma value

    Params:
    _unit       <UNIT>
    _character  <INT> <DEFAULT: getVariable "enclave_character">

    Usage:
    [_unit] call enclave_fnc_karma;
*/

params ["_unit", ["_character", player getVariable ["enclave_character", 0]]];

#include "..\karmaValues.hpp"

private _karma = profileNamespace getVariable [("enclave_karma_" + str _character), KARMA_DEFAULT];

// private _cid = CID;

#include "\enclave_ui\commonDefs.hpp"

// private _cid = CID;

// _cid = ((_cid select 1) select 0) select 0;

// private _karma = [1, 0, (format["SELECT karma FROM characterinfo WHERE cid=%1 AND charNum=%2",_cid,localNameSpace getVariable ["enclave_sheet_character",1]]) ] call enclave_db_fnc_callExtDB3;

// _karma = ((_karma select 1) select 0) select 0;

_karma