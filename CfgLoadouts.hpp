class CfgLoadouts {

	// BEST TO USE THE CLASSNAMES FOR GRENADES AND EXPLOSIVES INSTEAD OF THE DEFINES
		// //Chemlights
		// #define CHEM_GREEN "Chemlight_green"
		// #define CHEM_RED "Chemlight_red"
		// #define CHEM_BLUE "Chemlight_blue"
		// #define CHEM_YELLOW "Chemlight_yellow"
		// // Explosives (Mines and Charges)
		// #define AT_MINE "ATMine_Range_Mag"
		// #define DEMO_CHARGE "DemoCharge_Remote_Mag"
		// #define SATCHEL_CHARGE "SatchelCharge_Remote_Mag"
		// #define APERS_BOUNDING "APERSBoundingMine_Range_Mag"
		// #define APERS "APERSMine_Range_Mag"

	class blu_f {
		//Radios
		#define TF_defaultWestBackpack  "tf_rt1523g_big"
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
		#define WEST_AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:4"
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
		#define WEST_SNIPER ""
		#define WEST_SNIPER_MAG ""
		// SMG
		#define WEST_SMG "SMG_01_F"
		#define WEST_SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
		// Pistol
		#define WEST_PISTOL "hgun_Pistol_heavy_01_F"
		#define WEST_PISTOL_MAG "11Rnd_45ACP_Mag:2"
		
		class B_Soldier_F // rifleman
		{
			uniform[] = {"rhs_uniform_cu_ocp"};  /// randomized
			vest[] = {"rhsusf_iotv_ocp_Rifleman"}; /// randomized
			headgear[] = {"rhsusf_ach_helmet_ocp"}; /// randomized
			backpack[] = {"rhsusf_assault_eagleaiii_ocp"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine","AGM_IR_Strobe_Item"};
			weapons[] = {WEST_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {WEST_RIFLE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass",,"ItemWatch","itemRadio"};
			attachments[] = {"optic_Holosight"};
		};
		class B_officer_F : B_Soldier_F // CO and DC
		{
			weapons[] = {WEST_GLRIFLE};
			vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
			headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
			backpack[] = {TF_defaultWestBackpack};
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,WEST_PISTOL_MAG,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_SL_F : B_Officer_F // SL
		{
			
		};
		class B_Soldier_TL_F : B_Soldier_F // FTL
		{
			weapons[] = {WEST_GLRIFLE};
			headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,"HandGrenade:1","MiniGrenade:1","SmokeShell:2","HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_AR_F : B_Soldier_F // AR
		{
			vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
			weapons[] = {WEST_AR};
			magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			
		};
		class B_Soldier_AAR_F : B_Soldier_F // AAR
		{
			
			backpackItems[] = {WEST_AR_MAG};
			attachments[] = {"optic_arco"};			
			
		};
		class B_Soldier_LAT_F : B_Soldier_F // RAT
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,WEST_AT_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {WEST_AT}; /// randomized
			
		};
		class B_medic_F : B_Soldier_F // Medic
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"smokeShell:6"};
			backpackItems = ["AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"]
			
		};
		class B_support_MG_F : B_Soldier_F // MMG
		{
			weapons[] = {WEST_MMG};
			magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,,"HandGrenade:1","MiniGrenade:1","SmokeShell:2"};
			handguns[] = {WEST_PISTOL}; /// randomized
			
		};
		class B_Soldier_A_F : B_Soldier_F // MMG Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_MMG_MAG};			
			
		};
		class B_soldier_AT_F : B_Soldier_F // MAT Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {WEST_MAT}; /// randomized
			backpackItems[] = {WEST_MAT_MAG};
			
		};
		class B_Soldier_AAT_F : B_Soldier_F // MAT Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_MAT_MAG};			
			
		};
		class B_soldier_AA_F : B_Soldier_F // SAM Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			launchers[] = {WEST_SAM}; /// randomized
			backpackItems[] = {WEST_SAM_MAG};
			
		};
		class B_Soldier_AAA_F : B_Soldier_F // SAM Spotter/Ammo Bearer
		{
			
			backpackItems[] = {WEST_SAM_MAG};			
			
		};
		class B_support_Mort_F : B_Soldier_F // Mortar Gunner
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"HandGrenade:2","MiniGrenade:1","SmokeShell:2"};
			backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
			
		};
		class B_support_AMort_F : B_Soldier_F // Assistant Mortar
		{
			
			backpack[] = {"B_Mortar_01_support_F"}; /// randomized			
			
		};
		class B_Helipilot_F // Pilot
		{
			uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
			vest[] = {"V_TacVest_blk"}; /// randomized
			headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
			weapons[] = {WEST_SMG}; /// randomized
			magazines[] = {WEST_SMG_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
			linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
			
		};
		class B_crew_F // Crew
		{
			uniform[] = {"rhs_uniform_cu_ocp"};  // randomized
			vest[] = {"rhsusf_iotv_ocp"}; // randomized
			headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized			
			weapons[] = {WEST_CARBINE}; /// randomized
			magazines[] = {WEST_CARBINE_MAG,"SmokeShell:2"};
			items[] = {"AGM_Bandage:3","AGM_Morphine"};
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
			magazines[] = {WEST_SMG_MAG,"ATMine_Range_Mag:2","DemoCharge_Remote_Mag:2","SatchelCharge_Remote_Mag","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
		};
		class B_engineer_F : B_soldier_repair_F // Explosive Specialist
		{
			
			backpack[] = {"B_Carryall_mcamo"};
			backpackItems[] = {"Toolkit","AGM_DefusalKit","AGM_Clacker","MineDetector"};
			magazines[] = {WEST_SMG_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
		};
		
	};
};





