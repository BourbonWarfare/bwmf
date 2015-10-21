//Author: BWMF
//Description: Ukrainian - AK rifles

class ind_f {
	//Rifle
    #define IND_RIFLE "hlc_rifle_ak74_dirty"
	#define IND_RIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
	#define IND_RIFLE_ATTACHMENTS "rhs_acc_1p63"
    //GL Rifle
    #define IND_GLRIFLE "hlc_rifle_aks74_GL"
    #define IND_GLRIFLE_MAG IND_RIFLE_MAG
    #define IND_GLRIFLE_MAG_SMOKE "hlc_GRD_White:2","hlc_GRD_Red:2"
    #define IND_GLRIFLE_MAG_HE "hlc_VOG25_AK:8"
    //Carbine
    #define IND_CARBINE "hlc_rifle_aks74"
    #define IND_CARBINE_MAG IND_RIFLE_MAG
    // AR
    #define IND_AR "hlc_rifle_rpk74n"
    #define IND_AR_MAG "hlc_45Rnd_545x39_t_rpk:9"
    // AT
    #define IND_AT "rhs_weap_rpg7"
    #define IND_AT_MAG "rhs_rpg7_PG7VL_mag:1"
    // MMG
    #define IND_MMG "rhs_weap_pkm"
    #define IND_MMG_MAG "rhs_100Rnd_762x54mmR:5"
    // MAT
    #define IND_MAT "rhs_weap_rpg7"
    #define IND_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:2"
    // SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
	// Sniper Rifle
    #define IND_SNIPER "rhs_weap_svdp"
    #define IND_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
    // Spotter Rifle
    #define IND_SPOTTER "rhs_weap_svdp"
    #define IND_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
    // SMG
    #define IND_SMG "hlc_rifle_aks74u"
    #define IND_SMG_MAG "hlc_30Rnd_545x39_B_AK:8"
    // Pistol
    #define IND_PISTOL "rhs_weap_makarov_pmm"
    #define IND_PISTOL_MAG "rhs_mag_9x18_12_57N181S:3"
	// GEAR
	#define IND_BASE_MEDICAL "ACE_fieldDressing:3","ACE_morphine"
	#define IND_MEDIC_MEDICAL "ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"
	#define IND_BASE_TOOLS "ACRE_PRC343","ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
	#define IND_LEADER_TOOLS "ACE_microDAGR","ACE_key_indp","ACE_Flashlight_KSF1"
	#define IND_BASE_LINKED "ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"
	#define IND_LEADER_LINKED "ItemGPS"
	// GRENADES
	#define IND_BASE_FRAG "rhs_mag_rgd5:2"
	#define IND_BASE_GRENADES IND_BASE_FRAG,"SmokeShell:2"
	#define IND_LEADER_GRENADES IND_BASE_FRAG,"SmokeShell:4","SmokeShellGreen:2","chemlight_green:2"
	#define IND_MEDIC_GRENADES "SmokeShell:6","SmokeShellGreen:2"
	#define IND_CREW_GRENADES "SmokeShell:2"

    class Car {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL};
    };
    class Tank {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL};
    };
    class Helicopter {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL,IND_BASE_MEDICAL};
    };
    class Plane {
        TransportMagazines[] = {};
    };
    class Ship_F {
        TransportMagazines[] = {};
    };

    class I_Soldier_F {// rifleman
        uniform[] = {"LOP_U_US_Fatigue_02"};  /// randomized
        vest[] = {"MNP_Vest_OD_A","MNP_Vest_OD_B","LOP_V_Carrier_OLV"}; /// randomized
        headgear[] = {"MNP_Helmet_OD","rhs_beanie_green","H_Bandanna_khk","rhs_beanie"}; /// randomized
        backpack[] = {"B_Kitbag_rgr"}; /// randomized
        backpackItems[] = {IND_BASE_MEDICAL};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {IND_RIFLE_MAG,IND_BASE_GRENADES};
        items[] = {IND_BASE_TOOLS};
        linkedItems[] = {IND_BASE_LINKED};
        attachments[] = {IND_RIFLE_ATTACHMENTS};
    };
	class Fic_Ind_Soldier_Carbine: I_Soldier_F {// carbine-man
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_BASE_GRENADES};
    };
    class I_Soldier_TL_F: I_Soldier_F {// FTL
		headgear[] = {"rhs_Booniehat_ocp"}; /// randomized
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_LEADER_GRENADES};
        items[] += {IND_LEADER_TOOLS};
        linkedItems[] += {IND_LEADER_LINKED,"Binocular"};
    };
	class I_Soldier_SL_F: I_Soldier_TL_F {// SL
		handguns[] = {IND_PISTOL}; /// randomized
		magazines[] += {IND_PISTOL_MAG};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED,"ACE_Vector"};
        items[] += {"ACRE_PRC148"};
    };
    class I_officer_F: I_Soldier_SL_F {// CO and DC
        items[] += {"ACRE_PRC117F"};
    };
    class I_soldier_UAV_F: I_Soldier_F {
        backpack[] = {"I_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"I_uavterminal"};
    };
    class I_Soldier_AR_F: I_Soldier_F {// AR
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG};
		attachments[] = {"HLC_Optic_1p29"};
        linkeditems[] += {"Binocular"};
    };
    class I_Soldier_LAT_F: Fic_Ind_Soldier_Carbine {// RAT
        backpack[] = {"rhs_rpg_empty"}; /// randomized
        magazines[] += {IND_AT_MAG};
        launchers[] = {IND_AT}; /// randomized
    };
    class I_medic_F: Fic_Ind_Soldier_Carbine {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_MEDIC_GRENADES};
        backpack[] = {"B_Kitbag_rgr"};
        backpackItems[] = {IND_MEDIC_MEDICAL};
    };
    class I_support_MG_F: I_Soldier_F {// MMG
        weapons[] = {IND_MMG};
        backpack[] = {"B_Kitbag_rgr"}; /// randomized
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_A_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_Kitbag_rgr"}; /// randomized
        backpackItems[] += {IND_MMG_MAG};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_soldier_AT_F: Fic_Ind_Soldier_Carbine {// MAT Gunner
        backpack[] = {"rhs_rpg_empty"};
        launchers[] = {IND_MAT}; /// randomized
        backpackItems[] = {IND_MAT_MAG};
		items[] += {IND_BASE_MEDICAL};
		attachments[] = {"rhs_acc_pgo7v"};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] = {IND_MAT_MAG};
        linkeditems[] += {"ACE_Vector"};
		items[] += {IND_BASE_MEDICAL};
    };
    class I_soldier_AA_F: Fic_Ind_Soldier_Carbine {// SAM Gunner
        backpack[] = {"rhs_rpg_empty"};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] = {IND_SAM_MAG};
		items[] += {IND_BASE_MEDICAL};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {IND_SAM_MAG};
        linkeditems[] += {"ACE_Vector"};
        backpack[] = {"rhs_rpg_empty"};
		items[] += {IND_BASE_MEDICAL};
    };
    class I_support_Mort_F: Fic_Ind_Soldier_Carbine {// Mortar Gunner
        items[] += {IND_BASE_MEDICAL};
        backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
    };
    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"}; /// randomized
        items[] += {IND_BASE_MEDICAL,"ACE_RangeTable_82mm"};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_spotter_F {// Spotter
        uniform[] = {"LOP_U_US_Fatigue_02"};  /// randomized
        vest[] = {"MNP_Vest_OD_A","MNP_Vest_OD_B","LOP_V_Carrier_OLV"}; /// randomized
        headgear[] = {"rhs_Booniehat_ocp","rhs_beanie_green"}; /// randomized
        backpack[] = {"B_Kitbag_rgr"}; /// randomized
        weapons[] = {IND_SPOTTER}; /// randomized
        magazines[] = {IND_SPOTTER_MAG,IND_BASE_GRENADES};
        items[] = {IND_BASE_TOOLS,IND_BASE_MEDICAL,"ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED,"ACE_Vector"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class I_sniper_F: I_spotter_F {// Sniper
        vest[] = {"MNP_Vest_UKR_A","MNP_Vest_UKR_A","MNP_Vest_UKR_B"}; /// randomized
        headgear[] = {"MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_MC_UKR"}; /// randomized
        weapons[] = {IND_SNIPER}; /// randomized
        magazines[] = {IND_SNIPER_MAG,"SmokeShell:2"};
        items[] = {IND_BASE_TOOLS,IND_BASE_MEDICAL,"ACE_RangeCard"};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class I_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,IND_CREW_GRENADES};
        items[] = {IND_BASE_MEDICAL,IND_BASE_TOOLS,"ACRE_PRC148"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
    };
    class I_crew_F {// Crew
        uniform[] = {"LOP_U_US_Fatigue_02"};  /// randomized
        vest[] = {"MNP_Vest_OD_A","MNP_Vest_OD_B","LOP_V_Carrier_OLV"}; /// randomized
        headgear[] = {"MNP_Helmet_OD","rhs_beanie_green","H_Bandanna_khk","rhs_beanie"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,IND_CREW_GRENADES};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {IND_BASE_MEDICAL,IND_BASE_TOOLS};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED,"Binocular"};
		attachments[] = {IND_RIFLE_ATTACHMENTS};
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
    };
    class I_soldier_exp_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] += {"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class I_engineer_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] += {"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

    class fallback: I_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
