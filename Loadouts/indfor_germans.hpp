//Author: BWMF
//Description: German Tropen Camo (WIP)

class ind_f {
    //Rifle
    #define IND_RIFLE "BWA3_G36"
    #define IND_RIFLE_MAG "BWA3_30Rnd_556x45_G36:8","BWA3_30Rnd_556x45_G36_Tracer:2"
    //GL Rifle
    #define IND_GLRIFLE "BWA3_G36_AG"
    #define IND_GLRIFLE_MAG "BWA3_30Rnd_556x45_G36:8","BWA3_30Rnd_556x45_G36_Tracer:2"
    #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2", "UGL_FlareYellow_F:4"
    #define IND_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    //Carbine
    #define IND_CARBINE "BWA3_G36K"
    #define IND_CARBINE_MAG "BWA3_30Rnd_556x45_G36:8","BWA3_30Rnd_556x45_G36_Tracer:2"
    // AR
    #define IND_AR "BWA3_G36_LMG"
    #define IND_AR_MAG "BWA3_100Rnd_556x45_G36:4", "BWA3_100Rnd_556x45_G36_Tracer:4"
    #define IND_AR_MAG2 "BWA3_100Rnd_556x45_G36_Tracer:4"
    // AT (RGW90 is very light)
    #define IND_AT "BWA3_RGW90"
    #define IND_AT_MAG "BWA3_RGW90_HH:1"
    // MMG
    #define IND_MMG "BWA3_MG5"
    #define IND_MMG_MAG "BWA3_120Rnd_762x51:5"
    // MAT
    #define IND_MAT "rhs_weap_rpg7"
    #define IND_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1"
    // SAM
    #define IND_SAM "rhs_weap_igla"
    #define IND_SAM_MAG "rhs_mag_9k38_rocket:2"
    // Sniper Rifle
    #define IND_SNIPER "BWA3_G82"
    #define IND_SNIPER_MAG "BWA3_10Rnd_127x99_G82:8"
    // Spotter Rifle
    #define IND_SPOTTER "BWA3_G28_Standard"
    #define IND_SPOTTER_MAG "BWA3_10Rnd_762x51_G28:8"
    // SMG
    #define IND_SMG "BWA3_MP7"
    #define IND_SMG_MAG "BWA3_40Rnd_46x30_MP7:6"
    // Pistol
    #define IND_PISTOL "BWA3_P8"
    #define IND_PISTOL_MAG "BWA3_15Rnd_9x19_P8:3"

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
        uniform[] = {"BWA3_Uniform_Tropen"};
        vest[] = {"BWA3_Vest_Tropen", "BWA3_Vest_Rifleman1_Tropen"};
        headgear[] = {"BWA3_M92_Tropen"};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        backpackItems[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs"};
        weapons[] = {IND_RIFLE};
        launchers[] = {};
        handguns[] = {};
        magazines[] = {IND_RIFLE_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        items[] = {"ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ACE_MapTools"};
        attachments[] = {"optic_Aco"};
    };
    class I_officer_F: I_Soldier_F {// CO and DC
        vest[] = {"BWA3_Vest_Leader_Tropen"};
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_PISTOL_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL};
        linkedItems[] += {"ACE_Vector","ItemGPS"};
        backpackItems[] += {"ACE_key_indp","chemlight_green:2"};
        items[] = {"ACRE_PRC148","ACE_microDAGR","ACRE_PRC343","ACE_MapTools"};
    };
    class I_Soldier_SL_F: I_Officer_F {// SL
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemGPS","rhsusf_ANPVS_14","ACE_microDAGR","ACE_Vector"};
        items[] = {"ACRE_PRC148","ACE_microDAGR""ACRE_PRC343","ACE_MapTools"};
        backpackItems[] = {"ACE_fieldDressing:4","ACE_morphine","ACE_IR_Strobe_item","ACE_earplugs","chemlight_green:2"};
    };
    class I_soldier_UAV_F: I_Soldier_F {
        backpack[] = {"I_UAV_01_backpack_F"};
        linkedItems[] += {"I_uavterminal"};
    };
    class I_Soldier_TL_F: I_Soldier_F {// FTL
        weapons[] = {IND_GLRIFLE};
        magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,"BWA3_DM51A1:2","SmokeShell:2","BWA3_DM32_Orange:2"};
        items[] = {"ACRE_PRC343","ACE_microDAGR","ACE_MapTools"};
        linkedItems[] += {"ACE_microDAGR","Binocular"};
        backpackItems[] += {"ACE_key_indp","chemlight_green:2"};
    };
    class I_Soldier_AR_F: I_Soldier_F {// AR
        vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
        weapons[] = {IND_AR};
        magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL};
        attachments[] = {"BWA3_optic_RSAS"};
    };
    class I_Soldier_AAR_F: I_Soldier_F {// AAR
        backpackItems[] += {IND_AR_MAG2};
        // attachments[] = {"HLC_Optic_1p29"}; //todo aar optic
        linkeditems[] += {"Binocular"};
    };
    class I_Soldier_LAT_F: I_Soldier_F {// RAT
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,IND_AT_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        launchers[] = {IND_AT};
    };
    class I_medic_F: I_Soldier_F {// Medic
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"SmokeShell:6"};
        vest[] = {"BWA3_Vest_Medic_Tropen"};
        backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
        backpackItems[] = {"ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14","ACE_earplugs"};
    };
    class I_support_MG_F: I_Soldier_F {// MMG
        vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
        weapons[] = {IND_MMG};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        handguns[] = {IND_PISTOL};
        attachments[] = {};
    };
    class I_Soldier_A_F: I_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        backpackItems[] += {IND_MMG_MAG};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_soldier_AT_F: I_Soldier_F {// MAT Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"BWA3_TacticalPack_Tropen"};
        magazines[] = {IND_CARBINE_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        launchers[] = {IND_MAT};
        backpackItems[] += {IND_MAT_MAG};
    };
    class I_Soldier_AAT_F: I_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"BWA3_TacticalPack_Tropen"};
        backpackItems[] += {IND_MAT_MAG};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_soldier_AA_F: I_Soldier_F {// SAM Gunner
        weapons[] = {IND_CARBINE};
        backpack[] = {"BWA3_TacticalPack_Tropen"};
        magazines[] = {IND_CARBINE_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        launchers[] = {IND_SAM};
        backpackItems[] += {IND_SAM_MAG};
    };
    class I_Soldier_AAA_F: I_Soldier_F {// SAM Spotter/Ammo Bearer
        backpackItems[] = {IND_SAM_MAG};
        linkeditems[] += {"ACE_Vector"};
        backpack[] = {"BWA3_TacticalPack_Tropen"};
    };
    class I_support_Mort_F: I_Soldier_F {// Mortar Gunner
        weapons[] = {IND_CARBINE};
        magazines[] = {IND_CARBINE_MAG,"BWA3_DM51A1:2","SmokeShell:2"};
        items[] += {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs","ACE_RangeTable_82mm","ACE_MapTools"};
        backpack[] = {"I_Mortar_01_weapon_F"};
    };
    class I_support_AMort_F: I_Soldier_F {// Assistant Mortar
        backpack[] = {"I_Mortar_01_support_F"};
        linkeditems[] += {"ACE_Vector"};
    };
    class I_spotter_F {// Spotter
        uniform[] = {"BWA3_Uniform_Ghillie_idz_Tropen"};
        vest[] = {};
        headgear[] = {};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        weapons[] = {IND_SPOTTER};
        magazines[] = {IND_SPOTTER_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
        attachments[] = {"BWA3_optic_ZO4x30"};
    };
    class I_sniper_F {// Sniper
        uniform[] = {"BWA3_Uniform_Ghillie_idz_Tropen"};
        vest[] = {};
        headgear[] = {};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        weapons[] = {IND_SNIPER};
        magazines[] = {IND_SNIPER_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACE_earplugs", "ACRE_PRC343"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
        attachments[] = {"BWA3_optic_ZO4x30"};
    };
    class I_Helipilot_F {// Pilot
        uniform[] = {"BWA3_Uniform_Crew_Tropen"};
        vest[] = {"BWA3_Vest_Rifleman1_Tropen"};
        headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        weapons[] = {IND_SMG};
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC148","ACE_earplugs", "ACRE_PRC343"};
        backpackItems[] = {"ACE_key_indp","ACRE_PRC117F"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS"};
    };
    class I_crew_F {// Crew
        uniform[] = {"BWA3_Uniform_Crew_Tropen"};
        vest[] = {"BWA3_Vest_Rifleman1_Tropen"};
        headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
        backpack[] = {"BWA3_AssaultPack_Tropen"};
        weapons[] = {IND_SMG};
        magazines[] = {IND_SMG_MAG,"SmokeShell:2"};
        backpackItems[] = {"ACE_key_indp","ACRE_PRC117F"};
        items[] = {"ACE_fieldDressing:3","ACE_morphine","ACRE_PRC343","ACE_earplugs","ACE_MapTools"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","itemGPS","Binocular"};
    };
    class I_Soldier_repair_F: I_crew_F {// Repair Specialist
        uniform[] = {"BWA3_Uniform2_idz_Tropen"};
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACRE_PRC148"};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
    };
    class I_soldier_exp_F: I_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class I_engineer_F: I_soldier_repair_F {// Explosive Specialist
        backpack[] = {"B_Carryall_oli"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] = {IND_CARBINE_MAG,"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

    class fallback: I_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
