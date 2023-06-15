class cfgPatches
{
	class enclave_extDB_server
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[]={"enclave_common"};
	};
};

class CfgFunctions 
{
    class enclave_db 
	{
		class functions 
		{

			class extDB3Handler
			{
				file = "\enclave_extDB_server\functions\db\fn_extDB3Handler.sqf";
				postInit = 1;
			};

		};
    };
};