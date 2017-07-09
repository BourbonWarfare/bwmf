// Author: BWMF
// Description: Russian: AK74 - Floral

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_2mag"
#define RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
#define RIFLE_ATTACHMENTS "rhs_acc_1p63","rhs_acc_dtk"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define AR_ATTACHMENTS "CUP_optic_Kobra"
#define ALT_OPTICS "rhs_acc_ekp1","rhs_acc_pkas"
// GL Rifle
#define GLRIFLE "rhs_weap_ak74m_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74"
#define AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:6"
// AT
#define AT "rhs_weap_rpg26"
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
#define SNIPER "rhs_weap_svds"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
// Spotter Rifle
#define SPOTTER "rhs_weap_svds"
#define SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "rhs_30Rnd_545x39_AK:6"
// Pistol
#define PISTOL "rhs_weap_pya"
#define PISTOL_MAG "rhs_mag_9x19_17:3"
// Grenades
#define BASE_FRAG "rhs_mag_rgd5:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_red:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_EAST
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class Soldier_F { // rifleman
  uniform[] = {"rhs_uniform_flora_patchless"};
  vest[] = {"rhs_6b23_6sh92_vog"};
  headgear[] = {"rhs_6b26","rhs_6b26_bala","rhs_6b26_ess","rhs_6b26_ess_bala"};
  backpack[] = {"rhs_assault_umbts"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: Soldier_F {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class Soldier_TL_F: Soldier_F {// FTL
  vest[] = {"rhs_6b23_6sh92_vog_headset"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class soldier_SL_F: Soldier_TL_F { // SL
  backpack[] = {"B_FieldPack_oli"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class officer_F: Soldier_SL_F { // CO and DC
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"O_UAV_01_backpack_F"};
  linkedItems[] += {"O_uavterminal"};
};
class soldier_GL_F: Soldier_TL_F {}; // GP Dude
class Soldier_AR_F: Soldier_F {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {AR_ATTACHMENTS};
};
class Soldier_AAR_F: Soldier_F {// AAR
  backpack[] = {"B_Kitbag_sgg"};
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
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
  backpack[] = {"B_Kitbag_sgg"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_sgg"};
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
class soldier_AA_F: Fic_soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_oli", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_oli", SAM_MAG)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("O_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("O_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {"rhs_acc_pso1m2"};
};
class sniper_F: spotter_F {// Sniper
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
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  attachments[] = {"rhs_acc_dtk"};
};
class crew_F: Fic_Soldier_Carbine {// Crew
  backpack[] = {"rhs_assault_umbts_engineer_empty"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] += {KEY_EAST,RADIO_LR};
  linkedItems[] += {LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_EAST};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  backpack[] = {"B_Carryall_oli"};
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_eng {// Mines Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
