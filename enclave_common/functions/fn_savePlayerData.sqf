/*
	Author: Szymon "Stevio" Jankowski
	Date: 6/15/23

	Descrioption (Fuck you I can spell): Pretty much saves all player information to a extDB3 database. But checks first if the player exists or not

	note: You run this in SP and you deserve death 
*/

if(hasInterface && isServer) exitWith {
	diag_log "Player is the server....... Fuck him";
};


private _extDB3Return = [1,0,format ["SELECT sid FROM playerinfo WHERE sid=%1",getPlayerUID player]] call enclave_db_fnc_callExtDB3;

if(_extDB3Return == "") exitWith {
	[0,0,format ["INSERT INTO playerinfo VALUES (%1, %2, %3)",getPlayerUID player,random 99999999999,name player]] call enclave_db_fnc_callExtDB3;
	player setVariable["_characterID",[1,0,format ["SELECT cid FROM playerinfo WHERE sid=%1",getPlayerUID player]] call enclave_db_fnc_callExtDB3,false]; //God hates me cause of this
};