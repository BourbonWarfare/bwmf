//Author: BWMF
//Description: German Flekterarian Camo G36

class blu_f {
	//Rifle
    #define WEST_RIFLE "BWA3_G36"
    #define WEST_RIFLE_MAG "BWA3_30Rnd_556x45_G36:8","BWA3_30Rnd_556x45_G36_Tracer:2"
	#define WEST_RIFLE_ATTACHMENTS "BWA3_optic_EOTech","BWA3_acc_LLM01_irlaser"
    //GL Rifle
    #define WEST_GLRIFLE "BWA3_G36_AG"
    #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
    #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
    //Carbine
    #define WEST_CARBINE "BWA3_G36K"
    #define WEST_CARBINE_MAG WEST_RIFLE_MAG
    // AR
    #define WEST_AR "BWA3_MG4"
    #define WEST_AR_MAG "BWA3_200Rnd_556x45:2"
    // AT
    #define WEST_AT "BWA3_Pzf3"
    #define WEST_AT_MAG "BWA3_Pzf3_IT"
    // MMG
    #define WEST_MMG "BWA3_MG5"
    #define WEST_MMG_MAG "BWA3_120Rnd_762x51:4"
    // MAT
    #define WEST_MAT "BWA3_RGW90"
    #define WEST_MAT_MAG "BWA3_RGW90_HH"
    // SAM
    #define WEST_SAM "rhs_weap_fim92"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"
    // Sniper Rifle
    #define WEST_SNIPER "BWA3_G28_Standard"
    #define WEST_SNIPER_MAG "BWA3_10Rnd_762x51_G28:10"
    // Spotter Rifle
    #define WEST_SPOTTER "BWA3_G36"
    #define WEST_SPOTTER_MAG "BWA3_30Rnd_556x45_G36:8"
    // SMG
    #define WEST_SMG "hlc_smg_mp5a4"
    #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
    // Pistol
    #define WEST_PISTOL "rhsusf_weap_m1911a1"
    #define WEST_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:3"
	// GEAR
	#define WEST_BASE_MEDICAL "ACE_fieldDressing:3","ACE_morphine"
	#define WEST_MEDIC_MEDICAL "ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"
	#define WEST_BASE_TOOLS "ACRE_PRC343","ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
	#define WEST_LEADER_TOOLS "ACE_microDAGR","ACE_key_west","ACE_Flashlight_KSF1"
	#define WEST_BASE_LINKED "ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"
	#define WEST_LEADER_LINKED "ItemGPS"
	// GRENADES
	#define WEST_BASE_FRAG "rhs_mag_m67:2"
	#define WEST_BASE_GRENADES WEST_BASE_FRAG,"SmokeShell:2"
	#define WEST_LEADER_GRENADES WEST_BASE_FRAG,"SmokeShell:4","SmokeShellGreen:2","Chemlight_blue:2"
	#define WEST_MEDIC_GRENADES "SmokeShell:6","SmokeShellGreen:2"
	#define WEST_CREW_GRENADES "SmokeShell:2"

    class Car {
        TransportWeapons[] = {WEST_AT};
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
    };
    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
    };
    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
    };
    class Plane {
        TransportMagazines[] = {};
    };
    class Ship_F {
        TransportMagazines[] = {};
    };

    class B_Soldier_F {// rifleman
        uniform[] = {"BWA3_Uniform_Fleck","BWA3_Uniform2_Fleck"};  /// randomized
        vest[] = {"BWA3_Vest_Fleck","BWA3_Vest_Marksman_Fleck"}; /// randomized
        headgear[] = {"BWA3_OpsCore_Fleck","BWA3_OpsCore_Fleck_Patch","BWA3_OpsCore_Fleck_Camera","BWA3_OpsCore_Schwarz"}; /// randomized
        backpack[] = {"BWA3_Kitbag_Fleck"}; /// randomized
        backpackItems[] = {WEST_BASE_MEDICAL};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_TOOLS};
        linkedItems[] = {WEST_BASE_LINKED};
        attachments[] = {WEST_RIFLE_ATTACHMENTS};
    };
	class Fic_Soldier_Carbine: B_Soldier_F {// carbine-man
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_BASE_GRENADES};
    };
    class B_Soldier_TL_F: B_Soldier_F {// FTL
		vest[] = {"BWA3_Vest_Leader_Fleck","BWA3_Vest_Grenadier_Fleck"}; /// randomized
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_LEADER_GRENADES};
        items[] += {WEST_LEADER_TOOLS};
        linkedItems[] += {WEST_LEADER_LINKED,"Binocular"};
    };
	class B_Soldier_SL_F: B_Soldier_TL_F {// SL
		handguns[] = {WEST_PISTOL}; /// randomized
		magazines[] += {WEST_PISTOL_MAG};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };
    class B_officer_F: B_Soldier_SL_F {// CO and DC
        items[] += {"ACRE_PRC117F"};
    };
    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };
    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"BWA3_Vest_Autorifleman_Fleck"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
        handguns[] = {WEST_PISTOL}; /// randomized
    };
    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        items[] += {"ACE_Flashlight_KSF1"};
        backpackItems[] += {WEST_AR_MAG};
        attachments[] = {"BWA3_optic_EOTech_Mag_Off","BWA3_acc_LLM01_irlaser"};
        linkedItems[] += {"Binocular"};
    };
    class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
        magazines[] += {WEST_AT_MAG};
        launchers[] = {WEST_AT}; /// randomized
    };
    class B_medic_F: Fic_Soldier_Carbine {// Medic
        vest[] = {"BWA3_Vest_Medic_Fleck"}; /// randomized
        backpack[] = {"BWA3_Kitbag_Fleck_Medic"}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_MEDIC_GRENADES};
        items[] = {"ACE_Flashlight_KSF1"};
        backpackItems[] = {WEST_MEDIC_MEDICAL};
    };
    class B_support_MG_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };
    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG};
        items[] += {"ACE_Flashlight_KSF1"};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
        launchers[] = {WEST_MAT}; /// randomized
        items[] += {WEST_BASE_MEDICAL,"ACE_Flashlight_KSF1"};
        backpackItems[] = {WEST_MAT_MAG};
        attachments[] = {"BWA3_optic_NSA80"};
    };
    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        launchers[] = {WEST_MAT}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {WEST_BASE_MEDICAL,"ACE_Flashlight_KSF1"};
    };
    class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
        launchers[] = {WEST_SAM}; /// randomized
		items[] += {WEST_BASE_MEDICAL};
        backpackItems[] = {WEST_SAM_MAG,"ACE_Flashlight_KSF1"};
    };
    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG,"ACE_Flashlight_KSF1"};
		items[] += {WEST_BASE_MEDICAL};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
		items[] += {WEST_BASE_MEDICAL};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };
    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {WEST_BASE_MEDICAL,"ACE_RangeTable_82mm"};
    };
    class B_spotter_F {// Spotter
        uniform[] = {"BWA3_Uniform_Ghillie_Fleck"};  /// randomized
        vest[] = {"BWA3_Vest_Marksman_Fleck"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_TOOLS,WEST_BASE_MEDICAL,"ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,"ACE_Vector"};
        attachments[] = {WEST_RIFLE_ATTACHMENTS};
    };
    class B_sniper_F: B_spotter_F {// Sniper
        uniform[] = {"BWA3_Uniform_Ghillie_Fleck"};  /// randomized
        vest[] = {"BWA3_Vest_Marksman_Fleck"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_TOOLS,WEST_BASE_MEDICAL,"ACE_RangeCard"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
        attachments[] = {"BWA3_optic_Shortdot","BWA3_acc_VarioRay_irlaser"};
    };
    class B_Helipilot_F {// Pilot
        uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
        backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_CREW_GRENADES};
        backpackItems[] = {"ACE_key_west","ACRE_PRC117F"};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACRE_PRC148"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
    };
    class B_helicrew_F: B_Helipilot_F { // Pilot
    };
    class B_crew_F {// Crew
        uniform[] = {"BWA3_Uniform_Crew_Fleck"};  // randomized
        vest[] = {"BWA3_Vest_Rifleman1_Fleck"}; // randomized
        headgear[] = {"BWA3_CrewmanKSK_Fleck","BWA3_CrewmanKSK_Fleck_Headset"}; /// randomized
        backpack[] = {"BWA3_Kitbag_Fleck"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_CREW_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS};
        backpackItems[] = {"ACE_key_west","ACRE_PRC117F"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,"Binocular"};
		attachments[] = {WEST_RIFLE_ATTACHMENTS};
    };
    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"BWA3_Kitbag_Fleck"};
        backpackItems[] = {"Toolkit","ACRE_PRC148","ACE_Flashlight_KSF1"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
    };
    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {"BWA3_PatrolPack_Fleck"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector","ACE_Flashlight_KSF1"};
        magazines[] += {"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {"BWA3_PatrolPack_Fleck"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector","ACE_Flashlight_KSF1"};
        magazines[] += {"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };
};
