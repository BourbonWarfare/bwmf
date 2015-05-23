//Author: Sov
//Description: Sveedish - AK5 Rifles (from "meatballs" mission)

class rhs_faction_msv {
    //Rifle
    #define MSV_RIFLE "SAM_AK5C","SAM_AK5C_NOGRIP"
    #define MSV_RIFLE_MAG "SAM_30Rnd_556x45_Pmag:7","SAM_30Rnd_556x45_Pmag_T:1"
    //GL Rifle
    #define MSV_GLRIFLE "SAM_AK5C_GRT"
    #define MSV_GLRIFLE_MAG "SAM_30Rnd_556x45_Pmag:7","SAM_30Rnd_556x45_Pmag_T:1"
    #define MSV_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:1","1Rnd_SmokeRed_Grenade_shell:2"
    #define MSV_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:10"
    //Carbine
    #define MSV_CARBINE "SAM_AK5C","SAM_AK5C_NOGRIP"
    #define MSV_CARBINE_MAG "SAM_30Rnd_556x45_Pmag:7","SAM_30Rnd_556x45_Pmag_T:1"
    // AR
    #define MSV_AR "SAM_KSP90B"
    #define MSV_AR_MAG "SAM_200Rnd_556x45:4"
    #define MSV_AR_MAG2 "SAM_200Rnd_556x45:2"
    // SF Rifle
    #define MSV_SFR "hlc_rifle_aek971"
    #define MSV_SFR_MAG "hlc_30Rnd_545x39_S_AK:6"
    // AT
    #define MSV_AT "rhs_weap_M136_hedp"
    #define MSV_AT_MAG "rhs_m136_hedp_mag:1"
    // MMG
    #define MSV_MMG "SAM_KSP94"
    #define MSV_MMG_MAG "SAM_120Rnd_762x51:4","SAM_120Rnd_762x51_T:1"
    // MAT
    #define MSV_MAT "sam_grg_m86"
    #define MSV_MAT_MAG "sam_grg_he:3","sam_grg_heat:2"
    // LAT
    #define MSV_LAT "rhs_weap_M136_hedp"
    #define MSV_LAT_MAG "rhs_m136_hedp_mag:1"
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
    #define MSV_SMG "hgun_PDW2000_F"
    #define MSV_SMG_MAG "30Rnd_9x21_Mag:4"
    // Pistol
    #define MSV_PISTOL "rhsusf_weap_m1911a1"
    #define MSV_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:2"


    class rhs_msv_rifleman {// rifleman
        uniform[] = {"SAM_Crye_M90k_uniform","SAM_Crye_M90k_uniform_r"};  /// randomized
        vest[] = {"SAM_PlateCarrier"}; /// randomized
        headgear[] = {"SAM_HelmetIA_M90K","SAM_HelmetIA_M90K","SAM_cap_headphones_m90k"}; /// randomized
        backpack[] = {"SAM_AssaultPack_rgr"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {MSV_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {MSV_RIFLE_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        items[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","NVgoggles"};
        attachments[] = {"sam_acco_aimpoint"};
    };
    class rhs_msv_officer: rhs_msv_rifleman {// CO and DC
        weapons[] = {MSV_GLRIFLE};
        magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,MSV_PISTOL_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        handguns[] = {MSV_PISTOL}; /// randomized
        linkedItems[] += {"ItemGPS","ACE_Vector"};
        backpackItems[] += {"ACE_key_east","ACRE_PRC117F"};
        items[] += {"ACE_MapTools","ACRE_PRC148"};
    };
    class rhs_msv_sergeant: rhs_msv_Officer {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACRE_PRC343","rhsusf_ANPVS_14","ItemGPS","Binocular"};
        items[] += {"ACE_MapTools","ACRE_PRC148"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
    };
    class rhs_msv_junior_sergeant: rhs_msv_rifleman {// FTL

        weapons[] = {MSV_GLRIFLE};
        magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,"HandGrenade:2","rhs_mag_rdg2_white:2","rhs_mag_nspn_red:2"};
        linkedItems[] += {"ItemGPS","Binocular"};
        backpackItems[] += {"ACE_key_east"};
    };
    class rhs_msv_machinegunner: rhs_msv_rifleman {// AR
        weapons[] = {MSV_AR};
        magazines[] = {MSV_AR_MAG,MSV_PISTOL_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        handguns[] = {MSV_PISTOL}; /// randomized
    };
    class rhs_msv_machinegunner_assistant: rhs_msv_rifleman {// AAR
        backpackItems[] += {MSV_AR_MAG2};
        attachments[] = {"sam_acco_aimpoint_3x"};
        linkedItems[] += {"Binocular"};
    };
    class rhs_msv_at: rhs_msv_rifleman {// RAT
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,MSV_MAT_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        launchers[] = {MSV_MAT}; /// randomized
        backpack[] = {"SAM_GRG_Backpack_Heat"};

    };

    class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman {// Assistant Grenadier
        magazines[] = {MSV_CARBINE_MAG,MSV_MAT_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        backpackItems[] += {MSV_MAT_MAG};
        backpack[] = {"SAM_GRG_Backpack_Heat"};
        linkedItems[] += {"Binocular"};
    };
    class rhs_msv_medic: rhs_msv_rifleman {// Medic
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"smokeShell:6"};
        backpack[] = {"SAM_Kitbag_rgr"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14","ACE_earplugs"};
    };
    class rhs_msv_mmg: rhs_msv_rifleman {// MMG
        weapons[] = {MSV_MMG};
        magazines[] = {MSV_MMG_MAG,MSV_PISTOL_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        backpack[] = {"SAM_Kitbag_rgr"};
        handguns[] = {MSV_PISTOL}; /// randomized
    };
    class rhs_msv_mmgag: rhs_msv_rifleman {// MMG Spotter/Ammo Bearer
        backpackItems[] += {MSV_MMG_MAG};
        backpack[] = {"SAM_Kitbag_rgr"};
        linkedItems[] += {"ACE_Vector"};
    };
    class rhs_msv_mat: rhs_msv_rifleman {// MAT Gunner
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"HandGrenade:2","rhs_mag_rdg2_white:2"};
        launchers[] = {MSV_MAT}; /// randomized
        backpackItems[] += {MSV_MAT_MAG};
    };
    class rhs_msv_matag: rhs_msv_rifleman {// MAT Spotter/Ammo Bearer
        backpackItems[] += {MSV_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    //class rhs_msv_aa: rhs_msv_rifleman {// SAM Gunner
    //  weapons[] = {MSV_CARBINE};
    //  magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
    //  launchers[] = {MSV_SAM}; /// randomized
    // backpackItems[] = {MSV_SAM_MAG};
    //};
    //class rhs_msv_aaag: rhs_msv_rifleman {// SAM Spotter/Ammo Bearer
    //     backpackItems[] = {MSV_SAM_MAG};
    //     linkedItems[] += {"ACE_Vector"};
    //};
    class rhs_msv_support_Mort: rhs_msv_rifleman {// Mortar Gunner
        weapons[] = {MSV_CARBINE};
        magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rgd5:2","rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpack[] = {"rhs_msv_Mortar_01_weapon_F"}; /// randomized
    };
    class rhs_msv_support_AMort: rhs_msv_rifleman {// Assistant Mortar
        backpack[] = {"rhs_msv_Mortar_01_support_F"}; /// randomized
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] += {"ACE_Vector"};
    };
    class rhs_msv_sfl {// Spetnaz Leader
        uniform[] = {"rhs_uniform_vdv_mflora"};  /// randomized
        backpack[] = {"rhs_assault_umbts"};
        vest[] = {"rhs_6b23_ML_6sh92_vog_headset"}; /// randomized
        headgear[] = {"rhs_Booniehat_flora","rhs_gssh18"}; /// randomized
        weapons[] = {MSV_SFR}; /// randomized
        magazines[] = {MSV_SFR_MAG,"rhs_mag_rdg2_white:2","DemoCharge_Remote_Mag:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","LaserDesignator","ACE_DefusalKit","ACE_Clacker"};
        attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
    };
    class rhs_msv_sf {// Spetnaz Team
        uniform[] = {"rhs_uniform_vdv_mflora"};  /// randomized
        backpack[] = {"rhs_assault_umbts"};
        vest[] = {"rhs_6b23_ML_6sh92_vog"}; /// randomized
        headgear[] = {"rhs_Booniehat_flora","rhs_fieldcap"}; /// randomized
        weapons[] = {MSV_SFR}; /// randomized
        magazines[] = {MSV_SFR_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS","ACE_Vector","ACE_DefusalKit","ACE_Clacker"};
        attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
    };
    class rhs_msv_marksman: rhs_msv_rifleman {// Marksman
        weapons[] = {MSV_RIFLE}; /// randomized
        magazines[] = {MSV_RIFLE_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemRadio","itemGPS"};
        attachments[] = {"sam_acco_aimpoint_3x"};
    };
    class rhs_pilot_transport_heli {// Pilot
        uniform[] = {"rhs_uniform_df15"};  /// randomized
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"rhs_zsh7a"}; /// randomized
        backpack[] = {"SAM_Kitbag_rgr"}; /// randomized
        weapons[] = {MSV_SMG}; /// randomized
        magazines[] = {MSV_SMG_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs"};
        backpackItems[] = {"ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };
    class rhs_msv_crew {// Crew
        uniform[] = {"SAM_Crye_M90k_uniform","SAM_Crye_M90k_uniform_r"};  /// randomized
        vest[] = {"SAM_PlateCarrier"}; /// randomized
        headgear[] = {"SAM_HelmetIA_M90K","SAM_HelmetIA_M90K","SAM_cap_headphones_m90k"}; /// randomized
        backpack[] = {"SAM_Kitbag_rgr"}; /// randomized
        weapons[] = {MSV_CARBINE}; /// randomized
        magazines[] = {MSV_CARBINE_MAG,"rhs_mag_rdg2_white:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs"};
        backpackItems[] += {"ACE_key_east","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
    };
    class rhs_msv_repair: rhs_msv_crew {// Repair Specialist
        backpack[] = {"SAM_Kitbag_rgr"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
    class rhs_msv_exp: rhs_msv_repair {// Explosive Specialist
        backpack[] = {"SAM_Kitbag_rgr"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {MSV_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class rhs_msv_engineer: rhs_msv_repair {// Mine Specialist
        backpack[] = {"SAM_Kitbag_rgr"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {MSV_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
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