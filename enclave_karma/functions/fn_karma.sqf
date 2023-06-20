params ["_unit"];

#include "..\karmaValues.hpp"

// private _karma = _unit getVariable ["enclave_karma", KARMA_DEFAULT];

// private _cid = CID;

#include "\enclave_ui\commonDefs.hpp"

private _karma = [1, 0, (format["SELECT cid FROM playerinfo WHERE cid=%1 AND charNum=%2",CID,localNameSpace getVariable ["enclave_sheet_character",0]]) ] call enclave_db_fnc_callExtDB3;

diag_log _karma;

_karma = ((_karma select 1) select 0) select 0;

_karma