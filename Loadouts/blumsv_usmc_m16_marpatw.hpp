// Author: BWMF
// Description: US: M16 - Marine Pattern Woodland

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_m16a4_carryhandle"
#define RIFLE_MAG "30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"
#define RIFLE_ATTACHMENTS "rhsusf_acc_anpeq15A"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "rhs_weap_m16a4_carryhandle_M203"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// Carbine
#define CARBINE "rhs_weap_m4_carryhandle"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "rhs_weap_m249_pip_L"
#define AR_MAG "rhsusf_100Rnd_556x45_soft_pouch:4"
// AT
#define AT "rhs_weap_M136"
// MMG
#define MMG "rhs_weap_m240g"
#define MMG_MAG "rhsusf_100Rnd_762x51:5"
// MAT
#define MAT "rhs_weap_smaw"
#define MAT_MAG "rhs_mag_smaw_HEAA:3","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:3"
#define MAT_MAG2 "rhs_mag_smaw_HEAA:2","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:2"
#define MAT_OPTIC "rhs_weap_optic_smaw"
//HMG
#define HMG "ace_cswCompatCUP_cup_m2"
#define HMG_TRI "ace_csw_m3CarryTripod"
#define HMG_TRI_LOW "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
//HAT
#define HAT "ace_cswCompatCUP_cup_tow"
#define HAT_TRI "ace_csw_m220CarryTripod"
#define HAT_TRI_LOW ""
#define HAT_MAG "ace_cswCompatCUP_cup_tow_at:6"
// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:3"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle
#define SNIPER "rhs_weap_sr25"
#define SNIPER_MAG "rhsusf_20Rnd_762x51_SR25_m118_special_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","rhsusf_acc_anpeq15side_bk","rhsusf_acc_harris_bipod"
// Spotter Rifle
#define SPOTTER "rhs_weap_m4a1_blockII_grip_KAC_bk"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "rhsusf_acc_ACOG","rhsusf_acc_anpeq15side_bk","rhsusf_acc_grip1"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:6"
// Pistol
#define PISTOL "rhsusf_weap_m9"
#define PISTOL_MAG "rhsusf_mag_15Rnd_9x19_JHP:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

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

class potato_usmc_rifleman {// rifleman
  uniform[] = {"rhs_uniform_FROG01_wd"};
  vest[] = {"rhsusf_spc_rifleman"};
  headgear[] = {"rhsusf_lwh_helmet_marpatwd"};
  backpack[] = {"rhsusf_assault_eagleaiii_coy"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: potato_usmc_rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class Soldier_TL_F: potato_usmc_rifleman {// FTL
  vest[] = {"rhsusf_spc_teamleader"};
  backpack[] = {"B_Kitbag_cbr"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_usmc_sl: Soldier_TL_F {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class potato_usmc_coy: potato_usmc_sl {// CO
  items[] += {RADIO_LR};
};
class potato_usmc_xo: potato_usmc_coy {// XO/PL Sgt
};
class potato_usmc_sgt: potato_usmc_rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class potato_usmc_ar: potato_usmc_rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class potato_usmc_aar: potato_usmc_rifleman {// AAR
  backpack[] = {"B_Kitbag_cbr"};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class potato_usmc_lat: Fic_Soldier_Carbine {// RAT
  launchers[] = {AT};
};
class potato_usmc_sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: potato_usmc_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_usmc_mmgg: potato_usmc_ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class potato_usmc_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] += {MMG_MAG};
};
class potato_usmc_matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class potato_usmc_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_hmgl: potato_usmc_sl {// HMG Leader
  launchers[] = {HMG_TRI_LOW};
};
class potato_usmc_hmgg: Fic_Soldier_Carbine {// HMG Gunner
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {HMG_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HMG};
};
class potato_usmc_hmgag: Fic_Spotter {// HMG Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {HMG_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HMG_TRI};
};
class potato_usmc_hatg: Fic_Soldier_Carbine {// HAT Gunner
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {HAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HAT};
};
class potato_usmc_hatl: potato_usmc_sl {// HMG Leader
  launchers[] = {HAT_TRI_LOW};
};
class potato_usmc_hatag: Fic_Spotter {// HAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {};
  magazines[] += {HAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HAT_TRI};
};
class potato_usmc_msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_cbr", SAM_MAG)
  launchers[] = {SAM};
};
class potato_usmc_msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_cbr", SAM_MAG2)
};
class potato_usmc_mtrl: potato_usmc_sl {// Mortar Leader
  items[] += {"ACE_RangeTable_82mm"};
};
class potato_usmc_mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class potato_usmc_mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class potato_usmc_spotter: Fic_Spotter {// Spotter
  headgear[] = {"rhs_booniehat2_marpatwd"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class potato_usmc_sniper: potato_usmc_spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class potato_usmc_pilot {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_AssaultPack_blk"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"H_PilotHelmetHeli_B"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class potato_usmc_cc: potato_usmc_pilot {// Crew
  backpack[] = {"B_Carryall_cbr"};
  vest[] = {"rhsusf_spc_crewman"};
  headgear[] = {"H_HelmetCrew_I"};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",SIDE_KEY,RADIO_LR};
};
class potato_usmc_vicl: Fic_Soldier_Carbine {// APC Commander
  vest[] = {"rhsusf_spc_crewman"};
  headgear[] = {"H_HelmetCrew_I"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_vicc: potato_usmc_vicl {// APC Gunner
};
class potato_usmc_vicd: potato_usmc_vicl {// APC Repair Specialist
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class potato_usmc_rifleman_02: Fic_Soldier_Carbine {// Tank Commander
  vest[] = {"rhsusf_spc_crewman"};
  headgear[] = {"H_HelmetCrew_I"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR,RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_rifleman_03: potato_usmc_rifleman_02 {// Tank Gunner
  backpackItems[] = {RADIO_MR,SIDE_KEY};
};
class potato_usmc_rifleman_04: potato_usmc_rifleman_02 {// Tank Repair Specialist
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
};
class Fic_eng: Fic_Soldier_Carbine {
  headgear[] = {"H_HelmetCrew_I"};
  backpack[] = {"B_Carryall_cbr"};
  items[] += {BASE_ENG};
};
//Use one of Explosive Specialist or Mine Specialist for the engineer team.
class potato_usmc_eod: Fic_eng {// Explosive Specialist
  backpackItems[] += {"Toolkit"};
  magazines[] += {BASE_EXP};
};
class potato_usmc_eodl: potato_usmc_sl {// Explosive Specialist leader
  headgear[] = {"H_HelmetCrew_I"};
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] += {"Toolkit"};
  items[] += {BASE_ENG};
  magazines[] += {BASE_EXP};
};
//class potato_usmc_eod: Fic_eng {// Mine Specialist
//  backpackItems[] += {"Toolkit"};
//  magazines[] += {BASE_MINE};
//};
//class potato_usmc_eodl: potato_usmc_sl {// Mine Specialist leader
//  headgear[] = {"H_HelmetCrew_I"};
//  backpack[] = {"B_Carryall_cbr"};
//  backpackItems[] += {"Toolkit"};
//  items[] += {BASE_ENG};
//  magazines[] += {BASE_MINE};
//};
class fallback: potato_usmc_rifleman {}; // This means any faction member who doesn't match something will use this loadout
