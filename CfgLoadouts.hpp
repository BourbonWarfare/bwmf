class CfgLoadouts {

class blu_f {
		//Radios
		#define TF_defaultWestBackpack  "tf_rt1523g_big_rhs"
		//Rifle
		#define WEST_RIFLE "CUP_arifle_Mk16_STD"
		#define WEST_RIFLE_MAG "CUP_30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		//GL Rifle
		#define WEST_GLRIFLE "CUP_arifle_Mk16_STD_EGLM"
		#define WEST_GLRIFLE_MAG "CUP_30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
		#define WEST_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:8"
		#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareWhite_F:2","UGL_FlareRed_F:2","UGL_FlareYellow_F:2","UGL_FlareGreen_F:2"
		//Carbine
		#define WEST_CARBINE "CUP_arifle_Mk16_CQC"
		#define WEST_CARBINE_MAG "CUP_30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		// AR
		#define WEST_AR "CUP_lmg_M249"
		#define WEST_AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:2"
		#define WEST_AR_MAG2 "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:2"
		// AT
		#define WEST_AT "rhs_weap_M136"
		#define WEST_AT_MAG "rhs_m136_mag"
		// MMG
		#define WEST_MMG "CUP_lmg_M240"
		#define WEST_MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
		// MAT
		#define WEST_MAT "launch_NLAW_F"
		#define WEST_MAT_MAG "NLAW_F:3"
		// SAM
		#define WEST_SAM "CUP_launch_FIM92Stinger"
		#define WEST_SAM_MAG "CUP_Stinger_M:2"
		// Sniper Rifle
		#define WEST_SNIPER "CUP_srifle_M110"
		#define WEST_SNIPER_MAG "CUP_20Rnd_762x51_B_M110:4"
		// Spotter Rifle
		#define WEST_SPOTTER "CUP_arifle_Mk17_STD"
		#define WEST_SPOTTER_MAG "CUP_20Rnd_762x51_B_SCAR:3"
		// SMG
		#define WEST_SMG "SMG_01_F"
		#define WEST_SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
		// Pistol
		#define WEST_PISTOL "hgun_Pistol_heavy_01_F"
		#define WEST_PISTOL_MAG "11Rnd_45ACP_Mag:2"
		
        class Car {
            TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Tank {
            TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Helicopter {
            TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };       
        class Plane {
            TransportMagazines[] = {};
        };     
        class Ship_F {
            TransportMagazines[] = {};
        };
        
        
		class B_Soldier_F // rifleman
		{
			uniform[] = {"rhs_uniform_cu_ocp"};  /// randomized
			vest[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Repair","rhsusf_iotv_ocp_Teamleader"}; /// randomized
			headgear[] = {"rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ESS_ocp"}; /// randomized
			backpack[] = {"rhsusf_assault_eagleaiii_ocp"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine","AGM_IR_Strobe_Item"};
			weapons[] = {WEST_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {WEST_RIFLE_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","NVgoggles"};
			attachments[] = {"optic_Holosight"};
		};
		class B_officer_F : B_Soldier_F // CO and DC
		{
			weapons[] = {WEST_GLRIFLE};
			vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
			headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
			backpack[] = {TF_defaultWestBackpack};
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,"rhs_mag_m67:1","MiniGrenade:1","rhs_mag_an_m8hc:2","rhs_mag_m18_green:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			backpackItems[] += {"AGM_item_key_west"};
			linkedItems[] += {"ItemGPS","Rangefinder"};
            items[] += {"AGM_MapTools"};
		};
		class B_Soldier_SL_F : B_Officer_F // SL
		{
			
		};
		class B_soldier_UAV_F : B_Soldier_F
		{
			backpack[] = {"B_rhsusf_B_BACKPACK"}; /// randomized
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
		};
		class B_Soldier_TL_F : B_Soldier_F // FTL
		{
			weapons[] = {WEST_GLRIFLE};
			headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,"rhs_mag_m18_green:2","rhs_mag_m67:1","MiniGrenade:1","rhs_mag_an_m8hc:2","rhs_mag_m67:1","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			backpackItems[] += {"AGM_item_key_west"};
			linkedItems[] += {"ItemGPS","Binocular"};
		};
		class B_Soldier_AR_F : B_Soldier_F // AR
		{
			vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
			weapons[] = {WEST_AR};
			magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,"rhs_mag_m67:1","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			
		};
		class B_Soldier_AAR_F : B_Soldier_F // AAR
		{
			
			backpackItems[] += {WEST_AR_MAG2};
			attachments[] = {"CUP_optic_ACOG"};	
			linkedItems[] += {"Binocular"};		
			
		};
		class B_Soldier_LAT_F : B_Soldier_F // RAT
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,WEST_AT_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			launchers[] = {WEST_AT}; /// randomized
			
		};
		class B_medic_F : B_Soldier_F // Medic
		{
			vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"rhs_mag_an_m8hc:6"};
			backpackItems[] = {"AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"};
			
		};
		class B_support_MG_F : B_Soldier_F // MMG
		{
			weapons[] = {WEST_MMG};
			magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,"rhs_mag_m67:1","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			
		};
		class B_Soldier_A_F : B_Soldier_F // MMG Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_MMG_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		class B_soldier_AT_F : B_Soldier_F // MAT Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			launchers[] = {WEST_MAT}; /// randomized
			backpackItems[] = {WEST_MAT_MAG};
			
		};
		class B_Soldier_AAT_F : B_Soldier_F // MAT Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_MAT_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		class B_soldier_AA_F : B_Soldier_F // SAM Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			launchers[] = {WEST_SAM}; /// randomized
			backpackItems[] = {WEST_SAM_MAG};
			
		};
		class B_Soldier_AAA_F : B_Soldier_F // SAM Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_SAM_MAG};	
			linkedItems[] += {"Rangefinder"};		
			
		};
		class B_support_Mort_F : B_Soldier_F // Mortar Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","MiniGrenade:1","rhs_mag_an_m8hc:2"};
			backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
			
		};
		class B_support_AMort_F : B_Soldier_F // Assistant Mortar
		{
			
			backpack[] = {"B_Mortar_01_support_F"}; /// randomized
			linkedItems[] += {"Rangefinder"};				
			
		};
		class B_spotter_F // Spotter
		{
			uniform[] = {"U_B_GhillieSuit"};  /// randomized
			vest[] = {"rhsusf_iotv_ocp"}; /// randomized
			weapons[] = {WEST_SPOTTER}; /// randomized
			magazines[] = {WEST_SPOTTER_MAG,"rhs_mag_an_m8hc:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","LaserDesignator"};
			attachments[] = {"optic_dms"};
			
		};
		class B_sniper_F // Sniper
		{
			uniform[] = {"U_B_GhillieSuit"};  /// randomized
			vest[] = {"rhsusf_iotv_ocp"}; /// randomized
			weapons[] = {WEST_SNIPER}; /// randomized
			magazines[] = {WEST_SNIPER_MAG,"rhs_mag_an_m8hc:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			attachments[] = {"optic_dms"};
		};
		class B_Helipilot_F // Pilot
		{
			uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
			weapons[] = {WEST_SMG}; /// randomized
			magazines[] = {WEST_SMG_MAG,"rhs_mag_an_m8hc:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","NVgoggles"};
		};
		class B_helicrew_F : B_Helipilot_F // Pilot
		{
			
		};
		class B_crew_F // Crew
		{
			uniform[] = {"rhs_uniform_cu_ocp"};  // randomized
			vest[] = {"rhsusf_iotv_ocp"}; // randomized
			headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized			
			weapons[] = {WEST_CARBINE}; /// randomized
			magazines[] = {WEST_CARBINE_MAG,"rhs_mag_an_m8hc:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			backpackItems[] += {"AGM_item_key_west"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			
		};
		class B_soldier_repair_F : B_crew_F // Repair Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit"};
			vest[] = {"rhsusf_iotv_ocp_repair"}; /// randomized
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};

		};
		class B_soldier_exp_F : B_soldier_repair_F // Explosive Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
		};
		class B_engineer_F : B_soldier_repair_F // Mine Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {WEST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
		};
		
	};
class ind_f {
		//Radios
		#define TF_defaultIndBackpack  "tf_anprc155_coyote"
		//Rifle
		#define IND_RIFLE "RH_Hk416"
		#define IND_RIFLE_MAG "RH_30Rnd_556x45_M855A1:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		//GL Rifle
		#define IND_GLRIFLE "rhs_m4_m320"
		#define IND_GLRIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		#define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
		#define IND_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:14"
		#define IND_GLRIFLE_MAG_FLARE "UGL_FlareWhite_F:0","UGL_FlareRed_F:1","UGL_FlareYellow_F:0","UGL_FlareGreen_F:2"
		//Carbine
		#define IND_CARBINE "RH_Hk416s"
		#define IND_CARBINE_MAG "RH_30Rnd_556x45_M855A1:8","30Rnd_556x45_Stanag_Tracer_Red:2"
		// AR
		#define IND_AR "RH_M27IAR"
		#define IND_AR_MAG "RH_60Rnd_556x45_Mk262:12"
		#define IND_AR_MAG2 "RH_60Rnd_556x45_Mk262:5"
		// AT
		#define IND_AT "rhs_weap_M136"
		#define IND_AT_MAG "rhs_m136_mag"
		// MMG
		#define IND_MMG "rhs_weap_m240B"
		#define IND_MMG_MAG "rhsusf_100Rnd_762x51:5"
		// MAT
		#define IND_MAT "CUP_launch_Mk153Mod0"
		#define IND_MAT_MAG "CUP_SMAW_HEDP_M:2","CUP_SMAW_HEAA_M:1"
		// SAM
		#define IND_SAM "CUP_launch_FIM92Stinger"
		#define IND_SAM_MAG "CUP_Stinger_M:2"
		// Sniper Rifle
		#define IND_SNIPER "RH_Mk11"
		#define IND_SNIPER_MAG "RH_20Rnd_762x51_M80A1:4"
		// Spotter Rifle
		#define IND_SPOTTER "RH_Mk11"
		#define IND_SPOTTER_MAG "RH_20Rnd_762x51_M80A1:4"
		// SMG
		#define IND_SMG "RH_Hk416c"
		#define IND_SMG_MAG "RH_30Rnd_556x45_M855A1:6"
		// Pistol
		#define IND_PISTOL "CUP_hgun_Phantom"
		#define IND_PISTOL_MAG "CUP_18Rnd_9x19_Phantom:2"
		
		class Car {
            TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Tank {
            TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Helicopter {
            TransportMagazines[] = {};
        };       
        class Plane {
            TransportMagazines[] = {};
        };     
        class Ship_F {
            TransportMagazines[] = {};
        };

		class I_Soldier_F // rifleman
		{
			uniform[] = {"MNP_CombatUniform_Ukrainian"};  /// randomized
			vest[] = {"MNP_Vest_UKR_A","MNP_Vest_UKR_A","MNP_Vest_UKR_B"}; /// randomized
			headgear[] = {"MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_MC_UKR"}; /// randomized
			backpack[] = {"MNP_B_RU1_FP"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine","AGM_IR_Strobe_Item"};
			weapons[] = {IND_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {IND_RIFLE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};
			attachments[] = {"rhsusf_acc_compm4"};
		};
		class I_officer_F : I_Soldier_F // CO and DC
		{
			weapons[] = {IND_GLRIFLE};
			backpack[] = {TF_defaultIndBackpack};
			magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,IND_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {IND_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS","Binocular"};
			attachments[] = {"rhsusf_acc_compm4"};
			backpackItems[] += {"AGM_item_key_indp"};
            items[] += {"AGM_MapTools"};
		};
		class I_Soldier_SL_F : I_Officer_F // SL
		{
			
		};
			
		class I_soldier_UAV_F : I_Soldier_F
		{
			backpack[] = {"I_UAV_01_backpack_F"}; /// randomized
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] += {"I_uavterminal"};
		};
		class I_Soldier_TL_F : I_Soldier_F // FTL
		{
			weapons[] = {IND_GLRIFLE};
			headgear[] = {"H_HelmetB_plain_mcamo","MNP_Helmet_OD"}; /// randomized
			magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_GLRIFLE_MAG_FLARE,"HandGrenade:1","MiniGrenade:1","SmokeShell:2","HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			linkedItems[] += {"ItemGPS","Binocular"};
			backpackItems[] += {"AGM_item_key_indp"};
			attachments[] = {"rhsusf_acc_compm4"};
		};
		class I_Soldier_AR_F : I_Soldier_F // AR
		{
			weapons[] = {IND_AR};
			magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {IND_PISTOL}; /// randomized
			attachments[] = {"rhsusf_acc_compm4"};
			
		};
		class I_Soldier_AAR_F : I_Soldier_F // AAR
		{
			
			backpackItems[] += {IND_AR_MAG2};
			attachments[] = {"RH_ta01nsn"};	
			linkeditems[] += {"Binocular"};				
			
		};
		class I_Soldier_LAT_F : I_Soldier_F // RAT
		{
			weapons[] = {IND_CARBINE};
			magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {IND_AT}; /// randomized
			attachments[] = {"rhsusf_acc_compm4"};
			
			
		};
		class I_medic_F : I_Soldier_F // Medic
		{
			weapons[] = {IND_CARBINE};
			magazines[] = {IND_CARBINE_MAG,"smokeShell:6"};
			backpack[] = {"MNP_B_RU1_CA"};
			backpackItems[] = {"AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"};
			
		};
		class I_support_MG_F : I_Soldier_F // MMG
		{
			weapons[] = {IND_MMG};
			backpack[] = {"MNP_B_RU1_CA"}; /// randomized
			magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {IND_PISTOL}; /// randomized
			
		};
		class I_Soldier_A_F : I_Soldier_F // MMG Spotter/Ammo Bearer
		{
			backpack[] = {"MNP_B_RU1_CA"}; /// randomized
			backpackItems[] = {IND_MMG_MAG};
			linkeditems[] += {"Rangefinder"};			
			
		};
		class I_soldier_AT_F : I_Soldier_F // MAT Gunner
		{
			weapons[] = {IND_CARBINE};
			backpack[] = {"MNP_B_RU1_CA"};
			magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {IND_MAT}; /// randomized
			backpackItems[] = {IND_MAT_MAG};
			
		};
		class I_Soldier_AAT_F : I_Soldier_F // MAT Spotter/Ammo Bearer
		{
			backpack[] = {"MNP_B_RU1_CA"};
			backpackItems[] = {IND_MAT_MAG};
			linkeditems[] += {"Rangefinder"};			
			
		};
		class I_soldier_AA_F : I_Soldier_F // SAM Gunner
		{
			weapons[] = {IND_CARBINE};
			backpack[] = {"MNP_B_RU1_CA"};
			magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {IND_SAM}; /// randomized
			backpackItems[] = {IND_SAM_MAG};
			
		};
		class I_Soldier_AAA_F : I_Soldier_F // SAM Spotter/Ammo Bearer
		{
			
			backpackItems[] = {IND_SAM_MAG};	
			linkeditems[] += {"Rangefinder"};	
			backpack[] = {"MNP_B_RU1_CA"};			
			
		};
		class I_support_Mort_F : I_Soldier_F // Mortar Gunner
		{
			weapons[] = {IND_CARBINE};
			magazines[] = {IND_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
			
		};
		class I_support_AMort_F : I_Soldier_F // Assistant Mortar
		{
			
			backpack[] = {"I_Mortar_01_support_F"}; /// randomized
			linkeditems[] += {"Rangefinder"};				
			
		};
		class I_spotter_F // Spotter
		{
			uniform[] = {"U_BG_Guerrilla_6_1"};  /// randomized
			weapons[] = {IND_SPOTTER}; /// randomized
			magazines[] = {IND_SPOTTER_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","LaserDesignator"};
			attachments[] = {"RH_eotech553mag"};
			
		};
		class I_sniper_F // Sniper
		{
			uniform[] = {"U_BG_Guerrilla_6_1"};  /// randomized
			weapons[] = {IND_SNIPER}; /// randomized
			magazines[] = {IND_SNIPER_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			attachments[] = {"optic_dms"};
		};
		class I_Helipilot_F // Pilot
		{
			uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
			weapons[] = {WEST_SMG}; /// randomized
			magazines[] = {WEST_SMG_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
		};
		class I_crew_F // Crew
		{
			vest[] = {"LOP_V_Carrier_WDL"}; // randomized
			headgear[] = {"rhsusf_ach_bare"}; /// randomized			
			weapons[] = {IND_SMG}; /// randomized
			magazines[] = {IND_CARBINE_MAG,"SmokeShell:2"};
			backpackItems[] += {"AGM_item_key_indp"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			
		};
		class I_Soldier_repair_F : I_crew_F // Repair Specialist
		{
			uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
			backpack[] = {"B_Carryall_oli"};
			backpackItems[] = {"Toolkit"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};

		};
		class I_soldier_exp_F : I_soldier_repair_F // Explosive Specialist
		{
			uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
			backpack[] = {"B_Carryall_oli"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
		};
		class I_engineer_F : I_soldier_repair_F // Explosive Specialist
		{
			uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
			backpack[] = {"B_Carryall_oli"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
		};
		
	};
class opf_f {
		//Radios
		#define TF_defaultEastBackpack  "tf_mr3000_rhs"
		//Rifle
		#define EAST_RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m"
		#define EAST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		//GL Rifle
		#define EAST_GLRIFLE "rhs_weap_ak74m_gp25"
		#define EAST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		#define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Green:1","rhs_GRD40_Red:2"
		#define EAST_GLRIFLE_MAG_HE "rhs_VOG25:10"
		#define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_white:2","rhs_VG40OP_red:2","rhs_VG40OP_white:2","rhs_VG40OP_green:2"
		//Carbine
		#define EAST_CARBINE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m"
		#define EAST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		// AR
		#define EAST_AR "CUP_arifle_RPK74"
		#define EAST_AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:7"
		#define EAST_AR_MAG2 "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:3"
		// AT
		#define EAST_AT "rhs_weap_rshg2"
		#define EAST_AT_MAG "rhs_rshg2_mag"
		// MMG
		#define EAST_MMG "rhs_weap_pkp"
		#define EAST_MMG_MAG "rhs_100Rnd_762x54mmR:5"
		// MAT
		#define EAST_MAT "rhs_weap_rpg7"
		#define EAST_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_TBG7V_mag:1"
		// SAM
		#define EAST_SAM "CUP_launch_FIM92Stinger"
		#define EAST_SAM_MAG "CUP_Stinger_M:2"
		// Sniper Rifle
		#define EAST_SNIPER "rhs_weap_svdp_wd"
		#define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:6"
		// Spotter Rifle
		#define EAST_SPOTTER "rhs_weap_svdp_wd"
		#define EAST_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:4"
		// SMG
		#define EAST_SMG "rhs_weap_ak74m_folded"
		#define EAST_SMG_MAG "rhs_30Rnd_545x39_AK:5"
		// Pistol
		#define EAST_PISTOL "hgun_Pistol_heavy_01_F"
		#define EAST_PISTOL_MAG "11Rnd_45ACP_Mag:2"
		
		class Car {
            TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Tank {
            TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Helicopter {
            TransportMagazines[] = {};
        };       
        class Plane {
            TransportMagazines[] = {};
        };     
        class Ship_F {
            TransportMagazines[] = {};
        };

		class O_Soldier_F // rifleman
		{
			uniform[] = {"MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_B"};  /// randomized
			vest[] = {"MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RU_T","MNP_Vest_RU_T2","V_I_G_resistanceLeader_F"}; /// randomized
			headgear[] = {"rhs_6b27m_green_bala","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b28_green_bala"}; /// randomized
			backpack[] = {"B_AssaultPack_rgr","MNP_B_RU2_CA","MNP_B_RU2_FP","MNP_B_RU2_FP","rhs_sidor","rhs_assault_umbts"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine","AGM_IR_Strobe_Item"};
			weapons[] = {EAST_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {EAST_RIFLE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};
			attachments[] = {"rhs_acc_1p63"};
		};
		class O_officer_F : O_Soldier_F // CO and DC
		{
			weapons[] = {EAST_GLRIFLE};
			//vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
			//headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
			backpack[] = {TF_defaultEastBackpack};
			magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_FLARE,EAST_GLRIFLE_MAG_SMOKE,EAST_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {EAST_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS","Binocular"};
				backpackItems[] += {"AGM_item_key_east"};
            items[] += {"AGM_MapTools"};
		};
		class O_soldier_SL_F : O_Officer_F // SL
		{
			
		};
		class O_soldier_GL_F : O_Officer_F // SL
		{
			
		};
		class O_soldier_UAV_F : O_Soldier_F
		{
			backpack[] = {"O_UAV_01_backpack_F"}; /// randomized
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] += {"O_uavterminal"};
		};
		class O_Soldier_TL_F : O_Soldier_F // FTL
		{
			weapons[] = {EAST_GLRIFLE};
			//headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
			magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,"HandGrenade:1","MiniGrenade:1","SmokeShell:2","HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			linkedItems[] += {"ItemGPS","Binocular"};
				backpackItems[] += {"AGM_item_key_east"};
		};
		class O_Soldier_AR_F : O_Soldier_F // AR
		{
			//vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
			weapons[] = {EAST_AR};
			magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {EAST_PISTOL}; /// randomized
			attachments[] = {"CUP_optic_Kobra"};
			
		};
		class O_Soldier_AAR_F : O_Soldier_F // AAR
		{
			
			backpackItems[] += {EAST_AR_MAG2};
			attachments[] = {"rhs_acc_1p29"};	
			linkedItems[] += {"Binocular"};		
			
		};
		class O_Soldier_LAT_F : O_Soldier_F // RAT
		{
			weapons[] = {EAST_CARBINE};
			magazines[] = {EAST_CARBINE_MAG,EAST_AT_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {EAST_AT}; /// randomized
			
		};
		class O_medic_F : O_Soldier_F // Medic
		{
			//vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
			weapons[] = {EAST_CARBINE};
			magazines[] = {EAST_CARBINE_MAG,"smokeShell:6"};
			backpackItems[] = {"AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"};
			
		};
		class O_support_MG_F : O_Soldier_F // MMG
		{
			weapons[] = {EAST_MMG};
			magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {EAST_PISTOL}; /// randomized
			
		};
		class O_Soldier_A_F : O_Soldier_F // MMG Spotter/Ammo Bearer
		{
			
			backpackItems[] = {EAST_MMG_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		class O_soldier_AT_F : O_Soldier_F // MAT Gunner
		{
			weapons[] = {EAST_CARBINE};
			backpack[] = {"rhs_rpg"};
			magazines[] = {EAST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {EAST_MAT}; /// randomized
			backpackItems[] = {EAST_MAT_MAG};
			attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v"};
			
		};
		class O_Soldier_AAT_F : O_Soldier_F // MAT Spotter/Ammo Bearer
		{
			backpack[] = {"rhs_rpg"};
			backpackItems[] = {EAST_MAT_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		class O_soldier_AA_F : O_Soldier_F // SAM Gunner
		{
			weapons[] = {EAST_CARBINE};
			magazines[] = {EAST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {EAST_SAM}; /// randomized
			backpackItems[] = {EAST_SAM_MAG};
			
		};
		class O_Soldier_AAA_F : O_Soldier_F // SAM Spotter/Ammo Bearer
		{
			
			backpackItems[] = {EAST_SAM_MAG};	
			linkedItems[] += {"Rangefinder"};		
			
		};
		class O_support_Mort_F : O_Soldier_F // Mortar Gunner
		{
			weapons[] = {EAST_CARBINE};
			magazines[] = {EAST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			backpack[] = {"O_Mortar_01_weapon_F"}; /// randomized
			
		};
		class O_support_AMort_F : O_Soldier_F // Assistant Mortar
		{
			
			backpack[] = {"O_Mortar_01_support_F"}; /// randomized
			linkedItems[] += {"Rangefinder"};				
			
		};
		class O_spotter_F // Spotter
		{
			uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
			vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized
			weapons[] = {EAST_SPOTTER}; /// randomized
			magazines[] = {EAST_SPOTTER_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","LaserDesignator"};
			attachments[] = {"optic_dms"};
			
		};
		class O_sniper_F // Sniper
		{
			uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
			vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized
			weapons[] = {EAST_SNIPER}; /// randomized
			magazines[] = {EAST_SNIPER_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			attachments[] = {"optic_dms"};
		};
		class O_Helipilot_F // Pilot
		{
			uniform[] = {"U_O_PilotCoveralls"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
			weapons[] = {EAST_SMG}; /// randomized
			magazines[] = {EAST_SMG_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","NVgoggles"};
		};
		class O_crew_F // Crew
		{
			headgear[] = {"rhs_tsh4_ess_bala"}; /// randomized	
			uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
			vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized			
			weapons[] = {EAST_CARBINE}; /// randomized
			magazines[] = {EAST_CARBINE_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			
		};
		class O_soldier_repair_F : O_crew_F // Repair Specialist
		{
			
			backpack[] = {"O_Carryall_mcamo"};
			backpackItems[] = {"Toolkit"};
			vest[] = {"rhsusf_iotv_ocp_repair"}; /// randomized
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};

		};
		class O_soldier_exp_F : O_soldier_repair_F // Explosive Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
		};
		class O_engineer_F : O_soldier_repair_F // Explosive Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {EAST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
		};
		
	};
class rhs_faction_msv {
		//Radios
		#define TF_defaultMSVBackpack  "tf_mr3000_rhs"
		//Rifle
		#define MSV_RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_plummag"
		#define MSV_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		//GL Rifle
		#define MSV_GLRIFLE "rhs_weap_ak74m_gp25"
		#define MSV_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		#define MSV_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Green:1","rhs_GRD40_Red:2"
		#define MSV_GLRIFLE_MAG_HE "rhs_VOG25:10"
		#define MSV_GLRIFLE_MAG_FLARE "rhs_VG40OP_white:2","rhs_VG40OP_red:2","rhs_VG40OP_white:2","rhs_VG40OP_green:2"
		//Carbine
		#define MSV_CARBINE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_plummag"
		#define MSV_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
		// AR
		#define MSV_AR "CUP_arifle_RPK74"
		#define MSV_AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:7"
		#define MSV_AR_MAG2 "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:3"
		// SF Rifle
		#define MSV_SFR "hlc_rifle_aek971"
		#define MSV_SFR_MAG "hlc_30Rnd_545x39_S_AK:6"
		// AT
		#define MSV_AT "rhs_weap_rpg7"
		#define MSV_AT_MAG "rhs_rpg7_PG7VL_mag:2","rhs_rpg7_OG7V_mag:2"
		// MMG
		#define MSV_MMG "rhs_weap_pkp"
		#define MSV_MMG_MAG "rhs_100Rnd_762x54mmR:5"
		// MAT
		#define MSV_MAT "rhs_weap_rpg7"
		#define MSV_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_TBG7V_mag:1"
		// LAT
		#define MSV_LAT "rhs_weap_rpg26"
		#define MSV_LAT_MAG "rhs_rpg26_mag"
		// SAM
		#define MSV_SAM "rhs_weap_igla"
		#define MSV_SAM_MAG "rhs_mag_9k38_rocket:2"
		// Sniper Rifle
		#define MSV_SNIPER "CUP_srifle_ksvk"
		#define MSV_SNIPER_MAG "CUP_5Rnd_127x108_KSVK_M:6"
		// Spotter Rifle
		#define MSV_SPOTTER "rhs_weap_svdp_wd"
		#define MSV_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
		// SMG
		#define MSV_SMG "rhs_weap_ak74m_folded"
		#define MSV_SMG_MAG "rhs_30Rnd_545x39_AK:6"
		// Pistol
		#define MSV_PISTOL "rhs_weap_pya"
		#define MSV_PISTOL_MAG "rhs_mag_9x19_17:2"
		
		class Car {
            TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG,MSV_LAT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Tank {
            TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG,MSV_LAT_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };      
        class Helicopter {
            TransportMagazines[] = {};
        };       
        class Plane {
            TransportMagazines[] = {};
        };     
        class Ship_F {
            TransportMagazines[] = {};
        };

		class rhs_msv_rifleman // rifleman
		{
			uniform[] = {"rhs_uniform_flora","rhs_uniform_flora_patchless_alt"};  /// randomized
			vest[] = {"rhs_6b23_6sh92_vog","rhs_6b23_6sh92_vog", "rhs_6b23_6sh92_vog_headset","rhs_6b23_engineer","rhs_6b23_rifleman","rhs_6b23_sniper"}; /// randomized
			headgear[] = {"rhs_6b27m_green","rhs_6b26_ess_bala","rhs_6b26","rhs_6b27m_green_ess_bala","rhs_6b26_ess","rhs_6b26_bala","rhs_6b27m_green_ess","rhs_6b27m","rhs_6b27m_bala","rhs_6b27m_ess","rhs_6b28_green","rhs_6b28_green_ess","rhs_6b28_flora_ess","rhs_6b28_flora_ess_bala"}; /// randomized
			backpack[] = {"rhs_sidor"}; /// randomized
			backpackItems[] = {"AGM_Bandage:4","AGM_Morphine","AGM_IR_Strobe_Item"};
			weapons[] = {MSV_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {MSV_RIFLE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","NVgoggles"};
			attachments[] = {"rhs_acc_1p63", "rhs_acc_pkas"};
		};
		class rhs_msv_officer : rhs_msv_rifleman // CO and DC
		{
			weapons[] = {MSV_GLRIFLE};
			vest[] = {"rhs_6b23_6sh92_vog_headset"}; /// randomized
			headgear[] = {"rhs_6b27m_green_ess_bala"}; /// randomized
			backpack[] = {TF_defaultMSVBackpack};
			magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,MSV_GLRIFLE_MAG_FLARE,MSV_PISTOL_MAG,"HandGrenade:2","SmokeShell:2"};
			handguns[] = {MSV_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS","Rangefinder"};
				backpackItems[] += {"AGM_item_key_east"};
            items[] += {"AGM_MapTools"};
		};
		class rhs_msv_sergeant : rhs_msv_Officer // SL
		{
			
		};
		
		class rhs_msv_junior_sergeant : rhs_msv_rifleman // FTL
		{
			weapons[] = {MSV_GLRIFLE};
			headgear[] = {"rhs_6b27m_green_bala"}; /// randomized
			magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,MSV_GLRIFLE_MAG_FLARE,"HandGrenade:1","MiniGrenade:1","SmokeShell:2","HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			linkedItems[] += {"ItemGPS","Binocular"};
				backpackItems[] += {"AGM_item_key_east"};
		};
		class rhs_msv_machinegunner : rhs_msv_rifleman // AR
		{
			vest[] = {"rhs_6b23_6sh92_radio"}; /// randomized
			weapons[] = {MSV_AR};
			magazines[] = {MSV_AR_MAG,MSV_PISTOL_MAG,"HandGrenade:2","SmokeShell:2"};
			handguns[] = {MSV_PISTOL}; /// randomized
			
		};
		class rhs_msv_machinegunner_assistant : rhs_msv_rifleman // AAR
		{
			
			backpackItems[] += {MSV_AR_MAG2};
			linkedItems[] += {"Binocular"};		
			
		};
		class rhs_msv_at : rhs_msv_rifleman // RAT
		{
			weapons[] = {MSV_CARBINE};
			magazines[] = {MSV_CARBINE_MAG,MSV_AT_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {MSV_AT}; /// randomized
			backpack[] = {"rhs_rpg"};
			
		};
		
		 class rhs_msv_strelok_rpg_assist : rhs_msv_rifleman // Assistant Grenadier
		{

		backpackItems[] = {MSV_AT_MAG};
		backpack[] = {"rhs_rpg"};
		linkedItems[] += {"Binocular"};
		
		};
		class rhs_msv_medic : rhs_msv_rifleman // Medic
		{
			vest[] = {"rhs_6b23_medic"}; /// randomized
			weapons[] = {MSV_CARBINE};
			magazines[] = {MSV_CARBINE_MAG,"smokeShell:6"};
			backpackItems[] = {"AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"};
			
		};
		class rhs_msv_mmg : rhs_msv_rifleman // MMG
		{
			weapons[] = {MSV_MMG};
			vest[] = {"rhs_6b23_6sh92_headset"};
			magazines[] = {MSV_MMG_MAG,MSV_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {MSV_PISTOL}; /// randomized
			
		};
		class rhs_msv_mmgag : rhs_msv_rifleman // MMG Spotter/Ammo Bearer
		{
			
			backpackItems[] = {MSV_MMG_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		class rhs_msv_mat : rhs_msv_rifleman // MAT Gunner
		{
			weapons[] = {MSV_CARBINE};
			magazines[] = {MSV_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {MSV_MAT}; /// randomized
			backpackItems[] = {MSV_MAT_MAG};
			attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v"};
		};
		class rhs_msv_matag : rhs_msv_rifleman // MAT Spotter/Ammo Bearer
		{
			
			backpackItems[] = {MSV_MAT_MAG};
			linkedItems[] += {"Rangefinder"};			
			
		};
		// class rhs_msv_aa : rhs_msv_rifleman // SAM Gunner
		// {
		// 	weapons[] = {MSV_CARBINE};
		// 	magazines[] = {MSV_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
		// 	launchers[] = {MSV_SAM}; /// randomized
		// 	backpackItems[] = {MSV_SAM_MAG};
			
		// };
		// class rhs_msv_aaag : rhs_msv_rifleman // SAM Spotter/Ammo Bearer
		// {
			
		// 	backpackItems[] = {MSV_SAM_MAG};	
		// 	linkedItems[] += {"Rangefinder"};		
			
		// };
		class rhs_msv_support_Mort : rhs_msv_rifleman // Mortar Gunner
		{
			weapons[] = {MSV_CARBINE};
			magazines[] = {MSV_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			backpack[] = {"rhs_msv_Mortar_01_weapon_F"}; /// randomized
			
		};
		class rhs_msv_support_AMort : rhs_msv_rifleman // Assistant Mortar
		{
			
			backpack[] = {"rhs_msv_Mortar_01_support_F"}; /// randomized
			linkedItems[] += {"Rangefinder"};				
			
		};
		class rhs_msv_sfl // Spetnaz Leader
		{
			uniform[] = {"rhs_uniform_vdv_mflora"};  /// randomized
			backpack[] = {"rhs_assault_umbts"};
			vest[] = {"rhs_6b23_ML_6sh92_vog_headset"}; /// randomized
			weapons[] = {MSV_SFR}; /// randomized
			magazines[] = {MSV_SFR_MAG,"SmokeShell:2","DemoCharge_Remote_Mag:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","LaserDesignator","AGM_DefusalKit","AGM_Clacker"};
			attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
		};
		class rhs_msv_sf // Spetnaz Team
		{
			uniform[] = {"rhs_uniform_vdv_mflora"};  /// randomized
			backpack[] = {"rhs_assault_umbts"};
			vest[] = {"rhs_6b23_ML_6sh92_vog"}; /// randomized
			weapons[] = {MSV_SFR}; /// randomized
			magazines[] = {MSV_SFR_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","Rangefinder","AGM_DefusalKit","AGM_Clacker"};
			attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
		};
		class rhs_msv_marksman // Marksman
		{
			uniform[] = {"rhs_uniform_flora"};  /// randomized
			vest[] = {"rhs_6b23_sniper"}; /// randomized
			weapons[] = {MSV_SPOTTER}; /// randomized
			magazines[] = {MSV_SPOTTER_MAG,"SmokeShell:2"};
			backpack[] = {"rhs_sidor"}; /// randomized
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			attachments[] = {"rhs_acc_pso1m2"};
		};
		class rhs_pilot_transport_heli // Pilot
		{
			uniform[] = {"rhs_uniform_df15"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"rhs_zsh7a"}; /// randomized
			weapons[] = {MSV_SMG}; /// randomized
			magazines[] = {MSV_SMG_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","NVgoggles"};
		};
		class rhs_msv_crew // Crew
		{
			uniform[] = {"rhs_uniform_flora"};  // randomized
			vest[] = {"rhs_6b23_engineer"}; // randomized
			headgear[] = {"rhs_tsh4_ess_bala"}; /// randomized			
			weapons[] = {MSV_CARBINE}; /// randomized
			magazines[] = {MSV_CARBINE_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			backpackItems[] += {"AGM_item_key_east"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			
		};
		class rhs_msv_repair : rhs_msv_crew // Repair Specialist
		{
			
			backpack[] = {"rhs_assault_umbts_engineer"};
			backpackItems[] = {"Toolkit"};
			vest[] = {"rhs_6b23_engineer"}; /// randomized
			headgear[] = {"rhs_tsh4_ess"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio"};

		};
		class rhs_msv_exp : rhs_msv_repair // Explosive Specialist
		{
			
			backpack[] = {"rhs_6b23_engineer"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {MSV_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
		};
		class rhs_msv_engineer : rhs_msv_repair // Mine Specialist
		{
			
			backpack[] = {"rhs_6b23_engineer"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {MSV_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
		};
		
	};	

class rhs_faction_vvs {

	    class Helicopter {
            TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG};
            TransportItems[] = {"AGM_Bandage:12","AGM_Morphine:4"};
        };

		class rhs_pilot_transport_heli // Pilot
		{
			uniform[] = {"rhs_uniform_df15"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"rhs_zsh7a"}; /// randomized
			weapons[] = {MSV_SMG}; /// randomized
			magazines[] = {MSV_SMG_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","NVgoggles"};
		};

	};
    class CIV_F {
        class C_man_1 {
            uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite"};  /// randomized
            vest[] = {}; /// randomized
            headgear[] = {}; /// randomized
            backpack[] = {}; /// randomized
            backpackItems[] = {};
            weapons[] = {}; /// randomized
            launchers[] = {}; /// randomized
            handguns[] = {}; /// randomized
            magazines[] = {};
            items[] = {"AGM_Bandage:3"};
            linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
            attachments[] = {};
        };
        class C_journalist_F: C_man_1 {
            uniform[] = {"U_C_Journalist"};  /// randomized
            vest[] = {"V_Press_F"}; /// randomized
            headgear[] = {"H_Cap_press"}; /// randomized
        };
        class CEO: C_man_1 {
            uniform[] = {"U_Marshal"};  /// randomized
            headgear[] = {"H_Hat_brown"};
            items[] += {"CUP_item_Money:10"};
        };
        class C_man_hunter_1_F: C_man_1 {
            uniform[] = {"U_C_HunterBody_grn"};  /// randomized
            headgear[] = {"H_Booniehat_grn"};  /// randomized
            weapons[] = {"CUP_srifle_LeeEnfield"};
            magazines[] = {"CUP_10x_303_M:3"};
            backpack[] = {"B_OutdoorPack_blk"};
        };
    };
};
