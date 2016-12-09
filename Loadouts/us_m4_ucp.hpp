// Author: BWMF
// Description: US: M4 - Gray/Green

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_m4a1_carryhandle_grip2"
#define RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
#define RIFLE_ATTACHMENTS "UK3CB_BAF_Eotech","rhsusf_acc_anpeq15A"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","rhsusf_acc_compm4","rhsusf_acc_eotech_xps3","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","BWA3_optic_RSAS","RKSL_optic_RMR_MS19"
// GL Rifle
#define GLRIFLE "rhs_weap_m4a1_carryhandle_m203S"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE "rhs_weap_m4a1_carryhandle_grip"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "rhs_weap_m249_pip_L"
#define AR_MAG "rhsusf_100Rnd_556x45_soft_pouch:4"
// AT
#define AT "rhs_weap_M136"
// MMG
#define MMG "rhs_weap_m240B"
#define MMG_MAG "rhsusf_100Rnd_762x51:5"
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
#define SNIPER "rhs_weap_m14ebrri"
#define SNIPER_MAG "rhsusf_20Rnd_762x51_m993_Mag:8"
// Spotter Rifle
#define SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
#define SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:6"
// Pistol
#define PISTOL "rhsusf_weap_m1911a1"
#define PISTOL_MAG "rhsusf_mag_7x45acp_MHP:3"
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

class Soldier_F {// rifleman
  uniform[] = {"rhs_uniform_cu_ucp"};
  vest[] = {"rhsusf_iotv_ucp_Rifleman"};
  headgear[] = {"rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp"};
  backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
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
  vest[] = {"rhsusf_iotv_ucp_Grenadier"};
  weapons[] = {GLRIFLE};
  headgear[] = {"rhsusf_ach_helmet_headset_ess_ucp"};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  headgear[] = {"rhsusf_ach_helmet_headset_ucp"};
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
  vest[] = {"rhsusf_iotv_ucp_SAW"};
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
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  vest[] = {"rhsusf_iotv_ucp_medic"};
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
  backpack[] = {"B_Kitbag_cbr"};
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_mcamo",SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_mcamo",SAM_MAG2)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  vest[] = {"rhsusf_iotv_ucp"};
  headgear[] = {"rhs_Booniehat_ucp"};
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
  attachments[] = {"rhsusf_acc_LEUPOLDMK4_2","rhsusf_acc_anpeq15A"};
};
class Helipilot_F {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_AssaultPack_blk"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"H_PilotHelmetHeli_B"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
class crew_F: Fic_Soldier_Carbine {// Crew
  vest[] = {"rhsusf_iotv_ucp"};
  headgear[] = {"rhsusf_cvc_green_ess"};
  backpack[] = {"B_Carryall_mcamo"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
  vest[] = {"rhsusf_iotv_ucp_repair"};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  headgear[] = {"rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp"};
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
