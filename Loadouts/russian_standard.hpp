//Author: BWMF
//Description: Russians - AK Rifles

class rhs_faction_msv {
    //Rifle
    #define MSV_RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_plummag"
    #define MSV_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
    //GL Rifle
    #define MSV_GLRIFLE "rhs_weap_ak74m_gp25"
    #define MSV_GLRIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
    #define MSV_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
    #define MSV_GLRIFLE_MAG_HE "rhs_VOG25:8"
    #define MSV_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:2"
    //Carbine
    #define MSV_CARBINE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_plummag"
    #define MSV_CARBINE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
    // AR
    #define MSV_AR "rhs_weap_pkp"
    #define MSV_AR_MAG "rhs_100Rnd_762x54mmR:5"
    #define MSV_AR_MAG2 "rhs_100Rnd_762x54mmR_green:4"
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
    #define MSV_SNIPER "rhs_weap_svds"
    #define MSV_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // Spotter Rifle
    #define MSV_SPOTTER "rhs_weap_svds"
    #define MSV_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
    // SMG
    #define MSV_SMG "rhs_weap_ak74m_folded"
    #define MSV_SMG_MAG "rhs_30Rnd_545x39_AK:6"
    // Pistol
    #define MSV_PISTOL "rhs_weap_pya"
    #define MSV_PISTOL_MAG "rhs_mag_9x19_17:2"

    class Car {
        TransportWeapons[] = {MSV_LAT};
        TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG,MSV_LAT_MAG};
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

    class rhs_msv_rifleman {// rifleman
        uniform[] = {"rhs_uniform_emr_patchless"};  /// randomized
        vest[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_rifleman","rhs_6b23_digi_rifleman","rhs_6b23_digi_sniper"}; /// randomized
        headgear[] = {"rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_digi_ess_bala","rhs_6b28_bala","rhs_6b28_bala","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b27m_digi_bala","rhs_6b27m_digi_ess_bala","rhs_6b27m_digi_bala"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {MSV_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {MSV_RIFLE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        items[] = {"ACRE_PRC343","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVgoggles"};
        attachments[] = {"rhs_acc_1p63","rhs_acc_pkas","rhs_acc_dtk"};
    };
    class rhs_msv_officer: rhs_msv_rifleman {// CO and DC
        weapons[] = {MSV_GLRIFLE};
        vest[] = {"rhs_6b23_digi_6sh92_vog_headset"}; /// randomized
        headgear[] = {"rhs_6b27m_digi_ess_bala"}; /// randomized
        magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,MSV_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {MSV_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F","Chemlight_red:2","ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVgoggles","ACE_Vector","ItemGPS"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACE_MapTools"};
    };
    class rhs_msv_sergeant: rhs_msv_Officer {// SL
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F","Chemlight_red:2","ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVgoggles","ACE_Vector","ItemGPS"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACE_MapTools"};
    };
    class rhs_msv_junior_sergeant: rhs_msv_rifleman {// FTL
        weapons[] = {MSV_GLRIFLE};
        magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,"rhs_mag_rgd5:2","SmokeShell:2","rhs_mag_nspn_red:2"};
        linkedItems[] += {"ACE_microDAGR","Binocular"};
        backpackItems[] += {"ACE_key_east","chemlight_red:2"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACE_MapTools"};
    };
    class rhs_msv_machinegunner: rhs_msv_rifleman {// AR
        vest[] = {"rhs_6b23_digi_6sh92_vog_headset"}; /// randomized
        weapons[] = {MSV_AR};
        magazines[] = {MSV_AR_MAG,MSV_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {MSV_PISTOL}; /// randomized
    };
    class rhs_msv_machinegunner_assistant: rhs_msv_rifleman {// AAR
        backpackItems[] += {MSV_AR_MAG2};
        linkedItems[] += {"Binocular"};
    };
    class rhs_msv_at: rhs_msv_rifleman {// RAT
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,MSV_AT_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        launchers[] = {MSV_AT}; /// randomized
    };
    class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman {// Assistant Grenadier
        backpackItems[] += {MSV_AT_MAG};
        linkedItems[] += {"Binocular"};
    };
    class rhs_msv_medic: rhs_msv_rifleman {// Medic
        vest[] = {"rhs_6b23_digi_medic"}; /// randomized
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"smokeShell:6"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14","ACE_earplugs"};
    };
    class rhs_msv_mmg: rhs_msv_rifleman {// MMG
        weapons[] = {MSV_MMG};
        vest[] = {"rhs_6b23_digi_6sh92_headset"};
        magazines[] = {MSV_MMG_MAG,MSV_PISTOL_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        handguns[] = {MSV_PISTOL}; /// randomized
        attachments[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVgoggles","ItemGPS"};
        items[] = {"ACRE_PRC148","ACE_MapTools"};
    };
    class rhs_msv_mmgag: rhs_msv_rifleman {// MMG Spotter/Ammo Bearer
        backpackItems[] += {MSV_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class rhs_msv_mat: rhs_msv_rifleman {// MAT Gunner
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        launchers[] = {MSV_MAT}; /// randomized
        backpackItems[] += {MSV_MAT_MAG};
        attachments[] = {"rhs_acc_1p63","rhs_acc_pgo7v","rhs_acc_dtk"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","NVgoggles","ItemGPS"};
        items[] = {"ACRE_PRC148","ACE_MapTools"};
    };
    class rhs_msv_matag: rhs_msv_rifleman {// MAT Spotter/Ammo Bearer
        backpackItems[] += {MSV_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    //class rhs_msv_aa: rhs_msv_rifleman {// SAM Gunner
    //  weapons[] = {MSV_CARBINE};
    //  magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
    //  launchers[] = {MSV_SAM}; /// randomized
    // backpackItems[] = {MSV_SAM_MAG};
    //};
    //class rhs_msv_aaag: rhs_msv_rifleman {// SAM Spotter/Ammo Bearer
    //     backpackItems[] = {MSV_SAM_MAG};
    //     linkedItems[] += {"ACE_Vector"};
    //};
    class rhs_msv_support_Mort: rhs_msv_rifleman {// Mortar Gunner
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rgd5:2","SmokeShell:2"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_RangeTable_82mm","ACE_MapTools"};
        backpack[] = {"rhs_msv_Mortar_01_weapon_F"}; /// randomized
    };
    class rhs_msv_support_AMort: rhs_msv_rifleman {// Assistant Mortar
        backpack[] = {"rhs_msv_Mortar_01_support_F"}; /// randomized
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"ACE_Vector"};
    };
    class rhs_msv_sfl {// Spetnaz Leader
        uniform[] = {"rhs_uniform_vdv_emr"};  /// randomized
        vest[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_rifleman","rhs_6b23_digi_rifleman","rhs_6b23_digi_sniper"}; /// randomized
        headgear[] = {"rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_digi_ess_bala","rhs_6b28_bala","rhs_6b28_bala","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b27m_digi_bala","rhs_6b27m_digi_ess_bala","rhs_6b27m_digi_bala"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        weapons[] = {MSV_SFR}; /// randomized
        magazines[] = {MSV_SFR_MAG,"SmokeShell:2","DemoCharge_Remote_Mag:1"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACRE_PRC148","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","ACE_Vector","ACE_DefusalKit","ACE_Clacker","ACE_microDAGR"};
        backpackItems[] += {"Chemlight_red"};
        attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
    };
    class rhs_msv_sf {// Spetnaz Team
        uniform[] = {"rhs_uniform_vdv_emr"};  /// randomized
        vest[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_6sh92_vog","rhs_6b23_digi_rifleman","rhs_6b23_digi_rifleman","rhs_6b23_digi_sniper"}; /// randomized
        headgear[] = {"rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_digi_ess_bala","rhs_6b28_bala","rhs_6b28_bala","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b27m_digi_bala","rhs_6b27m_digi_ess_bala","rhs_6b27m_digi_bala"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        weapons[] = {MSV_SFR}; /// randomized
        magazines[] = {MSV_SFR_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","ACE_Vector","ACE_DefusalKit","ACE_Clacker"};
        backpackItems[] += {"Chemlight_red"};
        attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
    };
    class rhs_msv_marksman {// Marksman
        uniform[] = {"rhs_uniform_emr_patchless"};  /// randomized
        vest[] = {"rhs_6b23_digi_sniper"}; /// randomized
        headgear[] = {"rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b28_ess_bala","rhs_6b27m_digi_ess_bala","rhs_6b28_bala","rhs_6b28_bala","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_bala_green","rhs_6b26_ess_bala_green","rhs_6b26_ess_bala_green","rhs_6b27m_digi_bala","rhs_6b27m_digi_ess_bala","rhs_6b27m_digi_bala"}; /// randomized
        weapons[] = {MSV_SPOTTER}; /// randomized
        magazines[] = {MSV_SPOTTER_MAG,"SmokeShell:2"};
        backpack[] = {"rhs_sidor"}; /// randomized
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhs_acc_pso1m2"};
    };
    class rhs_pilot_transport_heli {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a"}; /// randomized
        backpack[] = {"rhs_sidor"}; /// randomized
        weapons[] = {MSV_SMG}; /// randomized
        magazines[] = {MSV_SMG_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs","ACE_MapTools"};
        backpackItems[] = {"ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class rhs_msv_crew {// Crew
        uniform[] = {"rhs_uniform_emr_patchless"};  /// randomized
        vest[] = {"rhs_6b23_digi_crewofficer","rhs_6b23_digi_crew"}; /// randomized
        headgear[] = {"rhs_tsh4_ess_bala"}; /// randomized
        backpack[] = {"rhs_assault_umbts"}; /// randomized
        weapons[] = {MSV_CARBINE}; /// randomized
        magazines[] = {MSV_CARBINE_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_MapTools"};
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class rhs_msv_repair: rhs_msv_crew {// Repair Specialist
        backpack[] = {"rhs_assault_umbts_engineer"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        headgear[] = {"rhs_tsh4_ess"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class rhs_msv_exp: rhs_msv_repair {// Explosive Specialist
        backpack[] = {"rhs_assault_umbts_engineer"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {MSV_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
        attachments[] = {"rhs_acc_dtk"};
    };
    class rhs_msv_engineer: rhs_msv_repair {// Mine Specialist
        backpack[] = {"rhs_assault_umbts_engineer"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {MSV_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
        attachments[] = {"rhs_acc_dtk"};
    };
};

class rhs_faction_vvs {
    class Helicopter {
        TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };

    class rhs_pilot_transport_heli {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a"}; /// randomized
        backpack[] = {"rhs_sidor"}; /// randomized
        weapons[] = {MSV_SMG}; /// randomized
        magazines[] = {MSV_SMG_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        backpackItems[] = {"ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };
};
