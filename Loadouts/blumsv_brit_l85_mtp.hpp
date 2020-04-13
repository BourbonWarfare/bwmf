// Author: BWMF
// Description: US: HK416 - Marine Pattern Desert

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "CUP_arifle_L85A2_G","CUP_arifle_L85A2_NG"
#define RIFLE_MAG "30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"
#define RIFLE_ATTACHMENTS "CUP_acc_ANPEQ_2"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "CUP_arifle_L85A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_L110A1"
#define AR_MAG "CUP_100Rnd_TE4_Red_Tracer_556x45_M249:4"
// AT
#define AT "CUP_launch_M136"
#define AT_MAG "ACE_PreloadedMissileDummy_CUP:1"
// MMG
#define MMG "CUP_lmg_L7A2"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "CUP_launch_Mk153Mod0"
#define MAT_MAG "CUP_SMAW_HEAA_M:3","CUP_SMAW_HEDP_M:1","CUP_SMAW_Spotting:3"
#define MAT_MAG2 "CUP_SMAW_HEAA_M:2","CUP_SMAW_HEDP_M:1","CUP_SMAW_Spotting:2"
#define MAT_OPTIC "CUP_optic_SMAW_Scope"
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
#define SNIPER "CUP_srifle_L129A1"
#define SNIPER_MAG "20Rnd_762x51_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","CUP_acc_ANPEQ_2","CUP_bipod_Harris_1A2_L"
// Spotter Rifle
#define SPOTTER "CUP_arifle_L85A2_G"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "CUP_optic_ACOG","CUP_acc_ANPEQ_2"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:6"
// Pistol
#define PISTOL "CUP_hgun_Glock17_tan"
#define PISTOL_MAG "CUP_17Rnd_9x19_glock17:3"
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
  uniform[] = {"CUP_U_B_BAF_MTP_S2_UnRolled","CUP_U_B_BAF_MTP_S1_RolledUp"};
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman"};
  headgear[] = {"CUP_H_BAF_Helmet_1_MTP","CUP_H_BAF_Helmet_3_MTP"};
  backpack[] = {"B_AssaultPack_cbr"};
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
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_usmc_sl: Soldier_TL_F {// SL
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader"};
  backpack[] = {"B_Kitbag_cbr"};
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
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class potato_usmc_lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class potato_usmc_sm: Fic_Soldier_Carbine {// Medic
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Medic"};
  backpack[] = {"B_Kitbag_cbr"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: potato_usmc_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_usmc_mmgg: potato_usmc_ar {// MMG
  backpack[] = {"B_Kitbag_cbr"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class potato_usmc_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_cbr"};
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
  uniform[] = {"CUP_U_B_BAF_MTP_S2_UnRolled"};
  headgear[] = {"CUP_H_BAF_Helmet_3_MTP"};
  backpackItems[] = {};
  backpack[] = {};
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
  uniform[] = {"CUP_U_B_BAF_MTP_Tshirt","CUP_U_B_BAF_MTP_S1_RolledUp"};
  backpack[] = {"B_AssaultPack_cbr"};
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner"};
  headgear[] = {"CUP_H_BAF_Helmet_Pilot"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class potato_usmc_cc: potato_usmc_pilot {// Crew
  backpack[] = {"B_Carryall_cbr"};
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner"};
  headgear[] = {"CUP_H_BAF_Crew_Helmet_MTP"};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",SIDE_KEY,RADIO_LR};
};
class potato_usmc_vicl: Fic_Soldier_Carbine {// APC Commander
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner"};
  headgear[] = {"CUP_H_BAF_Crew_Helmet_MTP"};
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
  vest[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner"};
  headgear[] = {"CUP_H_BAF_Crew_Helmet_MTP"};
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
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  backpack[] = {"B_Carryall_cbr"};
  items[] += {BASE_ENG};
};
//Use one of Explosive Specialist or Mine Specialist for the engineer team.
class potato_usmc_eod: Fic_eng {// Explosive Specialist
  backpackItems[] = {"Toolkit"};
  magazines[] += {BASE_EXP};
};
class potato_usmc_eodl: potato_usmc_sl {// Explosive Specialist leader
  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
  backpack[] = {"B_Carryall_cbr"};
  backpackItems[] += {"Toolkit"};
  items[] += {BASE_ENG};
  magazines[] += {BASE_EXP};
};
//class potato_usmc_eod: Fic_eng {// Mine Specialist
//  backpackItems[] = {"Toolkit"};
//  magazines[] += {BASE_MINE};
//};
//class potato_usmc_eodl: potato_usmc_sl {// Mine Specialist leader
//  vest[] = {"CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"};
//  backpack[] = {"B_Carryall_cbr"};
//  backpackItems[] = {"Toolkit"};
//  items[] += {BASE_ENG};
//  magazines[] += {BASE_MINE};
//};
class fallback: potato_usmc_rifleman {}; // This means any faction member who doesn't match something will use this loadout
