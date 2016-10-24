//Author: BWMF
//Description: German: G36 - Flecktarn Camo

class blu_f {
  //Rifle
  #define WEST_RIFLE "hlc_rifle_G36KV"
  #define WEST_RIFLE_MAG "hlc_30rnd_556x45_EPR_G36:10","hlc_30rnd_556x45_Tracers_G36:4"
  #define WEST_RIFLE_ATTACHMENTS "rhsusf_acc_eotech_552"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "hlc_rifle_G36VAG36"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:4"
  #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:12"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define WEST_CARBINE "hlc_rifle_G36C"
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "rhs_weap_m249_pip_S_para"
  #define WEST_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:5"
  // AT
  #define WEST_AT "rhs_weap_M136"
  #define WEST_AT_MAG "rhs_m136_mag"
  // MMG
  #define WEST_MMG "rhs_weap_m240B"
  #define WEST_MMG_MAG "rhsusf_100Rnd_762x51:5"
  // Sniper Rifle
  #define WEST_SNIPER "BWA3_G28_Standard"
  #define WEST_SNIPER_MAG "BWA3_10Rnd_762x51_G28:10"
  // Spotter Rifle
  #define WEST_SPOTTER "BWA3_G36"
  #define WEST_SPOTTER_MAG "BWA3_30Rnd_556x45_G36:8"
  // SMG
  #define WEST_SMG "hlc_smg_mp5a4"
  #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  // Pistol
  #define WEST_PISTOL "BWA3_P8"
  #define WEST_PISTOL_MAG "BWA3_15Rnd_9x19_P8:3"

  class Car {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE,WEST_AT_MAG};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class B_Soldier_F {// rifleman
    uniform[] = {"BWA3_Uniform_Fleck","BWA3_Uniform2_Fleck"};
    vest[] = {"BWA3_Vest_Fleck","BWA3_Vest_Rifleman1_Fleck"};
    headgear[] = {"BWA3_OpsCore_Fleck","BWA3_OpsCore_Fleck_Patch","BWA3_OpsCore_Fleck_Camera","BWA3_OpsCore_Schwarz"};
    backpack[] = {"BWA3_Kitbag_Fleck"};
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
    vest[] = {"BWA3_Vest_Leader_Fleck","BWA3_Vest_Grenadier_Fleck"};
    weapons[] = {WEST_GLRIFLE};
    magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_LEADER_GRENADES};
    items[] += {WEST_LEADER_TOOLS};
    linkedItems[] += {WEST_LEADER_LINKED,BINOS};
  };
  class B_Soldier_SL_F: B_Soldier_TL_F {// SL
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
    vest[] = {"BWA3_Vest_Autorifleman_Fleck"};
    weapons[] = {WEST_AR};
    magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    handguns[] = {WEST_PISTOL};
  };
  class B_Soldier_AAR_F: B_Soldier_F {// AAR
    backpackItems[] += {WEST_AR_MAG};
    attachments[] = {WEST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    magazines[] += {WEST_AT_MAG};
    launchers[] = {WEST_AT};
  };
  class B_medic_F: Fic_Soldier_Carbine {// Medic
    vest[] = {"BWA3_Vest_Medic_Fleck"};
    backpack[] = {"BWA3_Kitbag_Fleck_Medic"};
    magazines[] = {WEST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: B_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class B_support_MG_F: B_Soldier_AR_F {// MMG
    weapons[] = {WEST_MMG};
    magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    attachments[] = {};
  };
  class B_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpackItems[] += {WEST_MMG_MAG};
  };
  class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("BWA3_Carryall_Fleck", WEST_MAT_MAG)
    launchers[] = {WEST_MAT};
    secondaryAttachments[] = {WEST_MAT_OPTIC};
  };
  class B_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("BWA3_Carryall_Fleck", WEST_MAT_MAG)
  };
  class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("BWA3_Carryall_Fleck", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class B_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("BWA3_Carryall_Fleck", WEST_SAM_MAG2)
  };
  class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class B_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class B_spotter_F: Fic_Spotter {// Spotter
    uniform[] = {"BWA3_Uniform_Ghillie_Fleck"};
    vest[] = {"BWA3_Vest_Marksman_Fleck"};
    headgear[] = {};
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
    attachments[] = {"BWA3_optic_Shortdot","BWA3_acc_VarioRay_irlaser"};
  };
  class B_Helipilot_F {// Pilot
    uniform[] = {"U_B_HeliPilotCoveralls"};
    backpack[] = {"B_AssaultPack_blk"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,WEST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class B_helicrew_F: B_Helipilot_F {}; // Pilot
  class B_crew_F: Fic_Soldier_Carbine {// Crew
    uniform[] = {"BWA3_Uniform_Crew_Fleck"};
    headgear[] = {"BWA3_CrewmanKSK_Fleck_Headset"};
    backpack[] = {"BWA3_Kitbag_Fleck"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class B_soldier_repair_F: B_crew_F {// Repair Specialist
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class Fic_eng: B_soldier_repair_F {
    backpack[] = {"BWA3_PatrolPack_Fleck"};
    backpackItems[] = {};
    items[] += {BASE_ENG};
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
