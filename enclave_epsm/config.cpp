class cfgPatches
{
	class enclave_epsm
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

#if __has_include("\Exosuit\config.bin")

class cfgSounds
{
	class WBK_punch_servo_1
	{
		name="WBK_punch_servo_1";
		sound[]=
		{
			"\enclave_epsm\sounds\punch_servo_1.ogg",
			10,
			1
		};
		titles[]={};
	};
	class WBK_punch_servo_2
	{
		name="WBK_punch_servo_2";
		sound[]=
		{
			"\enclave_epsm\sounds\punch_servo_2.ogg",
			10,
			1
		};
		titles[]={};
	};
}; // have to overwrite defaults, wbk didn't allow third party sounds

class CfgWeapons
{
	class ToolKit;
	class Battery_Full: ToolKit
	{
		author="Project Liberty Mod Team";
		displayName="Fusion Core";
		picture="\enclave_epsm\ui\fusion_core_ca.paa";
		model="enclave_props\case\case.p3d";
		class ItemInfo
		{
			mass=10;
			uniformModel="enclave_props\case\case.p3d";
			type=620;
			allowedSlots[]={801,701,901};
			scope=2;
		};
	};
};

class CfgVehicles
{
	class WebNiX_Assault_Exo;
	class WebNiX_AssaultJetpack_Exo;
	class enclave_epsm_assault : WebNiX_Assault_Exo
	{
		scope=2;
		scopeCurator = 2;
		author="Project Liberty Mod Team";
		displayName="Power Armor";
		maximumLoad=350;
		picture = "";
		model="\a3\weapons_f\empty.p3d";
		class TransportItems
		{
			// class _xx_Health_Syringe
			// {
			// 	name="Health_Syringe";
			// 	count=4;
			// };
			class _xx_Battery_Full
			{
				name="Battery_Full";
				count=3;
			};
		};
		WBK_JumpPack_FuelItem="Battery_Full";
		// WBK_JumpPack_Sound_UP="WBK_Boost_Up";
		// WBK_JumpPack_Sound_Front="WBK_Boost_Side";
		// Wbk_JumpPack_ParticleFunction="WBK_CreateExoJumParticles";
		WBK_AdvancedArmor_BatteryItem="Battery_Full";
	};
	class enclave_epsm_assault_jetpack : WebNiX_AssaultJetpack_Exo
	{
		scope=2;
		scopeCurator = 2;
		author="Project Liberty Mod Team";
		displayName="Power Armor (Rocket Boots)";
		maximumLoad=300;
		picture = "";
		model="\a3\weapons_f\empty.p3d";
		class TransportItems
		{
			// class _xx_Health_Syringe
			// {
			// 	name="Health_Syringe";
			// 	count=4;
			// };
			class _xx_Battery_Full
			{
				name="Battery_Full";
				count=3;
			};
		};
		WBK_JumpPack_FuelItem="Battery_Full";
		// WBK_JumpPack_Sound_UP="WBK_Boost_Up";
		// WBK_JumpPack_Sound_Front="WBK_Boost_Side";
		// Wbk_JumpPack_ParticleFunction="WBK_CreateExoJumParticles";
		WBK_AdvancedArmor_BatteryItem="Battery_Full";
	};
	// #include "cfgOverwrites.hpp"
};

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class addExosuit
            {
                file = "\enclave_epsm\functions\fn_addExosuit.sqf";
            };
            class addExosuits 
            {
                file = "\enclave_epsm\functions\fn_addExosuits.sqf";
				postInit = 1;
            };
			
        };
		
    };
	
};

#endif