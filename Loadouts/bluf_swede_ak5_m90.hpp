//Author: BWMF
//Description: Swedish Feesh

class blu_f {
  //Rifle
  #define WEST_RIFLE "SAM_AK5C","SAM_AK5C_NOGRIP"
  #define WEST_RIFLE_MAG "SAM_30Rnd_556x45_Pmag:8","SAM_30Rnd_556x45_Pmag_T:2"
  #define WEST_RIFLE_ATTACHMENTS "rhsusf_acc_eotech_552","rhsusf_acc_anpeq15A"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "SAM_AK5C_GRT"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
  #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define WEST_CARBINE "SAM_AK5C","SAM_AK5C_NOGRIP"
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "SAM_KSP90C"
  #define WEST_AR_MAG "SAM_200Rnd_556x45:2"
  // AT
  #define WEST_AT "rhs_weap_M136"
  #define WEST_AT_MAG "rhs_m136_mag"
  // MMG
  #define WEST_MMG "SAM_KSP94"
  #define WEST_MMG_MAG "SAM_120Rnd_762x51:3","SAM_120Rnd_762x51_T:1"
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
    TransportItems[] = {WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL,WEST_BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class B_Soldier_F {// rifleman
    uniform[] = {"SAM_Crye_M90_uniform","SAM_Crye_M90_uniform_r"};
    vest[] = {"SAM_PlateCarrier"};
    headgear[] = {"SAM_HelmetIA_M90"};
    backpack[] = {"SAM_AssaultPack_rgr"};
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
    backpack[] = {"SAM_Kitbag_rgr"};
    magazines[] = {WEST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: B_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class B_support_MG_F: B_Soldier_AR_F {// MMG
    backpack[] = {"SAM_Kitbag_rgr"};
    weapons[] = {WEST_MMG};
    magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    attachments[] = {};
  };
  class B_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"SAM_Kitbag_rgr"};
    backpackItems[] += {WEST_MMG_MAG};
  };
  class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("SAM_GRG_Backpack_Heat", WEST_MAT_MAG)
    launchers[] = {WEST_MAT};
    secondaryAttachments[] = {WEST_MAT_OPTIC};
  };
  class B_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("SAM_GRG_Backpack_Heat", WEST_MAT_MAG)
  };
  class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_oli", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class B_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_oli", WEST_SAM_MAG2)
  };
  class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class B_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class B_spotter_F: Fic_Spotter {// Spotter
    uniform[] = {"SAM_Crye_M90_ghillie"};
    headgear[] = {"SAM_Watchcap_grn"};
    weapons[] = {WEST_SPOTTER};
    magazines[] = {WEST_SPOTTER_MAG,WEST_BASE_GRENADES};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {WEST_LEADER_LINKED};
  };
  class B_sniper_F: B_spotter_F {// Sniper
    weapons[] = {WEST_SNIPER};
    magazines[] = {WEST_SNIPER_MAG,WEST_BASE_GRENADES};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,"ACE_RangeCard"};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15A"};
  };
  class B_Helipilot_F {// Pilot
    uniform[] = {"U_B_HeliPilotCoveralls"};
    backpack[] = {"B_AssaultPack_blk"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class B_helicrew_F: B_Helipilot_F {}; // Pilot
  class B_crew_F: Fic_Soldier_Carbine {// Crew
    backpack[] = {"SAM_Kitbag_rgr_eng"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
  };
  class B_soldier_repair_F: B_crew_F {// Repair Specialist
    backpack[] = {"SAM_Kitbag_rgr_eng"};
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
