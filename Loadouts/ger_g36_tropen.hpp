// Author: SovietOnion
// Description: German: G36 - Troppentarn Camo

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "BWA3_G36"
#define RIFLE_MAG "BWA3_30Rnd_556x45_G36:8","BWA3_30Rnd_556x45_G36_Tracer:2"
#define RIFLE_ATTACHMENTS "UK3CB_BAF_Eotech","BWA3_acc_LLM01_irlaser"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","rhsusf_acc_compm4","rhsusf_acc_eotech_xps3","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","BWA3_optic_RSAS","RKSL_optic_RMR_MS19"
// GL Rifle
#define GLRIFLE "BWA3_G36_AG"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE "BWA3_G36K"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "BWA3_G36_LMG"
#define AR_MAG "BWA3_100Rnd_556x45_G36_Tracer:4"
// AT
#define AT "BWA3_Pzf3"
#define AT_MAG "BWA3_Pzf3_IT"
// MMG
#define MMG "BWA3_MG5"
#define MMG_MAG "BWA3_120Rnd_762x51_Tracer:4"
// MAT
#define MAT "rhs_weap_smaw"
#define MAT_MAG "rhs_mag_smaw_HEAA:3","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:3"
#define MAT_MAG2 "rhs_mag_smaw_HEAA:2","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:2"
#define MAT_OPTIC "rhs_weap_optic_smaw"
// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:3"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle
#define SNIPER "BWA3_G28_Standard"
#define SNIPER_MAG "BWA3_10Rnd_762x51_G28:10"
// Spotter Rifle
#define SPOTTER "BWA3_G36"
#define SPOTTER_MAG "BWA3_30Rnd_556x45_G36:8"
// SMG
#define SMG "BWA3_MP7"
#define SMG_MAG "BWA3_40Rnd_46x30_MP7:6"
// Pistol
#define PISTOL "BWA3_P8"
#define PISTOL_MAG "BWA3_15Rnd_9x19_P8:3"
// Grenades
#define BASE_FRAG "rhs_mag_m67:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_blue:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_WEST
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
  uniform[] = {"BWA3_Uniform_Tropen","BWA3_Uniform2_Tropen"};
  vest[] = {"BWA3_Vest_Tropen","BWA3_Vest_Rifleman1_Tropen"};
  headgear[] = {"BWA3_OpsCore_Tropen","BWA3_OpsCore_Tropen_Patch","BWA3_OpsCore_Tropen_Camera"};
  backpack[] = {"BWA3_Kitbag_Tropen"};
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
  vest[] = {"BWA3_Vest_Leader_Tropen","BWA3_Vest_Grenadier_Tropen"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class officer_F: Soldier_SL_F {// CO and DC
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"B_UAV_01_backpack_F"};
  linkedItems[] += {"B_uavterminal"};
};
class Soldier_AR_F: Soldier_F {// AR
  vest[] = {"BWA3_Vest_Autorifleman_Tropen"};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class Soldier_AAR_F: Soldier_F {// AAR
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  vest[] = {"BWA3_Vest_Medic_Tropen"};
  backpack[] = {"BWA3_Kitbag_Tropen_Medic"};
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
  backpack[] = {"BWA3_Carryall_Tropen"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"BWA3_Carryall_Tropen"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("BWA3_Carryall_Tropen", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("BWA3_Carryall_Tropen", SAM_MAG2)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  uniform[] = {"BWA3_Uniform_Ghillie_Tropen"};
  vest[] = {"BWA3_Vest_Marksman_Tropen"};
  headgear[] = {};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
};
class sniper_F: spotter_F {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {"BWA3_optic_Shortdot","BWA3_acc_VarioRay_irlaser"};
};
class Helipilot_F {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_AssaultPack_blk"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"H_PilotHelmetHeli_B"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
class crew_F: Fic_Soldier_Carbine {// Crew
  uniform[] = {"BWA3_Uniform_Crew_Tropen"};
  headgear[] = {"BWA3_CrewmanKSK_Tropen_Headset"};
  backpack[] = {"BWA3_Kitbag_Tropen"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  backpack[] = {"BWA3_PatrolPack_Tropen"};
  backpackItems[] = {};
  items[] += {BASE_ENG};
};
class soldier_exp_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
