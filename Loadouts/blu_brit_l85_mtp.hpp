//Author: BWMF
//Description: British: L86 - Multi-Terrain Pattern

class blu_f {
  //Rifle
  #define WEST_RIFLE "UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L85A2_RIS_AFG"
  #define WEST_RIFLE_MAG "30Rnd_556x45_Stanag:10","30Rnd_556x45_Stanag_Tracer_Red:4"
  #define WEST_RIFLE_ATTACHMENTS "rhsusf_acc_eotech_552","acc_flashlight"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "UK3CB_BAF_L85A2_UGL_HWS","UK3CB_BAF_L85A2_UGL"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:4"
  #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:12"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define WEST_CARBINE WEST_RIFLE
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "UK3CB_BAF_L110A1"
  #define WEST_AR_MAG "UK3CB_BAF_556_200Rnd_T:5"
  // AT
  #define WEST_AT "rhs_weap_M136"
  // MMG
  #define WEST_MMG "rhs_weap_m240B"
  #define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
  #define WEST_MMG_MAG2 "rhsusf_100Rnd_762x51:4"
  // Sniper Rifle
  #define WEST_SNIPER "UK3CB_BAF_L135A1"
  #define WEST_SNIPER_MAG "UK3CB_BAF_127_10Rnd:5"
  // Spotter Rifle
  #define WEST_SPOTTER "UK3CB_BAF_L86A3"
  #define WEST_SPOTTER_MAG WEST_RIFLE_MAG
  // SMG
  #define WEST_SMG "hlc_smg_mp5a4"
  #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  // Pistol
  #define WEST_PISTOL "UK3CB_BAF_L131A1"
  #define WEST_PISTOL_MAG "UK3CB_BAF_9_17Rnd:3"

  class Car {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class B_Soldier_F {// rifleman
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
    vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A","UK3CB_BAF_V_Osprey_Rifleman_B","UK3CB_BAF_V_Osprey_Rifleman_C","UK3CB_BAF_V_Osprey_Rifleman_D","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_V_Osprey_Rifleman_F"};
    headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D","UK3CB_BAF_H_Mk7_Camo_E","UK3CB_BAF_H_Mk7_Camo_F","UK3CB_BAF_H_Mk7_Camo_ESS_A","UK3CB_BAF_H_Mk7_Camo_ESS_B","UK3CB_BAF_H_Mk7_Camo_ESS_C","UK3CB_BAF_H_Mk7_Camo_ESS_D","UK3CB_BAF_H_Mk7_Camo_CESS_A","UK3CB_BAF_H_Mk7_Camo_CESS_B","UK3CB_BAF_H_Mk7_Camo_CESS_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {WEST_RIFLE};
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
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_B","UK3CB_BAF_B_Bergen_MTP_Radio_L_A","UK3CB_BAF_B_Bergen_MTP_PointMan_L_A"};
    weapons[] = {WEST_GLRIFLE};
    magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_LEADER_GRENADES};
    items[] += {WEST_LEADER_TOOLS};
    linkedItems[] += {WEST_LEADER_LINKED,BINOS};
  };
  class B_Soldier_SL_F: B_Soldier_TL_F {// SL
    vest[] = {"UK3CB_BAF_V_Osprey_SL_D","UK3CB_BAF_V_Osprey_SL_C","UK3CB_BAF_V_Osprey_SL_B","UK3CB_BAF_V_Osprey_SL_A"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_L_A","UK3CB_BAF_B_Bergen_MTP_SL_H_A","UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"};
    handguns[] = {WEST_PISTOL};
    magazines[] += {WEST_PISTOL_MAG};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class B_officer_F: B_Soldier_SL_F {// CO and DC
    items[] += {RADIO_LR};
  };
  class B_soldier_UAV_F: B_Soldier_F {
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    linkedItems[] += {"B_uavterminal"};
  };
  class B_Soldier_AR_F: B_Soldier_F {// AR
    weapons[] = {WEST_AR};
    magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    handguns[] = {WEST_PISTOL};
  };
  class B_Soldier_AAR_F: B_Soldier_F {// AAR
    vest[] = {"UK3CB_BAF_V_Osprey_MG_A","UK3CB_BAF_V_Osprey_MG_B"};
    backpackItems[] += {WEST_AR_MAG};
    attachments[] = {WEST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    launchers[] = {WEST_AT};
  };
  class B_medic_F: Fic_Soldier_Carbine {// Medic
    vest[] = {"UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_V_Osprey_Medic_B","UK3CB_BAF_V_Osprey_Medic_C","UK3CB_BAF_V_Osprey_Medic_D"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A","UK3CB_BAF_B_Bergen_MTP_Medic_L_B"};
    magazines[] = {WEST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: B_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class B_support_MG_F: B_Soldier_AR_F {// MMG
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A"};
    weapons[] = {WEST_MMG};
    magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    attachments[] = {};
  };
  class B_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B"};
    backpackItems[] += {WEST_MMG_MAG2};
  };
  class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B", WEST_MAT_MAG)
    launchers[] = {WEST_MAT};
    secondaryAttachments[] = {WEST_MAT_OPTIC};
  };
  class B_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B", WEST_MAT_MAG)
  };
  class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class B_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C", WEST_SAM_MAG2)
  };
  class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class B_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class B_spotter_F: Fic_Spotter {// Spotter
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
    headgear[] = {"UK3CB_BAF_H_Mk7_Scrim_ESS_A","UK3CB_BAF_H_Mk7_Scrim_ESS_B","UK3CB_BAF_H_Mk7_Scrim_ESS_C"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"};
    weapons[] = {WEST_SPOTTER};
    magazines[] = {WEST_SPOTTER_MAG,WEST_BASE_GRENADES};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {WEST_LEADER_LINKED};
  };
  class B_sniper_F: B_spotter_F {// Sniper
    weapons[] = {WEST_SNIPER};
    magazines[] = {WEST_SNIPER_MAG,WEST_BASE_GRENADES};
    items[] = {WEST_BASE_TOOLS,"ACE_RangeCard"};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {"UK3CB_BAF_SB31250_Ghillie"};
  };
  class B_Helipilot_F {// Pilot
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
    backpack[] = {"B_AssaultPack_blk"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,WEST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class B_helicrew_F: B_Helipilot_F {}; // Pilot
  class B_crew_F: Fic_Soldier_Carbine {// Crew
    uniform[] = {"UK3CB_BAF_U_CrewmanCoveralls_RTR"};
    vest[] = {"UK3CB_BAF_V_Osprey","UK3CB_BAF_V_Osprey_Belt_A"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A","UK3CB_BAF_H_CrewHelmet_ESS_A"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class B_soldier_repair_F: B_crew_F {// Repair Specialist
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class Fic_eng: B_soldier_repair_F {
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class B_soldier_exp_F: Fic_eng {// Explosive Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class B_engineer_F: Fic_eng {// Mine Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: B_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
