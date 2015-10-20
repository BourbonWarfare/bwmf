//Author: BWMF
//Description: US UCP - M4 Rifles

class blu_f {
    //Rifle
    #define WEST_RIFLE "rhs_weap_m4a1_carryhandle_grip2"
    #define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
    //GL Rifle
    #define WEST_GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
    #define WEST_GLRIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
    #define WEST_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
    //Carbine
    #define WEST_CARBINE "rhs_weap_m4a1_carryhandle_grip"
    #define WEST_CARBINE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
    // AR
    #define WEST_AR "rhs_weap_m249_pip_L"
    #define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
    #define WEST_AR_MAG2 "rhsusf_200Rnd_556x45_soft_pouch:2"
    // AT
    #define WEST_AT "rhs_weap_M136"
    #define WEST_AT_MAG "rhs_m136_mag"
    // MMG
    #define WEST_MMG "rhs_weap_m240B"
    #define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
    // MAT
    #define WEST_MAT "launch_B_Titan_short_F"
    #define WEST_MAT_MAG "Titan_AT:3"
    // SAM
    #define WEST_SAM "rhs_weap_fim92"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"
    // Sniper Rifle
    #define WEST_SNIPER "rhs_weap_m14ebrri"
    #define WEST_SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
    // Spotter Rifle
    #define WEST_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
    #define WEST_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
    // SMG
    #define WEST_SMG "hlc_smg_mp5a4"
    #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
    // Pistol
    #define WEST_PISTOL "rhsusf_weap_m1911a1"
    #define WEST_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:3"

    class Car {
        TransportWeapons[] = {WEST_AT};
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Tank {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Helicopter {
        TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
        TransportItems[] = {"ACE_fieldDressing:12","ACE_morphine:4"};
    };
    class Plane {
        TransportMagazines[] = {};
    };
    class Ship_F {
        TransportMagazines[] = {};
    };


    class B_Soldier_F {// rifleman
        uniform[] = {"rhs_uniform_cu_ucp"};  /// randomized
        vest[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_iotv_ucp_Repair","rhsusf_iotv_ucp_Teamleader"}; /// randomized
        headgear[] = {"rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp"}; /// randomized
        backpack[] = {"rhsusf_assault_eagleaiii_ucp"}; /// randomized
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {WEST_RIFLE}; /// randomized
        launchers[] = {}; /// randomized
        handguns[] = {}; /// randomized
        magazines[] = {WEST_RIFLE_MAG,"rhs_mag_m67:2","SmokeShell:2"};
        items[] = {"ACRE_PRC343","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
    };
    class B_officer_F: B_Soldier_F {// CO and DC
        weapons[] = {WEST_GLRIFLE};
        vest[] = {"rhsusf_iotv_ucp_Grenadier"}; /// randomized
        headgear[] = {"rhsusf_ach_helmet_headset_ucp"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_PISTOL_MAG,"rhs_mag_m67:1","SmokeShellGreen:2"};
        handguns[] = {WEST_PISTOL}; /// randomized
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F","Chemlight_blue:2","ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14","ACE_Vector","ItemGPS"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACE_MapTools"};
    };
    class B_Soldier_SL_F: B_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","rhsusf_ANPVS_14","ItemGPS","ACE_Vector"};
        items[] = {"ACRE_PRC148", "ACRE_PRC343","ACE_microDAGR","ACE_MapTools"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs","Chemlight_blue:2"};
    };
    class B_soldier_UAV_F: B_Soldier_F {
        backpack[] = {"B_rhsusf_B_BACKPACK"}; /// randomized
        linkedItems[] += {"B_uavterminal"};
    };
    class B_Soldier_TL_F: B_Soldier_F {// FTL
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"rhsusf_ach_helmet_headset_ess_ucp"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,"SmokeShellGreen:2","rhs_mag_m67:2","SmokeShell:2","rhs_mag_m67:1","SmokeShell:2"};
        items[] = {"ACRE_PRC343","ACE_microDAGR","ACE_MapTools"};
        backpackItems[] += {"ACE_key_west","Chemlight_blue:2"};
        linkedItems[] += {"ItemGPS","Binocular"};
    };
    class B_Soldier_AR_F: B_Soldier_F {// AR
        vest[] = {"rhsusf_iotv_ucp_SAW"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,"rhs_mag_m67:2","SmokeShell:2"};
        handguns[] = {WEST_PISTOL}; /// randomized
    };
    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG2};
        attachments[] = {"rhsusf_acc_ACOG_USMC"};
        linkedItems[] += {"Binocular"};
    };
    class B_Soldier_LAT_F: B_Soldier_F {// RAT
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,WEST_AT_MAG,"rhs_mag_m67:2","SmokeShell:2"};
        launchers[] = {WEST_AT}; /// randomized
    };
    class B_medic_F: B_Soldier_F {// Medic
        vest[] = {"rhsusf_iotv_ucp_medic"}; /// randomized
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,"SmokeShell:6"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14", "ACE_earplugs"};
    };
    class B_support_MG_F: B_Soldier_F {// MMG
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,"rhs_mag_m67:1","SmokeShell:2"};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };
    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_soldier_AT_F: B_Soldier_F {// MAT Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","SmokeShell:2"};
        launchers[] = {WEST_MAT}; /// randomized
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_MapTools"};
        backpackItems[] = {WEST_MAT_MAG};
    };
    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_MapTools"};
    };
    class B_soldier_AA_F: B_Soldier_F {// SAM Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","MiniGrenade:1","SmokeShell:2"};
        launchers[] = {WEST_SAM}; /// randomized
        backpackItems[] += {WEST_SAM_MAG};
    };
    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_support_Mort_F: B_Soldier_F {// Mortar Gunner
        weapons[] = {WEST_CARBINE};
        magazines[] = {WEST_CARBINE_MAG,"rhs_mag_m67:2","SmokeShell:2"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_RangeTable_82mm","ACE_MapTools"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };
    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_MapTools"};
    };
    class B_spotter_F {// Spotter
        uniform[] = {"rhs_uniform_cu_ucp"};  /// randomized
        vest[] = {"rhsusf_iotv_ucp"}; /// randomized
        headgear[] = {"rhs_Booniehat_ucp","rhsusf_ach_helmet_ESS_ucp"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,"SmokeShell:2","rhs_mag_m67:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","ACE_Vector"};
        attachments[] = {"rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side"};
    };
    class B_sniper_F {// Sniper
        uniform[] = {"rhs_uniform_cu_ucp"};  /// randomized
        vest[] = {"rhsusf_iotv_ucp"}; /// randomized
        headgear[] = {"rhs_Booniehat_ucp","rhsusf_ach_helmet_ESS_ucp"}; /// randomized
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,"SmokeShell:2","rhs_mag_m67:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15side"};
    };
    class B_Helipilot_F {// Pilot
        uniform[] = {"U_B_HeliPilotCoveralls"};  /// randomized
        backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"V_TacVest_blk"}; /// randomized
        headgear[] = {"H_PilotHelmetHeli_B"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,"SmokeShell:2"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","NVgoggles"};
    };
    class B_helicrew_F: B_Helipilot_F { // Pilot

    };
    class B_crew_F {// Crew
        uniform[] = {"rhs_uniform_cu_ucp"};  // randomized
        vest[] = {"rhsusf_iotv_ucp"}; // randomized
        headgear[] = {"rhsusf_cvc_green_ess"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_MapTools"};
        backpackItems[] += {"ACE_key_west","ACRE_PRC343","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
    };
    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        vest[] = {"rhsusf_iotv_ucp_repair"}; /// randomized
        items[] += {"ACRE_PRC343","ACE_MapTools"};
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
    };
    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {WEST_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

    class fallback: B_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
