class cfgPatches
{
	class enclave_karma
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

class zen_context_menu_actions
{
	#include "cfgZEN.hpp"
};

class cfgSounds
{
	class enclave_karma_bad
	{
		name="enclave_karma_bad";
		sound[]=
		{
			"enclave_karma\sounds\enclave_karma_bad.ogg",
			1,
			1
		};
		titles[]={};
	};
	class enclave_karma_good
	{
		name="enclave_karma_good";
		sound[]=
		{
			"enclave_karma\sounds\enclave_karma_good.ogg",
			2,
			1
		};
		titles[]={};
	};
};

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class handleKarma
            {
                file = "\enclave_karma\functions\fn_handleKarma.sqf";
            };

            class handleKarmaIcon
            {
                file = "\enclave_karma\functions\fn_handleKarmaIcon.sqf";
            };

            class handleKill
            {
                file = "\enclave_karma\functions\fn_handleKill.sqf";
            };
			
            class karma
            {
                file = "\enclave_karma\functions\fn_karma.sqf";
            };

            class karmaDown
            {
                file = "\enclave_karma\functions\fn_karmaDown.sqf";
            };
			
            class karmaUp
            {
                file = "\enclave_karma\functions\fn_karmaUp.sqf";
            };
			
        };
		
    };
	
};

class Extended_Init_EventHandlers 
{
    class CAManBase 
	{
		class enclave_karma
		{
			init = "[(_this select 0)] call enclave_fnc_handleKill";
		};
    };
};