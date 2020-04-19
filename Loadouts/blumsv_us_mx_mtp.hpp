// Author: BWMF
// Description: US: HK416 - Marine Pattern Desert

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "arifle_MX_F"
#define RIFLE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"
#define RIFLE_ATTACHMENTS "acc_pointer_IR"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "arifle_MX_GL_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// Carbine
#define CARBINE "arifle_MXC_F"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "arifle_MX_SW_F"
#define AR_MAG "100Rnd_65x39_caseless_mag_Tracer:4"
#define AR_ATTACHMENTS "acc_pointer_IR","bipod_01_F_snd"
// AT
#define AT "launch_NLAW_F"
// MMG
#define MMG "LMG_Zafir_F"
#define MMG_MAG "100Rnd_762x54_Box_Tracer_Red:5"
// MAT
#define MAT "launch_RPG32_F"
#define MAT_MAG "RPG32_F:3","RPG32_HE_F:1"
#define MAT_MAG2 "RPG32_F:2","RPG32_HE_F:1"
//HMG
#define HMG "ace_csw_staticHMGCarry"
#define HMG_TRI "ace_csw_m3CarryTripod"
#define HMG_TRI_LOW "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
//HAT
#define HAT "ace_csw_staticATCarry"
#define HAT_TRI "ace_csw_m3CarryTripod"
#define HAT_TRI_LOW ""
#define HAT_MAG "Titan_AT:3"
// SAM
#define SAM "launch_B_Titan_F"
#define SAM_MAG "Titan_AA:3"
#define SAM_MAG2 "Titan_AA:2"
// Sniper Rifle
#define SNIPER "srifle_EBR_F"
#define SNIPER_MAG "20Rnd_762x51_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","acc_pointer_IR","bipod_01_F_snd"
// Spotter Rifle
#define SPOTTER "arifle_MXM_F"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "optic_Arco","acc_pointer_IR","bipod_01_F_snd"
// SMG
#define SMG "SMG_01_F"
#define SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
// Pistol
#define PISTOL "hgun_Pistol_heavy_01_F"
#define PISTOL_MAG "11Rnd_45ACP_Mag:3"
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
  uniform[] = {"U_B_CombatUniform_mcam"};
  vest[] = {"V_PlateCarrier1_rgr"};
  headgear[] = {"H_HelmetB_snakeskin"};
  backpack[] = {"B_AssaultPack_mcamo"};
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
  vest[] = {"V_PlateCarrierGL_mtp"};
  headgear[] = {"H_HelmetSpecB_snakeskin"};
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
  attachments[] = {AR_ATTACHMENTS};
  handguns[] = {PISTOL};
};
class potato_usmc_aar: potato_usmc_rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class potato_usmc_lat: Fic_Soldier_Carbine {// RAT
  launchers[] = {AT};
};
class potato_usmc_sm: Fic_Soldier_Carbine {// Medic
  vest[] = {"V_PlateCarrierSpec_mtp"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: potato_usmc_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_usmc_mmgg: potato_usmc_ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
};
class potato_usmc_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_mcamo"};
  backpackItems[] += {MMG_MAG};
};
class potato_usmc_matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class potato_usmc_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_hmgl: potato_usmc_sl {// HMG Leader
  launchers[] = {HMG_TRI_LOW};
};
class potato_usmc_hmgg: Fic_Soldier_Carbine {// HMG Gunner
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {HMG_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HMG};
};
class potato_usmc_hmgag: Fic_Spotter {// HMG Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {HMG_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HMG_TRI};
};
class potato_usmc_hatg: Fic_Soldier_Carbine {// HAT Gunner
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {HAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HAT};
};
class potato_usmc_hatl: potato_usmc_sl {// HMG Leader
  launchers[] = {HAT_TRI_LOW};
};
class potato_usmc_hatag: Fic_Spotter {// HAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {};
  magazines[] += {HAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {HAT_TRI};
};
class potato_usmc_msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_mcamo", SAM_MAG)
  launchers[] = {SAM};
};
class potato_usmc_msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_mcamo", SAM_MAG2)
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
  headgear[] = {"H_Booniehat_mcamo"};
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
  backpack[] = {"B_Carryall_mcamo"};
  vest[] = {"V_Chestrig_khk"};
  headgear[] = {"H_HelmetCrew_B"};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",SIDE_KEY,RADIO_LR};
};
class potato_usmc_vicl: Fic_Soldier_Carbine {// APC Commander
  vest[] = {"V_Chestrig_khk"};
  headgear[] = {"H_HelmetCrew_B"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_vicc: potato_usmc_vicl {// APC Gunner
};
class potato_usmc_vicd: potato_usmc_vicl {// APC Repair Specialist
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class potato_usmc_rifleman_02: Fic_Soldier_Carbine {// Tank Commander
  vest[] = {"V_Chestrig_khk"};
  headgear[] = {"H_HelmetCrew_B"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR,RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_usmc_rifleman_03: potato_usmc_rifleman_02 {// Tank Gunner
  backpackItems[] = {RADIO_MR,SIDE_KEY};
};
class potato_usmc_rifleman_04: potato_usmc_rifleman_02 {// Tank Repair Specialist
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
};
class Fic_eng: Fic_Soldier_Carbine {
  headgear[] = {"H_HelmetSpecB_snakeskin"};
  backpack[] = {"B_Carryall_mcamo"};
  items[] += {BASE_ENG};
};
//Use one of Explosive Specialist or Mine Specialist for the engineer team.
class potato_usmc_eod: Fic_eng {// Explosive Specialist
  backpackItems[] += {"Toolkit"};
  magazines[] += {BASE_EXP};
};
class potato_usmc_eodl: potato_usmc_sl {// Explosive Specialist leader
  headgear[] = {"H_HelmetSpecB_snakeskin"};
  backpack[] = {"B_Carryall_mcamo"};
  backpackItems[] += {"Toolkit"};
  items[] += {BASE_ENG};
  magazines[] += {BASE_EXP};
};
//class potato_usmc_eod: Fic_eng {// Mine Specialist
//  backpackItems[] = {"Toolkit"};
//  magazines[] += {BASE_MINE};
//};
//class potato_usmc_eodl: potato_usmc_sl {// Mine Specialist leader
//  headgear[] = {"H_HelmetSpecB_snakeskin"};
//  backpack[] = {"B_Carryall_mcamo"};
//  backpackItems[] += {"Toolkit"};
//  items[] += {BASE_ENG};
//  magazines[] += {BASE_MINE};
//};
class fallback: potato_usmc_rifleman {}; // This means any faction member who doesn't match something will use this loadout
