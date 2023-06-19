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

// class cfgSounds
// {
// 	class enclave_sound
// 	{
// 		name="enclave_sound";
// 		sound[]=
// 		{
// 			"\enclave.ogg",
// 			10,
// 			1
// 		};
// 		titles[]={};
// 	};
// };

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class handleKill
            {
                file = "\enclave_karma\functions\fn_handleKill.sqf";
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