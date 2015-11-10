//Author: BWMF
//Description: ?? - Ak Rifles

class opf_f {
    //Rifle
    #define EAST_RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m"
    #define EAST_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
	#define EAST_RIFLE_ATTACHMENTS "rhs_acc_1p63","rhs_acc_dtk"
    //GL Rifle
    #define EAST_GLRIFLE "rhs_weap_ak74m_gp25"
    #define EAST_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
    #define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
    #define EAST_GLRIFLE_MAG_HE "rhs_VOG25:8"
    #define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
    //Carbine
    #define EAST_CARBINE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m"
    #define EAST_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
    // AR
    #define EAST_AR "rhs_weap_pkp"
    #define EAST_AR_MAG "rhs_100Rnd_762x54mmR:4"
    #define EAST_AR_MAG2 "rhs_100Rnd_762x54mmR_green:4"
    // AT
    #define EAST_AT "rhs_weap_rpg26"
    #define EAST_AT_MAG "rhs_rpg26_mag"
    // MMG
    #define EAST_MMG "rhs_weap_pkp"
    #define EAST_MMG_MAG "rhs_100Rnd_762x54mmR:5"
    // MAT
    #define EAST_MAT "rhs_weap_rpg7"
    #define EAST_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_TBG7V_mag:1"
    // SAM
    #define EAST_SAM "rhs_weap_igla"
    #define EAST_SAM_MAG "rhs_mag_9k38_rocket:2:2"
    // Sniper Rifle
    #define EAST_SNIPER "rhs_weap_svds"
    #define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // Spotter Rifle
    #define EAST_SPOTTER "rhs_weap_svds"
    #define EAST_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // SMG
    #define EAST_SMG "rhs_weap_ak74m_folded"
    #define EAST_SMG_MAG "rhs_30Rnd_545x39_AK:5"
    // Pistol
    #define EAST_PISTOL "rhs_weap_pya"
    #define EAST_PISTOL_MAG "rhs_mag_9x19_17:2"
    // GEAR
	#define EAST_BASE_MEDICAL "ACE_fieldDressing:3","ACE_morphine"
	#define EAST_MEDIC_MEDICAL "ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"
	#define EAST_BASE_TOOLS "ACRE_PRC343","ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
	#define EAST_LEADER_TOOLS "ACE_microDAGR","ACE_key_EAST","ACE_Flashlight_KSF1"
	#define EAST_BASE_LINKED "ItemMap","ItemCompass","ItemWatch","nvgoggles"
	#define EAST_LEADER_LINKED "ItemGPS"
	// GRENADES
	#define EAST_BASE_FRAG "rhs_mag_rgd5:2"
	#define EAST_BASE_GRENADES EAST_BASE_FRAG,"SmokeShell:2"
	#define EAST_LEADER_GRENADES EAST_BASE_FRAG,"SmokeShell:4","SmokeShellGreen:2","Chemlight_red:2"
	#define EAST_MEDIC_GRENADES "SmokeShell:6","SmokeShellGreen:2"
	#define EAST_CREW_GRENADES "SmokeShell:2"
	
    class Car {
        TransportWeapons[] = {EAST_AT};
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
        TransportItems[] = {EAST_BASE_MEDICAL,EAST_BASE_MEDICAL,EAST_BASE_MEDICAL,EAST_BASE_MEDICAL};
    };
    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
        TransportItems[] = {EAST_BASE_MEDICAL,EAST_BASE_MEDICAL,EAST_BASE_MEDICAL,EAST_BASE_MEDICAL};
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

    class O_Soldier_F { // rifleman
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","B_Kitbag_rgr","rhs_assault_umbts"}; /// randomized
        backpackItems[] = {EAST_BASE_MEDICAL};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,EAST_BASE_GRENADES};
        items[] = {EAST_BASE_TOOLS};
        linkedItems[] = {EAST_BASE_LINKED};
        attachments[] = {EAST_RIFLE_ATTACHMENTS};
    };
    class Fic_Soldier_Carbine: O_Soldier_F {// carbine-man
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_BASE_GRENADES};
    };
	class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_LEADER_GRENADES};
        items[] += {EAST_LEADER_TOOLS};
        linkedItems[] += {EAST_LEADER_LINKED,"Binocular"};
    };
	class O_soldier_SL_F: O_Soldier_TL_F { // SL
        handguns[] = {EAST_PISTOL}; /// randomized
		magazines[] += {EAST_PISTOL_MAG};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };
    class O_officer_F: O_Soldier_SL_F { // CO and DC
        vest[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b23_ML_6sh92_vog_headset", "rhs_6b23_ML_6sh92_vog"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        items[] += {"ACRE_PRC117F"};
    };    
    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"O_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"O_uavterminal"};
    }; 
    class O_soldier_GL_F: O_Soldier_TL_F { // SL

    };
    class O_Soldier_AR_F: O_Soldier_F {// AR
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_BASE_GRENADES};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG2};
        attachments[] = {"rhs_acc_1p29","rhs_acc_dtk"};
        linkedItems[] += {"Binocular"};
    };
    class O_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
        magazines[] += {EAST_AT_MAG};
        launchers[] = {EAST_AT}; /// randomized
    };
    class O_medic_F: Fic_Soldier_Carbine {// Medic
        //vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_MEDIC_GRENADES};
        backpackItems[] = {EAST_MEDIC_MEDICAL};
    };
    class O_support_MG_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_BASE_GRENADES};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {};
    };
    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
        backpack[] = {"rhs_rpg"};
        launchers[] = {EAST_MAT}; /// randomized
        backpackItems[] += {EAST_MAT_MAG};
        attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v","rhs_acc_dtk"};
    };
    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {EAST_MAT_MAG,"ACE_Flashlight_KSF1"};
        launchers[] = {EAST_MAT}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {EAST_MEDIC_MEDICAL};
    };
    class O_soldier_AA_F: Fic_soldier_Carbine {// SAM Gunner
        launchers[] = {EAST_SAM}; /// randomized
		items[] += {EAST_MEDIC_MEDICAL};
        backpackItems[] = {EAST_SAM_MAG,"ACE_Flashlight_KSF1"};
    };
    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {EAST_SAM_MAG,"ACE_Flashlight_KSF1"};
		items[] += {EAST_MEDIC_MEDICAL};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
        items[] += {EAST_MEDIC_MEDICAL};
        backpack[] = {"O_Mortar_01_weapon_F"}; /// randomized
    };
    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {EAST_MEDIC_MEDICAL,"ACE_RangeTable_82mm"};
    };
    class O_spotter_F {// Spotter
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","B_Kitbag_rgr","rhs_assault_umbts"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,EAST_BASE_GRENADES};
        items[] = {EAST_BASE_TOOLS,EAST_BASE_MEDICAL,"ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,"ACE_Vector"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class O_sniper_F {// Sniper
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","B_Kitbag_rgr","rhs_assault_umbts"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG,EAST_BASE_GRENADES};
        items[] = {EAST_BASE_TOOLS,EAST_BASE_MEDICAL,"ACE_RangeCard"};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class O_Helipilot_F {// Pilot
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","B_Kitbag_rgr","rhs_assault_umbts"}; /// randomized
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,EAST_CREW_GRENADES};
        backpackItems[] = {"ACE_key_EAST","ACRE_PRC117F"};
        items[] = {EAST_BASE_MEDICAL,EAST_BASE_TOOLS,"ACRE_PRC148"};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_crew_F {// Crew
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,EAST_CREW_GRENADES};
        items[] = {EAST_BASE_MEDICAL,EAST_BASE_TOOLS};
        backpackItems[] = {"ACE_key_EAST","ACRE_PRC117F"};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,"Binocular"};
		attachments[] = {EAST_RIFLE_ATTACHMENTS};
    };
    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit", "ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_soldier_exp_F: O_soldier_repair_F {// Mines Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_engineer_F: O_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {EAST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
        attachments[] = {"rhs_acc_dtk"};
    };

    class fallback: O_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
