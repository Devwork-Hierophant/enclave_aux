class cfgPatches
{
	class enclave_turret
	{
		units[] =
		{
			"enclave_turret"
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[]={"enclave_common"};
	};
};

class cfgVehicles
{
	class DefaultVehicleSystemsDisplayManagerLeft
	{
		class components;
	};
	class DefaultVehicleSystemsDisplayManagerRight
	{
		class components;
	};
	class CfgDestructPos
	{
		scope=1;
		class DelayedDestruction;
		class DelayedDestructionAmmo: DelayedDestruction
		{
			timeBeforeHiding="21";
			hideDuration="10";
		};
	};
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class enclave_turret_base: StaticMGWeapon
	{
		author="Silence/Zelo";
		_generalMacro="enclave_turret_base";
		scope=0;
		displayName="Automated Turret";
		class Armory
		{
			description="Automated Turret";
		};
		model="enclave_turret\turret";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-15;
				maxElev=15;
				minTurn=-360;
				maxTurn=360;
				body="turret_move";
				gun="turret_up";
				animationSourceBody="turret_move";
				animationSourceGun="turret_up";
				turretAxis="turret_move_axis"; 						//Axis selectionname in MemoryLOD (for the turret axis, ie mouse left and right input). 
				gunAxis="turret_up_axis"; 						//Axis selectionname in MemoryLOD (for the gun axis, ie mouse up and down input). 
				weapons[]=
				{
					"HMG_M2_Mounted"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag"
				};
				gunnerAction="RepeaterGunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				disableSoundAttenuation=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.125;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				//gunnerRightHandAnimName="Heavygun";
				//gunnerLeftHandAnimName="Heavygun";
				ejectDeadGunner=1;
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
	};
	class enclave_turret: enclave_turret_base
	{
		author="Silence/Zelo";
		editorPreview="";
		_generalMacro="enclave_turret";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_Soldier_F";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag"
				};
			};
		};
	};
};