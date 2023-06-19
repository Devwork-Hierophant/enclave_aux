/*
	Author: Szymon "Stevio" Jankowski
	Date: 6/9/23 (Giggidy)
	Description: This file will handle all traffic in terms of sending, reciving and establishing a connection to a MariaDB Server.

	PARAMS
	0: mode [INT] 0 = Send SQL Command, 1 = Recieve SQL Data 
	1: 1 = Recieve SQL Data callType [INT] 0 = Async, 2 = Sync + Save
	2: SQL Query [STRING] SQL Query... Fairly Simple
	3: client machine [INT] Client machine ID. Used to send data back to the caller

	Example
	use callExtDB3
	If that doesn't work for god knows why use this monstrosity.
	[0,0,"INSERT INTO <ENTER TABLE NAME> VALUES (value1, value2, value3)"] call enclave_db_fnc_extDB3Handler;
	[1,0,"SELECT * FROM playerinfo"] call enclave_db_fnc_extDB3Handler;

	NOTES
	If anyone has enough courage to touch this steaming pile of dogshit to make it work for them. I salute you. Only god knows what plans I had for this code
*/

params ["_mode","_callType",["_sql",""],["_clientMachineID",-1]];

private _result = "";
private _fuckADuck = false;
private _adminCommands = ['CREATE DATABASE', 'ALTER DATABASE', 'DROP DATABASE', 'CREATE TABLE', 'ALTER TABLE', 'DROP TABLE', 'CREATE INDEX', 'DROP INDEX', 'GRANT', 'REVOKE', 'COMMIT', 'ROLLBACK', 'SAVEPOINT', 'BACKUP DATABASE', 'RESTORE DATABASE'];
//You use these and you can go fuck a duck ^

//Connect the extDB3 extension to the database server. Should Run first time to make the inital connection
if(missionNamespace getVariable ["extDB3INIT", false] isEqualTo False) exitWith {

	try {

		"extDB3" callExtension "9:ADD_DATABASE:Database";
		"extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL:SQL";
		"extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL:SQL_Text1:TEXT";
		"extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:Database:SQL:SQL_Text2:TEXT2";
		missionNamespace setVariable ["extDB3INIT", true];
	
	} catch {

		diag_log "extDB3Handler.sqf: Connection to the database resulted in an error. Check extDB3 -> Logs for more info";
		diag_log format ["Exception: %1",_exception];
		missionNamespace setVariable ["extDB3INIT", false];

	}

};

//Send command without any SQL to send... Developer made a dumb dumb error
if(_mode isEqualTo 0 && {_sql isEqualTo ""}) exitWith {

	diag_log "extDB3Handler.sqf: ERROR Send SQL Command selected without any SQL query"; 
	hint "Error";
};

//Check command and blacklist words (No sql injection)
{
	if([_x, "_sql"] call BIS_fnc_inString) exitWith {
		diag_log "extDB3Handler.sqf: Error using a banned return keyword in the SQL query";
		_fuckADuck = true;
	};
}forEach _adminCommands;

//Mode 0
if(_mode isEqualTo 0) exitWith {

	//Check command and blacklist words (No sql injection)
	private _returnKeywords = ['SELECT', 'FROM', 'WHERE', 'GROUP BY', 'HAVING', 'ORDER BY', 'JOIN', 'UNION', 'DISTINCT', 'LIMIT', 'OFFSET', 'AS', 'COUNT', 'AVG', 'SUM', 'MAX', 'MIN', 'EXISTS', 'IN', 'LIKE', 'BETWEEN'];
	{
		if([_x, "_sql"] call BIS_fnc_inString) exitWith {
			diag_log "extDB3Handler.sqf: Error using a banned return keyword in an sender function";
			_fuckADuck = true;
		};
	}forEach _returnKeywords;

	if!(_fuckADuck) then {
		//Check what call type the developer wants and use the appiopriate command
		switch (_callType) do {
			case 0: {_result = "extDB3" callExtension format["0:SQL:%1", _sql];};
			case 1: {_result = "extDB3" callExtension format["1:SQL:%1", _sql];};
			case 2: {_result = "extDB3" callExtension format["2:SQL:%1", _sql];};
			default {diag_log "extDB3Handler.sqf: Error something went wrong. Log triggered at line 65"};
		};

		if(_result isNotEqualTo 0 && {_result isNotEqualTo 1}) then {

			diag_log "extDB3Handler.sqf: WARNING Database may have returned other data instead of the expected 1. Check logs for more info";
			diag_log format["SQL:%0 RESULT:%1",_sql, _result];

		} else { 

			if(_result isEqualTo 0) then {

				diag_log "extDB3Handler.sqf: Error";

			};
		};

		diag_log _result;
		missionNamespace setVariable["enclave_db_return",_result,_clientMachineID];
	}
};


//Mode 1
if(_mode isEqualTo 1) exitWith {

	//Check command and blacklist words (No sql injection)
	private _inputKeywords = ['INSERT', 'VALUES', 'UPDATE', 'SET', 'DELETE', 'INTO'];
	{
		if([_x, "_sql"] call BIS_fnc_inString) exitWith {
			diag_log "extDB3Handler.sqf: Error using a banned sender keyword in an return function";
			_fuckADuck = True;
		};
	}forEach _inputKeywords;

	if!(_fuckADuck) then {
		//Check what call type the developer wants and use the appiopriate command
		switch (_callType) do {
			case 0: {_result = "extDB3" callExtension format["0:SQL_Text1:%1", _sql];};
			case 2: {_result = "extDB3" callExtension format["2:SQL_Text1:%1", _sql];};
			default {diag_log "extDB3Handler.sqf: WARNING something went wrong. Log triggered at line 93"};
		};
		_result = parseSimpleArray _result;
		diag_log _result;
		//WHY WONT YOU WORK YOU DUMB FUCKING CUNT
		//EDIT: My dumb arse forgot to declare _result as a priv var at the start.... Goodbye 30 mins of my life :)
		//hint str _result;
		missionNamespace setVariable["enclave_db_return",_result,_clientMachineID];
	};
};