//Author: BWMF
//Description: Red Coats

class blu_f {
    //Rifle
    #define WEST_RIFLE "UK3CB_BAF_L85A2","UK3CB_BAF_L85A2_EMAG","UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L85A2_RIS_AFG"
    #define WEST_RIFLE_MAG "UK3CB_BAF_30Rnd:8","UK3CB_BAF_30Rnd_T:2"
    #define WEST_RIFLE_ATTACHMENTS "UK3CB_BAF_Eotech","UK3CB_BAF_LLM_IR_Black"
    //GL Rifle
    #define WEST_GLRIFLE "UK3CB_BAF_L85A2_UGL_HWS","UK3CB_BAF_L85A2_UGL"
    #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
    #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
    #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:8"
    #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
    //Carbine
    #define WEST_CARBINE "UK3CB_BAF_L85A2","UK3CB_BAF_L85A2_EMAG","UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L85A2_RIS_AFG"
    #define WEST_CARBINE_MAG WEST_RIFLE_MAG
    // AR
    #define WEST_AR "UK3CB_BAF_L110A2"
    #define WEST_AR_MAG "UK3CB_BAF_100Rnd:4"
    // AT
    #define WEST_AT "launch_NLAW_F"
    // MMG
    #define WEST_MMG "UK3CB_BAF_L7A2"
    #define WEST_MMG_MAG "UK3CB_BAF_75Rnd:6"
    // MAT
    #define WEST_MAT "launch_B_Titan_short_F"
    #define WEST_MAT_MAG "Titan_AT:3"
    // SAM
    #define WEST_SAM "rhs_weap_fim92"
    #define WEST_SAM_MAG "rhs_fim92_mag:2"
    // Sniper Rifle
    #define WEST_SNIPER "UK3CB_BAF_L82A1"
    #define WEST_SNIPER_MAG "UK3CB_BAF_10Rnd_127x99mm:4"
    // Spotter Rifle
    #define WEST_SPOTTER "UK3CB_BAF_L86A3"
    #define WEST_SPOTTER_MAG "UK3CB_BAF_30Rnd:8"
    // SMG
    #define WEST_SMG "UK3CB_BAF_L91A1"
    #define WEST_SMG_MAG "UK3CB_BAF_30Rnd_9mm:6"
    // Pistol
    #define WEST_PISTOL "UK3CB_BAF_L131A1"
    #define WEST_PISTOL_MAG "UK3CB_BAF_17Rnd_9mm:3"
    // GEAR
    #define WEST_BASE_MEDICAL "ACE_fieldDressing:3","ACE_morphine"
    #define WEST_MEDIC_MEDICAL "ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"
    #define WEST_BASE_TOOLS "ACRE_PRC343","ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
    #define WEST_LEADER_TOOLS "ACE_microDAGR","ACE_key_west"
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
        uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_TShirt","UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};  /// randomized
        vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A","UK3CB_BAF_V_Osprey_Rifleman_B","UK3CB_BAF_V_Osprey_Rifleman_C","UK3CB_BAF_V_Osprey_Rifleman_D","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_V_Osprey_Rifleman_F"}; /// randomized
        headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D","UK3CB_BAF_H_Mk7_Camo_E","UK3CB_BAF_H_Mk7_Camo_F","UK3CB_BAF_H_Mk7_Camo_ESS_A","UK3CB_BAF_H_Mk7_Camo_ESS_B","UK3CB_BAF_H_Mk7_Camo_ESS_C","UK3CB_BAF_H_Mk7_Camo_ESS_D","UK3CB_BAF_H_Mk7_Camo_CESS_A","UK3CB_BAF_H_Mk7_Camo_CESS_B","UK3CB_BAF_H_Mk7_Camo_CESS_C"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"}; /// randomized
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
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_B","UK3CB_BAF_B_Bergen_MTP_Radio_L_A","UK3CB_BAF_B_Bergen_MTP_PointMan_L_A"}; /// randomized
        weapons[] = {WEST_GLRIFLE};
        magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_LEADER_GRENADES};
        items[] += {WEST_LEADER_TOOLS};
        linkedItems[] += {WEST_LEADER_LINKED,"Binocular"};
    };
    class B_Soldier_SL_F: B_Soldier_TL_F {// SL
        vest[] = {"UK3CB_BAF_V_Osprey_SL_D","UK3CB_BAF_V_Osprey_SL_C","UK3CB_BAF_V_Osprey_SL_B","UK3CB_BAF_V_Osprey_SL_A"}; /// randomized
        headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D","UK3CB_BAF_H_Mk7_Camo_E","UK3CB_BAF_H_Mk7_Camo_F","UK3CB_BAF_H_Mk7_Camo_ESS_A","UK3CB_BAF_H_Mk7_Camo_ESS_B","UK3CB_BAF_H_Mk7_Camo_ESS_C","UK3CB_BAF_H_Mk7_Camo_ESS_D","UK3CB_BAF_H_Mk7_Camo_CESS_A","UK3CB_BAF_H_Mk7_Camo_CESS_B","UK3CB_BAF_H_Mk7_Camo_CESS_C"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_L_A","UK3CB_BAF_B_Bergen_MTP_SL_H_A","UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"}; /// randomized
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
        weapons[] = {WEST_AR};
        magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
        handguns[] = {WEST_PISTOL}; /// randomized
    };
    class B_Soldier_AAR_F: B_Soldier_F {// AAR
        backpackItems[] += {WEST_AR_MAG};
        linkedItems[] += {"Binocular"};
    };
    class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
        launchers[] = {WEST_AT}; /// randomized
    };
    class B_medic_F: Fic_Soldier_Carbine {// Medic
        vest[] = {"UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_V_Osprey_Medic_B","UK3CB_BAF_V_Osprey_Medic_C","UK3CB_BAF_V_Osprey_Medic_D"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A","UK3CB_BAF_B_Bergen_MTP_Medic_L_B"}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_MEDIC_GRENADES};
        backpackItems[] = {WEST_MEDIC_MEDICAL};
    };
    class B_support_MG_F: B_Soldier_F {// MMG
        vest[] = {"UK3CB_BAF_V_Osprey_MG_A","UK3CB_BAF_V_Osprey_MG_B"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        weapons[] = {WEST_MMG};
        magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
        handguns[] = {WEST_PISTOL}; /// randomized
        attachments[] = {};
    };
    class B_Soldier_A_F: B_Soldier_F {// MMG Spotter/Ammo Bearer
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        backpackItems[] += {WEST_MMG_MAG};
        linkedItems[] += {"ACE_Vector"};
    };
    class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        launchers[] = {WEST_MAT}; /// randomized
        items[] += {WEST_BASE_MEDICAL};
        backpackItems[] = {WEST_MAT_MAG};
    };
    class B_Soldier_AAT_F: B_Soldier_F {// MAT Spotter/Ammo Bearer
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        backpackItems[] = {WEST_MAT_MAG};
        linkedItems[] += {"ACE_Vector"};
        items[] += {WEST_BASE_MEDICAL};
    };
    class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        launchers[] = {WEST_SAM}; /// randomized
        items[] += {WEST_BASE_MEDICAL};
        backpackItems[] = {WEST_SAM_MAG};
    };
    class B_Soldier_AAA_F: B_Soldier_F {// SAM Spotter/Ammo Bearer
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"}; /// randomized
        backpackItems[] = {WEST_SAM_MAG};
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
        uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};  /// randomized
        vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"}; /// randomized
        headgear[] = {"UK3CB_BAF_H_Mk7_Scrim_ESS_A","UK3CB_BAF_H_Mk7_Scrim_ESS_B","UK3CB_BAF_H_Mk7_Scrim_ESS_C"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"};
        weapons[] = {WEST_SPOTTER}; /// randomized
        magazines[] = {WEST_SPOTTER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACRE_PRC148","ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
        linkedItems[] = {WEST_BASE_LINKED,"ACE_Vector"};
        attachments[] = {WEST_RIFLE_ATTACHMENTS};
    };
    class B_sniper_F: B_spotter_F {// Sniper
        weapons[] = {WEST_SNIPER}; /// randomized
        magazines[] = {WEST_SNIPER_MAG,WEST_BASE_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACE_RangeCard"};
        attachments[] = {"UK3CB_BAF_SB31250_Ghillie"};
    };
    class B_Helipilot_F {// Pilot
        uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};  /// randomized
        backpack[] = {"B_AssaultPack_blk"};
        vest[] = {"UK3CB_BAF_V_Pilot_A"}; /// randomized
        headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"}; /// randomized
        weapons[] = {WEST_SMG}; /// randomized
        magazines[] = {WEST_SMG_MAG,WEST_CREW_GRENADES};
        backpackItems[] = {"ACE_key_west","ACRE_PRC117F"};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS,"ACRE_PRC148"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
    };
    class B_helicrew_F: B_Helipilot_F { // Pilot
    };
    class B_crew_F {// Crew
        uniform[] = {"UK3CB_BAF_U_CrewmanCoveralls_RTR"};  // randomized
        vest[] = {"UK3CB_BAF_V_Osprey","UK3CB_BAF_V_Osprey_Belt_A"}; // randomized
        headgear[] = {"UK3CB_BAF_H_CrewHelmet_A","UK3CB_BAF_H_CrewHelmet_ESS_A"}; /// randomized
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"};
        weapons[] = {WEST_CARBINE}; /// randomized
        magazines[] = {WEST_CARBINE_MAG,WEST_CREW_GRENADES};
        items[] = {WEST_BASE_MEDICAL,WEST_BASE_TOOLS};
        backpackItems[] += {"ACE_key_west","ACRE_PRC117F"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,"Binocular"};
    };
    class B_soldier_repair_F: B_crew_F {// Repair Specialist
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
        backpackItems[] = {"Toolkit","ACRE_PRC148","ACE_key_west"};
        vest[] = {"UK3CB_BAF_V_Osprey","UK3CB_BAF_V_Osprey_Belt_A"}; // randomized
        items[] += {"ACRE_PRC343","ACE_MapTools"};
        linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
    };
    class B_soldier_exp_F: B_soldier_repair_F {// Explosive Specialist
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_H_A"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] += {"DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"};
    };
    class B_engineer_F: B_soldier_repair_F {// Mine Specialist
        backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_H_A"};
        backpackItems[] = {"Toolkit","ACE_DefusalKit","ACE_Clacker","MineDetector"};
        magazines[] += {"ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"};
    };

    class fallback: B_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
