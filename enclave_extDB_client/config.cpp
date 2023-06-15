class cfgPatches
{
	class enclave_extDB_client
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

			class callExtDB3
			{
				file = "\enclave_extDB_client\functions\db\fn_callExtDB3.sqf";
			};

		};
    };
};