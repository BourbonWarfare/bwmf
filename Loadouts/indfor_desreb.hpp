//Author: BWMF
//Description: Desert Militia - AK rifles

class ind_f {
    //Rifle
    #define IND_RIFLE "hlc_rifle_ak74"
    #define IND_RIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    //GL Rifle
    #define IND_GLRIFLE "hlc_rifle_aks74_GL"
    #define IND_GLRIFLE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    #define IND_GLRIFLE_MAG_SMOKE "hlc_GRD_White:2","hlc_GRD_Red:2"
    #define IND_GLRIFLE_MAG_HE "hlc_VOG25_AK:8"
    //Carbine
    #define IND_CARBINE "hlc_rifle_ak74"
    #define IND_CARBINE_MAG "hlc_30Rnd_545x39_B_AK:8","hlc_30Rnd_545x39_t_ak:2"
    // AR
    #define IND_AR "hlc_rifle_rpk74n"
    #define IND_AR_MAG "hlc_45Rnd_545x39_t_rpk:7"
    #define IND_AR_MAG2 "hlc_45Rnd_545x39_t_rpk:7"
    // AT
    #define IND_AT "rhs_weap_rpg7"
    #define IND_AT_MAG "rhs_rpg7_PG7VL_mag:3"
    // MMG
    #define IND_MMG "rhs_weap_pkm"
    #define IND_MMG_MAG "rhs_100Rnd_762x54mmR:5"
    // MAT
    #define IND_MAT "rhs_weap_rpg7"
    #define IND_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1"
    // SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
    // Sniper Rifle
    #define IND_SNIPER "rhs_weap_svdp"
    #define IND_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // Spotter Rifle
    #define IND_SPOTTER "rhs_weap_svdp"
    #define IND_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // SMG
    #define IND_SMG "hlc_rifle_aks74u"
    #define IND_SMG_MAG "hlc_30Rnd_545x39_B_AK:6"
    // Pistol
    #define IND_PISTOL "rhs_weap_makarov_pmm"
    #define IND_PISTOL_MAG "rhs_mag_9x18_12_57N181S:3"

    class Car {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
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

    class I_Soldier_F {// rifleman
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_ShemagOpen_tan","H_ShemagOpen_tan","LOP_H_Shemag_IT","LOP_H_Shemag_IT","LOP_H_Shemag_IT","rhs_6b26_green","H_Shemag_olive","H_Shemag_olive","H_Shemag_olive","LOP_H_PASGTHelmet_cover_TRI","LOP_H_PASGTHelmet_cover_RACS"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","B_Kitbag_rgr","rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {IND_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {IND_RIFLE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACE_MapTools"};
        attachments[] = {"rhsusf_acc_compm4"};
    };
    class I_officer_F: I_Soldier_F {// CO and DC
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        linkedItems[] += {"ACE_Vector","ItemGPS"};
        attachments[] = {"rhsusf_acc_compm4"};
        backpackItems[] += {"ACE_key_indp","chemlight_green:2"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACRE_PRC343","ACE_MapTools"};
    };
    class I_Soldier_SL_F: I_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_14","ACE_microDAGR","ACE_Vector"};
        items[] = {"ACRE_PRC148","ACE_microDAGR""ACRE_PRC343","ACE_MapTools"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs","chemlight_green:2"};
    };
    class I_soldier_UAV_F: I_Soldier_F {
        backpack[] = {"I_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"I_uavterminal"};
    };
    class I_Soldier_TL_F: I_Soldier_F {// FTL
        weapons[] = {IND_GLRIFLE};
        headgear[] = {"MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_MC_UKR"}; /// randomized
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,"rhs_mag_rgd5:2","SmokeShell:2","rhs_mag_nspn_red:2"};
        items[] = {"ACRE_PRC343","ACE_microDAGR","ACE_MapTools"};
        linkedItems[] += {"ACE_microDAGR","Binocular"};
        backpackItems[] += {"ACE_key_indp","chemlight_green:2"};
    };
    class I_Soldier_AR_F: I_Soldier_F {// AR
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG2};
        attachments[] = {"HLC_Optic_1p29"};
        linkeditems[] += {"Binocular"};
    };
    class I_Soldier_LAT_F: I_Soldier_F {// RAT
        weapons[] = {IND_CARBINE};
        backpack[] = {"rhs_rpg_empty"}; /// randomized
        magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        launchers[] = {IND_AT}; /// randomized
        attachments[] = {};
    };
    class I_medic_F: I_Soldier_F {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"SmokeShell:6"};
        backpack[] = {"B_AssaultPack_rgr"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14","ACE_earplugs"};
    };
    class I_support_MG_F: I_Soldier_F {// MMG
        weapons[] = {IND_MMG};
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL}; /// randomized
        attachments[] = {};
    };
    class I_Soldier_A_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        backpackItems[] += {IND_MMG_MAG};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"rhs_rpg_empty"};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        launchers[] = {IND_MAT}; /// randomized
        backpackItems[] += {IND_MAT_MAG};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"rhs_rpg_empty"};
        backpackItems[] += {IND_MAT_MAG};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_soldier_AA_F: I_Soldier_F {// SAM Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"rhs_rpg_empty"};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        launchers[] = {IND_SAM}; /// randomized
        backpackItems[] += {IND_SAM_MAG};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {IND_SAM_MAG};
        linkeditems[] += {"ACE_Vector"};
        backpack[] = {"rhs_rpg_empty"};
    };
    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_RangeTable_82mm","ACE_MapTools"};
        backpack[] = {"I_Mortar_01_weapon_F"}; /// randomized
    };
    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"}; /// randomized
        linkeditems[] += {"ACE_Vector"};
    };
    class I_spotter_F {// Spotter
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_ShemagOpen_tan","H_ShemagOpen_tan","LOP_H_Shemag_IT","LOP_H_Shemag_IT","LOP_H_Shemag_IT","rhs_6b26_green","H_Shemag_olive","H_Shemag_olive","H_Shemag_olive","LOP_H_PASGTHelmet_cover_TRI","LOP_H_PASGTHelmet_cover_RACS"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {IND_SPOTTER}; /// randomized
        magazines[] = {IND_SPOTTER_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class I_sniper_F {// Sniper
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_ShemagOpen_tan","H_ShemagOpen_tan","LOP_H_Shemag_IT","LOP_H_Shemag_IT","LOP_H_Shemag_IT","rhs_6b26_green","H_Shemag_olive","H_Shemag_olive","H_Shemag_olive","LOP_H_PASGTHelmet_cover_TRI","LOP_H_PASGTHelmet_cover_RACS"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"}; /// randomized
        weapons[] = {IND_SNIPER}; /// randomized
        magazines[] = {IND_SNIPER_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class I_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs", "ACRE_PRC343"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };
    class I_crew_F {// Crew
        uniform[] = {"MNP_CombatUniform_Militia_DE","MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};  /// randomized
        vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Grenadier","V_TacVest_brn","V_TacVest_khk","rhs_6b13"}; /// randomized
        headgear[] = {"H_ShemagOpen_tan","H_ShemagOpen_tan","H_ShemagOpen_tan","LOP_H_Shemag_IT","LOP_H_Shemag_IT","LOP_H_Shemag_IT","rhs_6b26_green","H_Shemag_olive","H_Shemag_olive","H_Shemag_olive","LOP_H_PASGTHelmet_cover_TRI","LOP_H_PASGTHelmet_cover_RACS"}; /// randomized
        weapons[] = {IND_SMG}; /// randomized
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        backpackItems[] += {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC343","ACE_earplugs","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };
    class I_soldier_exp_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class I_engineer_F: I_soldier_repair_F {// Explosive Specialist
        uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};  /// randomized
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };
};
