//Giggidy
class CfgPatches
{
	class enclave_common
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder"};
		name = "Enclave - Common";
		author = "Silence, Zelo, Stevio, Hierophant";
	};
};

class zen_context_menu_actions
{
	#include "cfgZEN.hpp"
};

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class global_syncAnim 
            {
                file = "\enclave_common\functions\fn_global_syncAnim.sqf";
            };

            class playSound
            {
                file = "\enclave_common\functions\fn_playSound.sqf";
            };
			class savePlayerData 
			{
				file = "\enclave_common\functions\fn_savePlayerData.sqf";
				postInit = 1;
			}
			
        };
		
    };
	
};