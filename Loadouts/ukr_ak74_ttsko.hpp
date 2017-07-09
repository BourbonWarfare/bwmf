// Author: BWMF
// Description: Ukraine: AK74 - TTskO (Green)

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "CUP_arifle_AK74"
#define RIFLE_MAG "CUP_30Rnd_545x39_AK_M:8","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M:2"
#define RIFLE_ATTACHMENTS "CUP_optic_Kobra"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "CUP_arifle_AK74_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
// Carbine
#define CARBINE "CUP_arifle_AKS74"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74_45"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:9"
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
#define SNIPER "rhs_weap_svdp"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
// Spotter Rifle
#define SPOTTER "rhs_weap_svdp"
#define SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "rhs_30Rnd_545x39_AK:6"
// Pistol
#define PISTOL "rhs_weap_makarov_pmm"
#define PISTOL_MAG "rhs_mag_9x18_12_57N181S:3"
// Grenades
#define BASE_FRAG "rhs_mag_rgd5:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_green:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_IND
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
  uniform[] = {"MNP_CombatUniform_Ukrainian"};
  vest[] = {"MNP_Vest_OD_A","MNP_Vest_OD_B"};
  headgear[] = {"MNP_Helmet_OD","rhs_beanie_green","H_Bandanna_khk","rhs_beanie"};
  backpack[] = {"B_Kitbag_rgr"};
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
  headgear[] = {"rhs_Booniehat_ocp"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] += {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class officer_F: Soldier_SL_F {// CO and DC
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"I_UAV_01_backpack_F"};
  linkedItems[] += {"I_uavterminal"};
};
class Soldier_AR_F: Soldier_F {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
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
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: Soldier_F {
  linkedItems[] += {RANGE_FINDER};
};
class support_MG_F: Soldier_AR_F {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
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
  SAM_GEAR("MNP_B_WD_CA", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("MNP_B_WD_CA", SAM_MAG)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("I_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("I_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  headgear[] = {"rhs_Booniehat_ocp","rhs_beanie_green"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {"rhs_acc_pso1m2"};
};
class sniper_F: spotter_F {// Sniper
  headgear[] = {"MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_Helmet_PAGST_UKR","MNP_MC_UKR"};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  attachments[] = {"rhs_acc_pso1m2"};
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
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] += {KEY_IND,RADIO_LR};
  linkedItems[] += {LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class Soldier_repair_F: crew_F {// Repair Specialist
  backpack[] = {"MNP_B_WD_CA"};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_IND};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_Eng: soldier_repair_F {
  uniform[] = {"MNP_CombatUniform_ASA_GC", "MNP_CombatUniform_ASA_GC3","MNP_CombatUniform_ASA_GC2"};
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
