class cfgPatches
{
	class enclave_extDB
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
				file = "\enclave_extDB\functions\db\fn_extDB3Handler.sqf";
				postInit = 1;
			};
			class callExtDB3
			{
				file = "\enclave_extDB\functions\db\fn_callExtDB3.sqf";
			};

		};
    };
};