//Author: BWMF
//Description: Rebel: AK47 - Mixed Desert

class ind_f {
  //Rifle
  #define IND_RIFLE "rhs_weap_akm"
  #define IND_RIFLE_MAG "rhs_30Rnd_762x39mm:10","rhs_30Rnd_762x39mm_tracer:4"
  #define IND_RIFLE_ATTACHMENTS "rhs_acc_dtk1l"
  #define IND_AAR_ATTACHMENTS IND_RIFLE_ATTACHMENTS
  //GL Rifle
  #define IND_GLRIFLE "rhs_weap_akm_gp25"
  #define IND_GLRIFLE_MAG IND_RIFLE_MAG
  #define IND_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Red:4"
  #define IND_GLRIFLE_MAG_HE "rhs_VOG25:12"
  //Carbine
  #define IND_CARBINE "rhs_weap_akms"
  #define IND_CARBINE_MAG IND_RIFLE_MAG
  // AR
  #define IND_AR "hlc_rifle_rpk"
  #define IND_AR_MAG "hlc_75Rnd_762x39_m_rpk:7"
  // AT
  #define IND_AT "rhs_weap_rpg7"
  #define IND_AT_MAG "rhs_rpg7_PG7VL_mag:1"
  // MMG
  #define IND_MMG "rhs_weap_pkm"
  #define IND_MMG_MAG "rhs_100Rnd_762x54mmR:3","rhs_100Rnd_762x54mmR_green:2"
  // Sniper Rifle
  #define IND_SNIPER "rhs_weap_svdp"
  #define IND_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
  // Spotter Rifle
  #define IND_SPOTTER "rhs_weap_svdp"
  #define IND_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
  // SMG
  #define IND_SMG "hlc_rifle_aks74u"
  #define IND_SMG_MAG "hlc_30Rnd_545x39_B_AK:8"
  // Pistol
  #define IND_PISTOL "rhs_weap_makarov_pmm"
  #define IND_PISTOL_MAG "rhs_mag_9x18_12_57N181S:3"

  class Car {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE,IND_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class I_Soldier_F {// rifleman
    uniform[] = {"MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};
    vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","V_TacVest_brn","V_TacVest_khk"};
    headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"};
    backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","rhs_assault_umbts"};
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
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    weapons[] = {IND_GLRIFLE};
    magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,IND_LEADER_GRENADES};
    items[] += {IND_LEADER_TOOLS};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
  };
  class I_Soldier_SL_F: I_Soldier_TL_F {// SL
    backpack[] = {"B_Kitbag_rgr"};
    handguns[] = {IND_PISTOL};
    magazines[] += {IND_PISTOL_MAG};
    linkedItems[] += {IND_BASE_LINKED,IND_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class I_officer_F: I_Soldier_SL_F {// CO and DC
    items[] += {RADIO_LR};
  };
  class I_soldier_UAV_F: I_Soldier_F {
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_uavterminal"};
  };
  class I_Soldier_AR_F: I_Soldier_F {// AR
    weapons[] = {IND_AR};
    magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
    handguns[] = {IND_PISTOL};
    attachments[] = {};
  };
  class I_Soldier_AAR_F: I_Soldier_F {// AAR
    backpackItems[] += {IND_AR_MAG};
    attachments[] = {IND_AAR_ATTACHMENTS};
    linkeditems[] += {BINOS};
  };
  class I_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    backpack[] = {"rhs_rpg_empty"};
    magazines[] += {IND_AT_MAG};
    launchers[] = {IND_AT};
  };
  class I_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {IND_CARBINE_MAG,MEDIC_GRENADES};
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: I_Soldier_F {
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    linkedItems[] += {RANGE_FINDER};
  };
  class I_support_MG_F: I_Soldier_AR_F {// MMG
    backpack[] = {"B_Kitbag_rgr"};
    weapons[] = {IND_MMG};
    magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,IND_BASE_GRENADES};
  };
  class I_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] += {IND_MMG_MAG};
  };
  class I_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    LAUNCHER_GEAR("rhs_rpg_empty", EAST_MAT_MAG)
    launchers[] = {EAST_MAT};
    secondaryAttachments[] = {EAST_MAT_OPTIC};
  };
  class I_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("rhs_rpg_empty", EAST_MAT_MAG2)
  };
  class I_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    LAUNCHER_GEAR("B_Carryall_khk", EAST_SAM_MAG)
    launchers[] = {EAST_SAM};
  };
  class I_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_khk", EAST_SAM_MAG)
  };
  class I_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    MORTAR_GEAR("I_Mortar_01_weapon_F")
  };
  class I_support_AMort_F: Fic_Spotter {// Assistant Mortar
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    MORTAR_GEAR("I_Mortar_01_support_F")
  };
  class I_spotter_F: Fic_Spotter {// Spotter
    backpack[] = {"B_AssaultPack_rgr"};
    weapons[] = {IND_SPOTTER};
    magazines[] = {IND_SPOTTER_MAG,IND_BASE_GRENADES};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {IND_LEADER_LINKED};
    attachments[] = {"rhs_acc_pso1m2"};
  };
  class I_sniper_F: I_spotter_F {// Sniper
    weapons[] = {IND_SNIPER};
    magazines[] = {IND_SNIPER_MAG,IND_BASE_GRENADES};
    items[] = {IND_BASE_TOOLS,BASE_MEDICAL,"ACE_RangeCard"};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
    attachments[] = {"rhs_acc_pso1m2"};
  };
  class I_Helipilot_F {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a_mike"};
    backpack[] = {"B_AssaultPack_rgr"};
    weapons[] = {IND_SMG};
    magazines[] = {IND_SMG_MAG,CREW_GRENADES};
    items[] = {BASE_MEDICAL,IND_BASE_TOOLS,IND_LEADER_TOOLS,RADIO_MR};
    backpackItems[] += {KEY_IND,RADIO_LR};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
  };
  class I_helicrew_F: I_Helipilot_F {}; // Pilot
  class I_crew_F: Fic_Soldier_Carbine {// Crew
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    magazines[] = {IND_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_IND,RADIO_LR};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class I_Soldier_repair_F: I_crew_F {// Repair Specialist
    backpack[] = {"B_Carryall_khk"};
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
