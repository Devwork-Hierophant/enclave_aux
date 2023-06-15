/*
	Author: 
	Szymon "Stevio" Jankowski

	Date: 
	6/9/23 (Giggidy)

	Description: 
	This file will handle sending client to server, and getting the return value.

	PARAMS:
	0: mode [INT] 0 = Send SQL Command, 1 = Recieve SQL Data 
	1: 1 = Recieve SQL Data callType [INT] 0 = Async, 2 = Sync + Save
	2: SQL Query [STRING] SQL Query... Fairly Simple

	Example:
	[0,0,"INSERT INTO <ENTER TABLE NAME> VALUES (value1, value2, value3)"] call enclave_db_fnc_callExtDB3;
	[1,0,"SELECT * FROM playerinfo"] call enclave_db_fnc_callExtDB3;

	Return:
	_return		<DATA>
*/

params ["_mode","_callType",["_sql",""]];

[_mode, _callType, _sql, clientOwner] remoteExec ["enclave_db_fnc_extDB3Handler",2];

private _return = missionNamespace getVariable ["enclave_db_return", false];

_return