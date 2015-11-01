//Author: BWMF
//Description: US ocp - M4 Rifles

class blu_f {
    //Rifle
    #define WEST_RIFLE "rhs_weap_m4a1_carryhandle_grip2"
    #define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
    #define WEST_RIFLE_ATTACHMENTS "rhsusf_acc_eotech_552","rhsusf_acc_anpeq15A"
    //GL Rifle
    #define WEST_GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
    #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
    #define WEST_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
    //Carbine
    #define WEST_CARBINE "rhs_weap_m4a1_carryhandle_grip"
    #define WEST_CARBINE_MAG WEST_RIFLE_MAG
    // AR
    #define WEST_AR "rhs_weap_m249_pip_L"
    #define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:2"
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
        uniform[] = {"rhs_uniform_cu_ocp"};  /// randomized
        vest[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_iotv_ocp_Repair","rhsusf_iotv_ocp_Teamleader"}; /// randomized
        headgear[] = {"rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ESS_ocp"}; /// randomized
        backpack[] = {"rhsusf_assault_eagleaiii_ocp"}; /// randomized
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
        vest[] = {"rhsusf_iotv_ocp_Grenadier"}; /// randomized
        weapons[] = {WEST_GLRIFLE};
        headgear[] = {"rhsusf_ach_helmet_headset_ess_ocp"}; /// randomized
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_LEADER_GRENADES};
        items[] += {WEST_LEADER_TOOLS};
        linkedItems[] += {WEST_LEADER_LINKED,"Binocular"};
    };
    class B_Soldier_SL_F: B_Soldier_TL_F {// SL
        headgear[] = {"rhsusf_ach_helmet_headset_ocp"}; /// randomized
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
        vest[] = {"rhsusf_iotv_ocp_SAW"}; /// randomized
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
        handguns[] = {WEST_PISTOL}; /// randomized
    };
    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG};
        attachments[] = {"rhsusf_acc_ACOG_USMC","rhsusf_acc_anpeq15A"};
        linkedItems[] += {"Binocular"};
    };
    class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
        magazines[] += {WEST_AT_MAG};
        launchers[] = {WEST_AT}; /// randomized
    };
    class B_medic_F: Fic_Soldier_Carbine {// Medic
        vest[] = {"rhsusf_iotv_ocp_medic"}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_MEDIC_GRENADES};
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
        linkedItems[] += {"ACE_Vector"};
    };
    class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
        launchers[] = {WEST_MAT}; /// randomized
        items[] += {WEST_BASE_MEDICAL};
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {WEST_MAT_MAG};
    };
    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {WEST_BASE_MEDICAL};
    };
    class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
        launchers[] = {WEST_SAM}; /// randomized
        items[] += {WEST_BASE_MEDICAL};
        backpackItems[] = {WEST_SAM_MAG};
    };
    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {WEST_SAM_MAG};
        items[] += {WEST_BASE_MEDICAL};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
        items[] += {WEST_BASE_MEDICAL,"ACE_RangeTable_82mm"};
        backpack[] = {"B_Mortar_01_weapon_F"}; /// randomized
    };
    class B_support_AMort_F: B_Soldier_F {// Assistant Mortar
        backpack[] = {"B_Mortar_01_support_F"}; /// randomized
        linkedItems[] += {"ACE_Vector"};
        items[] += {WEST_BASE_MEDICAL};
    };
    class B_spotter_F {// Spotter
        uniform[] = {"rhs_uniform_cu_ocp"};  /// randomized
        vest[] = {"rhsusf_iotv_ocp"}; /// randomized
        headgear[] = {"rhs_Booniehat_ocp","rhsusf_ach_helmet_ESS_ocp"}; /// randomized
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {WEST_BASE_LINKED,"ACE_Vector"};
        attachments[] = {WEST_RIFLE_ATTACHMENTS};
        backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    };
    class B_sniper_F: B_spotter_F {// Sniper
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACE_RangeCard"};
        linkedItems[] = {WEST_BASE_LINKED};
        attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15A"};
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
        uniform[] = {"rhs_uniform_cu_ocp"};  // randomized
        vest[] = {"rhsusf_iotv_ocp"}; // randomized
        headgear[] = {"rhsusf_cvc_green_ess"}; /// randomized
        backpack[] = {"B_Carryall_mcamo"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_CREW_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS};
        backpackItems[] = {"ACE_key_west","ACRE_PRC117F"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,"Binocular"};
        attachments[] = {WEST_RIFLE_ATTACHMENTS};
    };
    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACRE_PRC148","ACE_key_west"};
        vest[] = {"rhsusf_iotv_ocp_repair"}; /// randomized
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
    };
    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        headgear[] = {"rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ESS_ocp"};
        backpack[] = {"B_Carryall_mcamo"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] += {"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class B_engineer_F: B_soldier_exp_F {// Mine Specialist
        magazines[] = {WEST_CARBINE_MAG,WEST_CREW_GRENADES,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

    class fallback: B_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
