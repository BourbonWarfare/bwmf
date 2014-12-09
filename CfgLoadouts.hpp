class CfgLoadouts {

		// Grenades
		#define GRENADE_HE "HandGrenade"
		#define GRENADE_SMOKE "SmokeShell"
		//Chemlights
		#define CHEM_GREEN "Chemlight_green"
		#define CHEM_RED "Chemlight_red"
		#define CHEM_BLUE "Chemlight_blue"
		#define CHEM_YELLOW "Chemlight_yellow"
		// Explosives (Mines and Charges)
		#define AT_MINE "ATMine_Range_Mag"
		#define DEMO_CHARGE "DemoCharge_Remote_Mag"
		#define SATCHEL_CHARGE "SatchelCharge_Remote_Mag"
		#define APERS_BOUNDING "APERSBoundingMine_Range_Mag"
		#define APERS "APERSMine_Range_Mag"

	class blu_f {
		
		//Rifle
		#define WEST_RIFLE "arifle_MX_pointer_F"
		#define WEST_RIFLE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"
		//GL Rifle
		#define WEST_GLRIFLE "arifle_MX_GL_F"
		#define WEST_GLRIFLE_MAG "30Rnd_65x39_caseless_mag"
		#define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:3"
		#define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell"
		#define WEST_GLRIFLE_MAG_FLARE "UGL_FlareWhite_F:3","UGL_FlareRed_F:3","UGL_FlareYellow_F:3","UGL_FlareGreen_F:3"
		//Carbine
		#define WEST_CARBINE "arifle_MXC_F"
		#define WEST_CARBINE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"
		// AR
		#define WEST_AR "arifle_MX_SW_F"
		#define WEST_AR_MAG "100Rnd_65x39_caseless_mag:4"
		// AT
		#define WEST_AT "launch_NLAW_F"
		#define WEST_AT_MAG "NLAW_F"
		// MMG
		#define WEST_MMG "LMG_Zafir_F"
		#define WEST_MMG_MAG "150Rnd_762x51_Box"
		// MAT
		#define WEST_MAT ""
		#define WEST_MAT_MAG ""
		// SAM
		#define WEST_SAM ""
		#define WEST_SAM_MAG ""
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
			uniform[] = {"U_B_CombatUniform_mcam","U_B_CombatUniform_mcam_tshirt","U_B_CombatUniform_mcam_vest"};  /// randomized
			vest[] = {"V_TacVest_blk","V_TacVest_brn"}; /// randomized
			headgear[] = {"H_HelmetB","H_HelmetB_plain_mcamo"}; /// randomized
			backpack[] = {"B_AssaultPack_mcamo"}; /// randomized
			backpackItems[] = {"AGM_Bandage:3","AGM_Morphine"};
			weapons[] = {WEST_RIFLE}; /// randomized
			launchers[] = {}; /// randomized
			handguns[] = {}; /// randomized
			magazines[] = {WEST_RIFLE_MAG,"HandGrenade:3","MiniGrenade:3","SmokeShell:4"};
			items[] = {};
			linkedItems[] = {"ItemMap","ItemCompass","ItemRadio","ItemWatch"};
			attachments[] = {"optic_Holosight"};
		};
		class B_officer_F : B_Soldier_F // CO and DC
		{
			weapons[] = {WEST_GLRIFLE};
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,GRENADE_HE,GRENADE_SMOKE,WEST_PISTOL_MAG};
			handguns[] = {WEST_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_SL_F : B_Soldier_F // SL
		{
			weapons[] = {WEST_GLRIFLE};
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,GRENADE_HE,GRENADE_SMOKE,WEST_PISTOL_MAG};
			handguns[] = {WEST_PISTOL}; /// randomized
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_TL_F : B_Soldier_F // FTL
		{
			weapons[] = {WEST_GLRIFLE};
			magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_GLRIFLE_MAG_FLARE,GRENADE_HE,GRENADE_SMOKE};
			linkedItems[] += {"ItemGPS"};
		};
		class B_Soldier_AR_F : B_Soldier_F // AR
		{
			weapons[] = {WEST_AR};
			magazines[] = {WEST_AR_MAG,GRENADE_HE,GRENADE_SMOKE,WEST_PISTOL_MAG};
			handguns[] = {WEST_PISTOL}; /// randomized
			
		};
		class B_Soldier_AAR_F : B_Soldier_F // AAR
		{
			
			backpackItems[] = {WEST_AR_MAG};			
			
		};
		class B_Soldier_LAT_F : B_Soldier_F // RAT
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,GRENADE_HE,GRENADE_SMOKE,WEST_AT_MAG};
			launchers[] = {WEST_AT}; /// randomized
			
		};
		class B_medic_F : B_Soldier_F // Medic
		{
			weapons[] = {WEST_CARBINE};
			magazines[] = {WEST_CARBINE_MAG,"smokeShell:6"};
			backpackItems = ["AGM_Bandage:31","AGM_Epipen:8","AGM_Bloodbag:2","AGM_Morphine:14"]
			
		};
	};
};