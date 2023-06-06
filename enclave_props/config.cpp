class CfgPatches
{
	class enclave_props
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
		requiredAddons[] = {"enclave_common"};
		name = "Enclave - Props";
		author = "Silence, Zelo";
	};
};

class cfgVehicleClasses
{
	class enclave_props_clutter
	{
		displayName = "Clutter";
	};
	class enclave_props_explosives
	{
		displayName = "Explosives";
	};
};

class CfgEditorCategories
{
	class enclave_props
	{
		displayName = "Enclave"; // Name visible in the list
	};
};

class cfgVehicles
{
	class Thing;
	class enclave_prop_base : Thing
	{
		destrType = "DestructNo";
		editorCategory = "enclave_props";
		vehicleClass="enclave_props_clutter";
	};

	class enclave_prop_bottle : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\bottle\bottle";
        hiddenSelections[] = {"bottle"};
        hiddenSelectionsTextures[] = {"enclave_props\bottle\textures\bottle_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\bottle\textures\bottle.rvmat"};
		displayName = "Bottle";
	};
	class enclave_prop_buffout : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\buffout\buffout";
        hiddenSelections[] = {"buffout"};
        hiddenSelectionsTextures[] = {"enclave_props\buffout\textures\buffout_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\buffout\textures\buffout.rvmat"};
		displayName = "Buffout";
	};
	class enclave_prop_case_1 : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\case\case";
        hiddenSelections[] = {"case"};
        hiddenSelectionsTextures[] = {"enclave_props\case\textures\case_1_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\case\textures\case_1.rvmat"};
		displayName = "Fixer";
	};
	class enclave_prop_case_2 : enclave_prop_case_1
	{
        hiddenSelectionsTextures[] = {"enclave_props\case\textures\case_2_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\case\textures\case_2.rvmat"};
		displayName = "Mentats";
	};
	// do grenade here
	class enclave_prop_cola_grenade : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\cola_grenade\cola_grenade";
        hiddenSelections[] = {"cola_grenade"};
        hiddenSelectionsTextures[] = {"enclave_props\cola_grenade\textures\cola_grenade_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\cola_grenade\textures\cola_grenade.rvmat"};
		displayName = "Cola Charge";
	};
	class enclave_prop_radx : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\radx\radx";
        hiddenSelections[] = {"radx"};
        hiddenSelectionsTextures[] = {"enclave_props\radx\textures\radx_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\radx\textures\radx.rvmat"};
		displayName = "RadX";
	};
	class enclave_prop_nuke : enclave_prop_base
	{
		scope = 2;
		scopeCurator = 2;
		model = "enclave_props\nuke\nuke";
        hiddenSelections[] = {"nuke"};
        hiddenSelectionsTextures[] = {"enclave_props\nuke\textures\nuke_co.paa"};
        hiddenSelectionsMaterials[] = {"enclave_props\nuke\textures\nuke.rvmat"};
		displayName = "Fatman";
	};
};

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class colaGrenade
            {
                file = "\enclave_props\functions\fn_colaGrenade.sqf";
            };
			
        };
		
    };
	
};

class Extended_Init_EventHandlers
{
    class enclave_prop_cola_grenade
	{
		class FreezeObject
		{
			init = "(_this select 0) enableSimulation false; [(_this select 0)] call enclave_fnc_colaGrenade";
		};
    };
};

// class cfgAmmo
// {
// 	class SatchelCharge_Remote_Ammo;
// 	class enclave_cola_explosive_ammo : SatchelCharge_Remote_Ammo
// 	{
// 		scope = 2;
// 		model = "enclave_props\cola_grenade\cola_grenade";
// 		mineModelDisabled = "enclave_props\cola_grenade\cola_grenade";
//         hiddenSelections[] = {"cola_grenade"};
//         hiddenSelectionsTextures[] = {"enclave_props\cola_grenade\textures\cola_grenade_co.paa"};
//         hiddenSelectionsMaterials[] = {"enclave_props\cola_grenade\textures\cola_grenade.rvmat"};
// 		defaultMagazine = "enclave_cola_explosive_mag";
// 	};
// };

// class cfgMagazines 
// {
// 	class SatchelCharge_Remote_Mag;
// 	class enclave_cola_explosive_mag: SatchelCharge_Remote_Mag
// 	{
// 		displayName="Cola Explosive Charge";
// 		displayNameShort="Cola Charge";
// 		model = "enclave_props\cola_grenade\cola_grenade";
// 		ammo="enclave_cola_explosive_ammo";
// 	};
// };

// class cfgWeapons
// {
// 	class Default;
// 	class Put: Default
// 	{
// 		class PutMuzzle;
// 		// class PipeBombMuzzle: PutMuzzle
// 		// {
// 		// 	magazines[]+=
// 		// 	{
// 		// 		"enclave_cola_explosive_mag"
// 		// 	};
// 		// };
// 		class enclave_cola_explosive_muzzle: PutMuzzle
// 		{
// 			autoreload=0;
// 			enableAttack=1;
// 			magazines[]=
// 			{
// 				"enclave_cola_explosive_mag"
// 			};
// 			displayName="Cola Explosive Charge";
// 			picture="\A3\Weapons_F\Data\clear_empty.paa";
// 			showToPlayer=0;
// 		};
// 	};
// };

