//Author: BWMF
//Description: German: G36 - Tropen Camo

class ind_f {
  //Rifle
  #define IND_RIFLE "hlc_rifle_G36KV"
  #define IND_RIFLE_MAG "hlc_30rnd_556x45_EPR_G36:10","hlc_30rnd_556x45_Tracers_G36:4"
  #define IND_RIFLE_ATTACHMENTS "rhsusf_acc_eotech_552"
  #define IND_AAR_ATTACHMENTS IND_RIFLE_ATTACHMENTS
  //GL Rifle
  #define IND_GLRIFLE "hlc_rifle_G36VAG36"
  #define IND_GLRIFLE_MAG IND_RIFLE_MAG
  #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:4"
  #define IND_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:12"
  #define IND_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define IND_CARBINE "hlc_rifle_G36C"
  #define IND_CARBINE_MAG IND_RIFLE_MAG
  // AR
  #define IND_AR "rhs_weap_m249_pip_S_para"
  #define IND_AR_MAG "rhsusf_200Rnd_556x45_soft_pouch:5"
  // AT
  #define IND_AT "rhs_weap_M136"
  #define IND_AT_MAG "rhs_m136_mag"
  // MMG
  #define IND_MMG "rhs_weap_m240B"
  #define IND_MMG_MAG "rhsusf_100Rnd_762x51:5"
  // Sniper Rifle
  #define IND_SNIPER "BWA3_G28_Standard"
  #define IND_SNIPER_MAG "BWA3_10Rnd_762x51_G28:10"
  // Spotter Rifle
  #define IND_SPOTTER "BWA3_G36"
  #define IND_SPOTTER_MAG "BWA3_30Rnd_556x45_G36:8"
  // SMG
  #define IND_SMG "hlc_smg_mp5a4"
  #define IND_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  // Pistol
  #define IND_PISTOL "BWA3_P8"
  #define IND_PISTOL_MAG "BWA3_15Rnd_9x19_P8:3"

  class Car {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class I_Soldier_F {// rifleman
    uniform[] = {"BWA3_Uniform_Tropen"};
    vest[] = {"BWA3_Vest_Tropen", "BWA3_Vest_Rifleman1_Tropen"};
    headgear[] = {"BWA3_M92_Tropen"};
    backpack[] = {"BWA3_AssaultPack_Tropen"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {IND_RIFLE};
    magazines[] = {IND_RIFLE_MAG,IND_BASE_GRENADES};
    items[] = {IND_BASE_TOOLS};
    linkedItems[] = {IND_BASE_LINKED};
    attachments[] = {IND_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: I_Soldier_F {// carbine-man
    weapons[] = {IND_CARBINE};
    magazines[] = {IND_CARBINE_MAG,IND_BASE_GRENADES};
  };
  class I_Soldier_TL_F: I_Soldier_F {// FTL
    weapons[] = {IND_GLRIFLE};
    magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_LEADER_GRENADES};
    items[] += {IND_LEADER_TOOLS};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
  };
  class I_Soldier_SL_F: I_Soldier_TL_F {// SL
    vest[] = {"BWA3_Vest_Leader_Tropen"};
    handguns[] = {IND_PISTOL};
    magazines[] += {IND_PISTOL_MAG};
    linkedItems[] += {IND_BASE_LINKED,IND_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class I_officer_F: I_Soldier_SL_F {// CO and DC
    items[] += {RADIO_LR};
  };
  class I_soldier_UAV_F: I_Soldier_F {
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_uavterminal"};
  };
  class I_Soldier_AR_F: I_Soldier_F {// AR
    vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
    weapons[] = {IND_AR};
    magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
    handguns[] = {IND_PISTOL};
  };
  class I_Soldier_AAR_F: I_Soldier_F {// AAR
    backpackItems[] += {IND_AR_MAG};
    attachments[] = {IND_AAR_ATTACHMENTS};
    linkeditems[] += {BINOS};
  };
  class I_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    magazines[] += {IND_AT_MAG};
    launchers[] = {IND_AT};
  };
  class I_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {IND_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: I_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class I_support_MG_F: I_Soldier_AR_F {// MMG
    weapons[] = {IND_MMG};
    magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
    attachments[] = {};
  };
  class I_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpackItems[] += {IND_MMG_MAG};
  };
  class I_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("BWA3_PatrolPack_Tropen", IND_MAT_MAG)
    launchers[] = {IND_MAT};
    secondaryAttachments[] = {IND_MAT_OPTIC};
  };
  class I_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("BWA3_PatrolPack_Tropen", IND_MAT_MAG)
  };
  class I_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("BWA3_PatrolPack_Tropen", IND_SAM_MAG)
    launchers[] = {IND_SAM};
  };
  class I_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("BWA3_PatrolPack_Tropen", IND_SAM_MAG2)
  };
  class I_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("I_Mortar_01_weapon_F")
  };
  class I_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("I_Mortar_01_support_F")
  };
  class I_spotter_F: Fic_Spotter {// Spotter
    uniform[] = {"BWA3_Uniform_Ghillie_idz_Tropen"};
    vest[] = {"BWA3_Vest_Marksman_Tropen"};
    headgear[] = {};
    weapons[] = {IND_SPOTTER};
    magazines[] = {IND_SPOTTER_MAG,IND_BASE_GRENADES};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {IND_LEADER_LINKED};
    attachments[] = {"BWA3_optic_ZO4x30"};
  };
  class I_sniper_F: I_spotter_F {// Sniper
    weapons[] = {IND_SNIPER};
    magazines[] = {IND_SNIPER_MAG,IND_BASE_GRENADES};
    items[] = {IND_BASE_TOOLS,BASE_MEDICAL,"ACE_RangeCard"};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
    attachments[] = {"BWA3_optic_ZO4x30"};
  };
  class I_Helipilot_F {// Pilot
    uniform[] = {"BWA3_Uniform_Crew_Tropen"};
    vest[] = {"BWA3_Vest_Rifleman1_Tropen"};
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
    backpack[] = {"BWA3_AssaultPack_Tropen"};
    weapons[] = {IND_SMG};
    magazines[] = {IND_SMG_MAG,CREW_GRENADES};
    items[] = {BASE_MEDICAL,IND_BASE_TOOLS,IND_LEADER_TOOLS,RADIO_MR};
    backpackItems[] += {KEY_IND,RADIO_LR};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
  };
  class I_helicrew_F: I_Helipilot_F {}; // Pilot
  class I_crew_F: Fic_Soldier_Carbine {// Crew
    uniform[] = {"BWA3_Uniform_Crew_Tropen"};
    vest[] = {"BWA3_Vest_Rifleman1_Tropen"};
    headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
    magazines[] = {IND_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_IND,RADIO_LR};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class I_Soldier_repair_F: I_crew_F {// Repair Specialist
    uniform[] = {"BWA3_Uniform2_idz_Tropen"};
    backpack[] = {"BWA3_PatrolPack_Tropen"};
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_IND};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
  };
  class Fic_Eng: I_soldier_repair_F {
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class I_soldier_exp_F: Fic_Eng {// Explosive Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class I_engineer_F: Fic_Eng {// Mine Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: I_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
