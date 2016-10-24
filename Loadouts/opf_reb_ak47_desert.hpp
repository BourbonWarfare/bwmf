//Author: BWMF
//Description: Rebel: AK47 - Mixed Desert

class opf_f {
  //Rifle
  #define EAST_RIFLE "rhs_weap_akm"
  #define EAST_RIFLE_MAG "rhs_30Rnd_762x39mm:10","rhs_30Rnd_762x39mm_tracer:4"
  #define EAST_RIFLE_ATTACHMENTS "rhs_acc_dtk1l"
  #define EAST_AAR_ATTACHMENTS EAST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define EAST_GLRIFLE "rhs_weap_akm_gp25"
  #define EAST_GLRIFLE_MAG EAST_RIFLE_MAG
  #define EAST_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:4","rhs_GRD40_Red:4"
  #define EAST_GLRIFLE_MAG_HE "rhs_VOG25:12"
  #define EAST_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
  //Carbine
  #define EAST_CARBINE "rhs_weap_akms"
  #define EAST_CARBINE_MAG EAST_RIFLE_MAG
  // AR
  #define EAST_AR "hlc_rifle_rpk"
  #define EAST_AR_MAG "hlc_75Rnd_762x39_m_rpk:7"
  // AT
  #define EAST_AT "rhs_weap_rpg7"
  #define EAST_AT_MAG "rhs_rpg7_PG7VL_mag:1"
  // MMG
  #define EAST_MMG "rhs_weap_pkp"
  #define EAST_MMG_MAG "rhs_100Rnd_762x54mmR:3","rhs_100Rnd_762x54mmR_green:2"
  // Sniper Rifle
  #define EAST_SNIPER "rhs_weap_svds"
  #define EAST_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // Spotter Rifle
  #define EAST_SPOTTER "rhs_weap_svds"
  #define EAST_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // SMG
  #define EAST_SMG "hlc_rifle_aks74u"
  #define EAST_SMG_MAG "hlc_30Rnd_545x39_B_AK:8"
  // Pistol
  #define EAST_PISTOL "rhs_weap_pya"
  #define EAST_PISTOL_MAG "rhs_mag_9x19_17:2"

  class Car {
    TransportWeapons[] = {EAST_AT};
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {EAST_AT};
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class O_Soldier_F { // rifleman
    uniform[] = {"MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};
    vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","V_TacVest_brn","V_TacVest_khk"};
    headgear[] = {"H_ShemagOpen_tan"};
    backpack[] = {"B_AssaultPack_cbr","B_AssaultPack_mcamo","rhs_assault_umbts"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {EAST_RIFLE};
    magazines[] = {EAST_RIFLE_MAG,EAST_BASE_GRENADES};
    items[] = {EAST_BASE_TOOLS};
    linkedItems[] = {EAST_BASE_LINKED};
    attachments[] = {EAST_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: O_Soldier_F {// carbine-man
    weapons[] = {EAST_CARBINE};
    magazines[] = {EAST_CARBINE_MAG,EAST_BASE_GRENADES};
  };
  class O_Soldier_TL_F: O_Soldier_F {// FTL
    vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
    weapons[] = {EAST_GLRIFLE};
    magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,EAST_LEADER_GRENADES};
    items[] += {EAST_LEADER_TOOLS};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
  };
  class O_soldier_SL_F: O_Soldier_TL_F { // SL
    backpack[] = {"B_Kitbag_cbr"};
    handguns[] = {EAST_PISTOL};
    magazines[] += {EAST_PISTOL_MAG};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class O_officer_F: O_Soldier_SL_F { // CO and DC
    items[] += {RADIO_LR};
  };
  class O_soldier_UAV_F: O_Soldier_F {
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_uavterminal"};
  };
  class O_soldier_GL_F: O_Soldier_TL_F {}; // GP Dude
  class O_Soldier_AR_F: O_Soldier_F {// AR
    weapons[] = {EAST_AR};
    magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,EAST_BASE_GRENADES};
    handguns[] = {EAST_PISTOL};
    attachments[] = {};
  };
  class O_Soldier_AAR_F: O_Soldier_F {// AAR
    backpackItems[] += {EAST_AR_MAG};
    attachments[] = {EAST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class O_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    magazines[] += {EAST_AT_MAG};
    launchers[] = {EAST_AT};
  };
  class O_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {EAST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: O_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class O_support_MG_F: O_Soldier_AR_F {// MMG Gunner
    weapons[] = {EAST_MMG};
    magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,EAST_BASE_GRENADES};
  };
  class O_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"B_Kitbag_cbr"};
    backpackItems[] += {EAST_MMG_MAG};
  };
  class O_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("rhs_rpg_empty", EAST_MAT_MAG)
    launchers[] = {EAST_MAT};
    secondaryAttachments[] = {EAST_MAT_OPTIC};
  };
  class O_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("rhs_rpg_empty", EAST_MAT_MAG2)
  };
  class O_soldier_AA_F: Fic_soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_khk", EAST_SAM_MAG)
    launchers[] = {EAST_SAM};
  };
  class O_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_khk", EAST_SAM_MAG)
  };
  class O_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("O_Mortar_01_weapon_F")
  };
  class O_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("O_Mortar_01_support_F")
  };
  class O_spotter_F: Fic_Spotter {// Spotter
    weapons[] = {EAST_SPOTTER};
    magazines[] = {EAST_SPOTTER_MAG,EAST_BASE_GRENADES};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {EAST_LEADER_LINKED};
    attachments[] = {"rhs_acc_pso1m2"};
  };
  class O_sniper_F: O_spotter_F {// Sniper
    weapons[] = {EAST_SNIPER};
    magazines[] = {EAST_SNIPER_MAG,EAST_BASE_GRENADES};
    items[] = {EAST_BASE_TOOLS,"ACE_RangeCard"};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
    attachments[] = {"rhs_acc_pso1m2"};
  };
  class O_Helipilot_F {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a_mike"};
    backpack[] = {"B_AssaultPack_rgr"};
    weapons[] = {EAST_SMG};
    magazines[] = {EAST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,EAST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class O_crew_F: Fic_Soldier_Carbine {// Crew
    backpack[] = {"rhs_assault_umbts_engineer_empty"};
    magazines[] = {EAST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] += {KEY_EAST,RADIO_LR};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class O_soldier_repair_F: O_crew_F {// Repair Specialist
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_EAST};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class Fic_eng: O_soldier_repair_F {
    backpack[] = {"B_Carryall_khk"};
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class O_soldier_exp_F: Fic_eng {// Mines Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class O_engineer_F: Fic_eng {// Explosive Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: O_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
