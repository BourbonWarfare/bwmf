//Author: BWMF
//Description: ?? - Ak Rifles

class opf_f {
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
    #define EAST_AR "rhs_weap_pkp"
    #define EAST_AR_MAG "rhs_100Rnd_762x54mmR:5"
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
    #define EAST_PISTOL_MAG "rhs_mag_9x19_17:4"

    class Car {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
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

    class O_Soldier_F { // rifleman
        uniform[] = {"MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_A","MNP_CombatUniform_DPR_B"};  /// randomized
        vest[] = {"MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RUMED","MNP_Vest_RUMED_B","MNP_Vest_RU_T","MNP_Vest_RU_T2","V_I_G_resistanceLeader_F"}; /// randomized
        headgear[] = {"rhs_6b27m_green_bala","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b28_green_bala","rhs_tsh4"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr","MNP_B_RU2_CA","MNP_B_RU2_FP","MNP_B_RU2_FP","rhs_sidor","rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {EAST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {EAST_RIFLE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        attachments[] = {"rhs_acc_1p63","rhs_acc_dtk"};
    };
    class O_officer_F: O_Soldier_F { // CO and DC
        weapons[] = {EAST_GLRIFLE};
        //vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
        //headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_FLARE,EAST_GLRIFLE_MAG_SMOKE,EAST_PISTOL_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        handguns[] = {EAST_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F"};
        items[] = {"ACE_MapTools", "ACRE_PRC148"};
    };
    class O_soldier_SL_F: O_Officer_F { // SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","rhsusf_ANPVS_14","ItemGPS","Binocular"};
        items[] = {"ACE_MapTools","ACRE_PRC148", "ACRE_PRC343"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
    };
    class O_soldier_UAV_F: O_Soldier_F {
        backpack[] = {"O_UAV_01_backpack_F"}; /// randomized
        linkedItems[] += {"O_uavterminal"};
    };
    class O_Soldier_TL_F: O_Soldier_F {// FTL
        weapons[] = {EAST_GLRIFLE};
        //headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
        magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_east"};
    };
    class O_soldier_GL_F: O_Soldier_TL_F { // SL

    };
    class O_Soldier_AR_F: O_Soldier_F {// AR
        //vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
        weapons[] = {EAST_AR};
        magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        handguns[] = {EAST_PISTOL}; /// randomized
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_Soldier_AAR_F: O_Soldier_F {// AAR
        backpackItems[] += {EAST_AR_MAG2};
        attachments[] = {"rhs_acc_1p29","rhs_acc_dtk"};
        linkedItems[] += {"Binocular"};
    };
    class O_Soldier_LAT_F: O_Soldier_F {// RAT
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,EAST_AT_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        launchers[] = {EAST_AT}; /// randomized
    };
    class O_medic_F: O_Soldier_F {// Medic
        //vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,"rhs_mag_rdg2_white:6"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14","ACE_earplugs"};
    };
    class O_support_MG_F: O_Soldier_F {// MMG
        weapons[] = {EAST_MMG};
        magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        handguns[] = {EAST_PISTOL}; /// randomized
    };
    class O_Soldier_A_F: O_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {EAST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_soldier_AT_F: O_Soldier_F {// MAT Gunner
        weapons[] = {EAST_CARBINE};
        backpack[] = {"rhs_rpg"};
        magazines[] = {EAST_CARBINE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        launchers[] = {EAST_MAT}; /// randomized
        backpackItems[] += {EAST_MAT_MAG};
        attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v","rhs_acc_dtk"};
    };
    class O_Soldier_AAT_F: O_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"rhs_rpg"};
        backpackItems[] += {EAST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_soldier_AA_F: O_Soldier_F {// SAM Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        launchers[] = {EAST_SAM}; /// randomized
        backpackItems[] += {EAST_SAM_MAG};
    };
    class O_Soldier_AAA_F: O_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] += {EAST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_support_Mort_F: O_Soldier_F {// Mortar Gunner
        weapons[] = {EAST_CARBINE};
        magazines[] = {EAST_CARBINE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpack[] = {"O_Mortar_01_weapon_F"}; /// randomized
    };
    class O_support_AMort_F: O_Soldier_F {// Assistant Mortar
        backpack[] = {"O_Mortar_01_support_F"}; /// randomized
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"ACE_Vector"};
    };
    class O_spotter_F {// Spotter
        headgear[] = {"rhs_tsh4","rhs_fieldcap"}; /// randomized
        uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
        vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized
        weapons[] = {EAST_SPOTTER}; /// randomized
        magazines[] = {EAST_SPOTTER_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","LaserDesignator"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class O_sniper_F {// Sniper
        headgear[] = {"rhs_tsh4","rhs_fieldcap"}; /// randomized
        uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
        vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized
        weapons[] = {EAST_SNIPER}; /// randomized
        magazines[] = {EAST_SNIPER_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class O_Helipilot_F {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a_mike"}; /// randomized
        backpack[] = {"B_AssaultPack_rgr"};
        weapons[] = {EAST_SMG}; /// randomized
        magazines[] = {EAST_SMG_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        backpackItems[] = {"ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_crew_F {// Crew
        headgear[] = {"rhs_tsh4_ess_bala"}; /// randomized
        uniform[] = {"LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01","LOP_U_US_Fatigue_01_slv"};  /// randomized
        vest[] = {"V_TacVest_camo","MNP_Vest_M81","rhs_6b23_ML_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_radio"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {EAST_CARBINE}; /// randomized
        magazines[] = {EAST_CARBINE_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {};
        backpackItems[] = {"ACRE_PRC117F", "ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class O_soldier_repair_F: O_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit", "ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        items[] = {"ACRE_PRC343"};
        vest[] = {"rhsusf_iotv_ocp_repair"}; /// randomized
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
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
};
