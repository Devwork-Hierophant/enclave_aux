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

class CfgVehicles
{
	class WebNiX_Assault_Exo;
	class enclave_epsm_assault : WebNiX_Assault_Exo
	{
		scope=2;
		author="Project Liberty Mod Team";
		displayName="Power Armor";
		maximumLoad=350;
		//model="\ExoSuit\WXExo.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		hiddenSelectionsMaterials[]={};
		// class TransportItems
		// {
		// 	class _xx_Health_Syringe
		// 	{
		// 		name="Health_Syringe";
		// 		count=4;
		// 	};
		// 	class _xx_Battery_Full
		// 	{
		// 		name="Battery_Full";
		// 		count=4;
		// 	};
		// };
		// WBK_JumpPack_isTrue="false";
		// WBK_JumpPack_IsUsingFuel="true";
		// WBK_JumpPack_FuelItem="Battery_Full";
		// WBK_JumpPack_Sound_UP="WBK_Boost_Up";
		// WBK_JumpPack_Sound_Front="WBK_Boost_Side";
		// Wbk_JumpPack_ParticleFunction="WBK_CreateExoJumParticles";
		// WBK_AdvancedArmor_isTrue="true";
		// WBK_AdvancedArmor_HasMelee="true";
		// WBK_AdvancedArmor_HasVisor="true";
		// WBK_AdvancedArmor_UseBattery="true";
		// WBK_AdvancedArmor_BatteryItem="Battery_Full";
	};
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