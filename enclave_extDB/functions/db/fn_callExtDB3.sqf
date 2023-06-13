if(missionNamespace getVariable ["extDB3INIT", false] isEqualTo False) exitWith {
	[0, 0] remoteExec ["enclave_db_fnc_extDB3Handler",2];
};