// Author: BWMF
// Description: Rebel: M70/AKM - Mixed Desert

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_m70b1"
#define RIFLE_MAG "rhs_30Rnd_762x39mm:8","rhs_30Rnd_762x39mm_tracer:2"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1l"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "rhs_weap_akm_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
// Carbine
#define CARBINE "rhs_weap_m70ab2"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "potato_arifle_RPK"
#define AR_MAG "potato_75Rnd_762x39mm_tracer:5"
// AT
#define AT "rhs_weap_rpg7"
#define AT_MAG "rhs_rpg7_PG7VL_mag:1"
// MMG
#define MMG "rhs_weap_pkm"
#define MMG_MAG "rhs_100Rnd_762x54mmR_green:5"
// MAT
#define MAT "rhs_weap_rpg7"
#define MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1","rhs_rpg7_OG7V_mag:1"
#define MAT_MAG2 "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_OG7V_mag:1"
#define MAT_OPTIC "rhs_acc_pgo7v3"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:3"
#define SAM_MAG2 "rhs_mag_9k38_rocket:2"
// Sniper Rifle
#define SNIPER "rhs_weap_svds_npz"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:20"
#define SNIPER_ATTACHMENTS "optic_LRPS"
// Spotter Rifle
#define SPOTTER "rhs_weap_ak103"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "rhs_acc_1p78","rhs_acc_perst1ik","rhs_acc_dtk3"
// SMG
#define SMG "rhs_weap_m92"
#define SMG_MAG "rhs_30Rnd_762x39mm:8"
// Pistol
#define PISTOL "rhs_weap_makarov_pmm"
#define PISTOL_MAG "rhs_mag_9x18_12_57N181S:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,CHEM_LIGHT
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class Soldier_F {// rifleman
  uniform[] = {"MNP_CombatUniform_Militia_DC","MNP_CombatUniform_Militia_DB","MNP_CombatUniform_Militia_DA"};
  vest[] = {"MNP_Vest_6co_A","MNP_Vest_6co_B","MNP_Vest_UKR_B","V_TacVest_brn","V_TacVest_khk"};
  headgear[] = {"H_ShemagOpen_tan","H_Shemag_olive"};
  backpack[] = {"B_AssaultPack_rgr","B_AssaultPack_mcamo","B_AssaultPack_rgr","rhs_assault_umbts"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class Fic_Soldier_Carbine: Soldier_F {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class Soldier_TL_F: Soldier_F {// FTL
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  backpack[] = {"B_Kitbag_rgr"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] += {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class officer_F: Soldier_SL_F {// CO and DC
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  backpack[] = {UAV_BACKPACK};
  linkedItems[] += {UAV_TERMINAL};
};
class Soldier_AR_F: Soldier_F {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {};
};
class Soldier_AAR_F: Soldier_F {// AAR
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkeditems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
  backpack[] = {"rhs_rpg_empty"};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {"B_Kitbag_rgr"};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: Soldier_F {
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  linkedItems[] += {RANGE_FINDER};
};
class support_MG_F: Soldier_AR_F {// MMG
  backpack[] = {"B_Kitbag_rgr"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_rgr"};
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  backpack[] = {"rhs_rpg_empty"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"rhs_rpg_empty"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  SAM_GEAR("B_Carryall_khk", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_khk", SAM_MAG)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  MORTAR_GEAR("I_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  MORTAR_GEAR("I_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  backpack[] = {"B_AssaultPack_rgr"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper_F: spotter_F {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class Helipilot_F {// Pilot
  uniform[] = {"rhs_uniform_df15"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"rhs_zsh7a_mike"};
  backpack[] = {"B_AssaultPack_rgr"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  backpackItems[] += {RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
class crew_F: Fic_Soldier_Carbine {// Crew
  vest[] = {"MNP_Vest_UKR_B","MNP_Vest_6co_A","MNP_Vest_6co_B"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY,RADIO_LR};
  linkedItems[] += {LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class Soldier_repair_F: crew_F {// Repair Specialist
  backpack[] = {"B_Carryall_khk"};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_Eng: soldier_repair_F {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_Eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_Eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
