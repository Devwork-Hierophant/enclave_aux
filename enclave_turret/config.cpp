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

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgSoundShaders
{
	class enclave_turret_closeShot_SoundShader
	{
		samples[] = {{ "enclave_turret\sounds\enclave_turret_fire_1.ogg", 1 }};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class enclave_turret_midShot_SoundShader
	{
		samples[] = {{ "enclave_turret\sounds\enclave_turret_fire_2.ogg", 1 }};
		volume = 1.0;
		range = 1800;
		rangeCurve = "closeShotCurve";
	};
	class enclave_turret_distShot_SoundShader
	{
		samples[] = {{ "enclave_turret\sounds\enclave_turret_fire_3.ogg", 1 }};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = { {0,0}, {50,0}, {300,1}, {1800,1} };
	};
};

class CfgSoundSets
{
	class enclave_turret_Shot_SoundSet
	{
		soundShaders[] = {"enclave_turret_closeShot_SoundShader", "enclave_turret_midShot_SoundShader", "enclave_turret_distShot_SoundShader", "HMG127mm_Closure_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class CfgSounds 
{
	sounds[] = {};
	class enclave_turret_killed 
	{
		name = "enclave_turret_killed";
		maxDistance = 200;
		sound[] = {"\enclave_turret\sounds\enclave_turret_killed.ogg", 10, 1.0, 200};
		titles[] = {0, ""};
	};
};

class cfgWeapons
{
	class HMG_M2_Mounted;

	class enclave_turret_hmg_base : HMG_M2_Mounted
	{
		#define RELOADTIME 0.17
		#define MAGAZINERELOADTIME 5.2
		displayName = "5.56 HMG";
		reloadTime = RELOADTIME;

		magazineReloadTime = MAGAZINERELOADTIME;
		reloadMagazineSound[] = {"enclave_turret\sounds\enclave_turret_reload_1.ogg",10,1,50};

		sounds[]=
		{
			"StandardSound"
		};

		class StandardSound
		{
			begin1[]=
			{
				"enclave_turret\sounds\enclave_turret_fire_1.ogg",
				1.5848932,
				1,
				2100
			};
			begin2[]=
			{
				"enclave_turret\sounds\enclave_turret_fire_2.ogg",
				1.5848932,
				1,
				2100
			};
			begin3[]=
			{
				"enclave_turret\sounds\enclave_turret_fire_3.ogg",
				1.5848932,
				1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				0.33000001,
				"begin2",
				0.33000001,
				"begin3",
				0.34
			};
			soundsetshot[]=
			{
				"enclave_turret_Shot_SoundSet"
			};
		};

		class manual : Mode_FullAuto
		{
			reloadTime = RELOADTIME;

            sounds[]=
            {
                "StandardSound"
            };

            class StandardSound
            {
                begin1[]=
                {
                    "enclave_turret\sounds\enclave_turret_fire_1.ogg",
                    1.5848932,
                    1,
                    2100
                };
                begin2[]=
                {
                    "enclave_turret\sounds\enclave_turret_fire_2.ogg",
                    1.5848932,
                    1,
                    2100
                };
                begin3[]=
                {
                    "enclave_turret\sounds\enclave_turret_fire_3.ogg",
                    1.5848932,
                    1,
                    2100
                };
                soundBegin[]=
                {
                    "begin1",
                    0.33000001,
                    "begin2",
                    0.33000001,
                    "begin3",
                    0.34
                };
                soundsetshot[]=
                {
                    "enclave_turret_Shot_SoundSet"
                };
            };
		};
		class close : manual {};
		class short : manual {};
		class medium : manual {};
		class far : manual {};
		// 	displayName = "5.56 HMG"
		// 	reloadTime = RELOADTIME;
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10,1,20};
		// magazines[] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
	};
	class enclave_turret_hmg : enclave_turret_hmg_base {};
};

class cfgVehicles
{
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
		class HitPoints;
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
		reloadMagazineSound[] = {"enclave_turret\sounds\enclave_turret_reload_1.ogg",10,1,50};
		model="enclave_turret\turret";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		armor = 80;
		hasGunner = 1;
		isPersonTurret = 2;
		InGunnerMayFire = 1;
		maxVerticalRotSpeed = 0.2;
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		armorStructural		= 0.4;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
		explosionShielding	= 0.04; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"enclave_turret\textures\turret_move.rvmat",
				"enclave_turret\textures\turret_move_damage.rvmat",
				"enclave_turret\textures\turret_move_destruct.rvmat"
			};
		};
		class Hitpoints: HitPoints
		{
			class HitHull
			{
				armor=5;
				name="hit_hull";
				visual="turret_move";
				radius=0.25;
				minimalHit=0.070000001;
				explosionShielding=1.5;
				depends="Total";
				passThrough=0.1;
				material=51;
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
				minElev=-10;
				maxElev=50;
				minTurn=-50;
				maxTurn=50;
				body="turret_move";
				gun="turret_up";
				animationSourceBody="turret_move";
				animationSourceGun="turret_up";
				turretAxis="turret_move_axis"; 						//Axis selectionname in MemoryLOD (for the turret axis, ie mouse left and right input). 
				gunAxis="turret_up_axis"; 						//Axis selectionname in MemoryLOD (for the gun axis, ie mouse up and down input). 
				weapons[]=
				{
					"enclave_turret_hmg"
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
					initAngleX=-10;
					minAngleX=-15;
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
					thermalMode[]={0,1,2};
				};
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
		// class EventHandlers
		// {
		// 	killed = "[_this select 0, ""enclave_turret_death""] call enclave_fnc_playSound";
		// };
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
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
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

class Extended_Init_EventHandlers 
{
    class enclave_turret 
	{
		class enclave_turret_init 
		{
			init = "[_this select 0] call enclave_fnc_turretInit";
		};
    };
};

class CfgFunctions 
{
	
    class enclave
    {
		
        class functions 
        {
			
            class turretInit 
            {
                file = "\enclave_turret\functions\fn_turretInit.sqf";
            };

            class turretKilled
            {
                file = "\enclave_turret\functions\fn_turretKilled.sqf";
            };
			
        };
		
    };
	
};