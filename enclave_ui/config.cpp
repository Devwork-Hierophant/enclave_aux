class cfgPatches
{
	class enclave_ui
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

#include "dialogs\defines.hpp"
#include "dialogs\enclave_character_creation.hpp"
#include "dialogs\enclave_character_skills.hpp"

// class CfgFunctions
// {

// 	#include "functions.hpp"

// };

// class CfgSounds 
// {
// 	sounds[] = {};
// 	class enclave_turret_killed 
// 	{
// 		name = "enclave_turret_killed";
// 		maxDistance = 200;
// 		sound[] = {"\enclave_turret\sounds\enclave_turret_killed.ogg", 10, 1.0, 200};
// 		titles[] = {0, ""};
// 	};
// };

// class Extended_Init_EventHandlers 
// {
//     class enclave_turret 
// 	{
// 		class enclave_turret_init 
// 		{
// 			init = "[_this select 0] call enclave_fnc_turretInit";
// 		};
//     };
// };

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class buttonAccept 
            {
                file = "\enclave_ui\functions\dialog\fn_buttonAccept.sqf";
            };

            class buttonReset
            {
                file = "\enclave_ui\functions\dialog\fn_buttonReset.sqf";
            };

            class character_creation
            {
                file = "\enclave_ui\functions\dialog\fn_character_creation.sqf";
            };

            class character_skill_level
            {
                file = "\enclave_ui\functions\dialog\fn_character_skill_level.sqf";
            };

            class character_skill_parseLevel
            {
                file = "\enclave_ui\functions\dialog\fn_character_skill_parseLevel.sqf";
            };

            class character_skill_updatePoints
            {
                file = "\enclave_ui\functions\dialog\fn_character_skill_updatePoints.sqf";
            };

            class character_skills
            {
                file = "\enclave_ui\functions\dialog\fn_character_skills.sqf";
            };

            class keyUp
            {
                file = "\enclave_ui\functions\dialog\fn_keyUp.sqf";
            };

            class nextDialog
            {
                file = "\enclave_ui\functions\dialog\fn_nextDialog.sqf";
            };

            class openDialog
            {
                file = "\enclave_ui\functions\dialog\fn_openDialog.sqf";
            };
			
        };
		
    };
	
};