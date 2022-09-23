// Author: BWMF
// Description: Norwegian: HK416 - M/98 Woodland

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "CUP_arifle_HK416_Black"
#define RIFLE_MAG "potato_magazine_556x45_30rnd_reload_tracer_Red:8","potato_magazine_556x45_30rnd_tracer_Red:2"
#define RIFLE_ATTACHMENTS "cup_acc_anpeq_15_black"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "CUP_arifle_HK416_AGL_Black"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// Carbine
#define CARBINE "CUP_arifle_HK416_CQB_Black"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_m249_pip1"
#define AR_MAG "potato_box_556x45_100rnd_tracer_Green:4"
// AT
#define AT "CUP_launch_M72A6"
// MMG
#define MMG "CUP_lmg_M240_B"
#define MMG_MAG "potato_box_762x51_100rnd:5"
// MAT
#define MAT "CUP_launch_MAAWS"
#define MAT_MAG "CUP_MAAWS_HEAT_M:3","CUP_MAAWS_HEDP_M:1"
#define MAT_MAG2 "CUP_MAAWS_HEAT_M:2","CUP_MAAWS_HEDP_M:1"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
//HMG
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:6"
#define HMG_MAG2 "ace_csw_50Rnd_127x108_mag:5"
//HAT
#define HAT "CUP_TOW_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO ""
#define HAT_MAG "CUP_compats_TOW_M"
// SAM
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG "CUP_Stinger_M:3"
#define SAM_MAG2 "CUP_Stinger_M:2"
// Sniper Rifle
#define SNIPER "CUP_srifle_M14_DMR"
#define SNIPER_MAG "potato_magazine_762x51_20rnd:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","cup_acc_anpeq_15_black","cup_bipod_harris_1a2_l_blk"
// Spotter Rifle
#define SPOTTER "CUP_arifle_M4A3_black"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "cup_optic_acog2","cup_acc_anpeq_15_black"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "potato_magazine_9x19_30rnd:6"
// Pistol
#define PISTOL "CUP_hgun_M9"
#define PISTOL_MAG "potato_magazine_9x19_15rnd:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED
#define CARRYALL "B_Carryall_oli"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,GLRIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {"MNP_CombatUniform_NOR_A"};
  vest[] = {"MNP_Vest_NOR_1","MNP_Vest_NOR_2"};
  headgear[] = {"MNP_Helmet_DS"};
  backpack[] = {"B_AssaultPack_rgr"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_oli"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_oli"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_oli", SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_oli", SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter: Fic_Spotter {// Spotter
  headgear[] = {"MNP_Boonie_NOR"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {"U_B_HeliPilotCoveralls"};
  backpack[] = {"B_assaultpack_sgg"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"H_PilotHelmetHeli_B"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] += {LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
};
class Fic_eng: vicd {
  headgear[] = {"MNP_Helmet_DS"};
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] += {BINOS};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  items[] += {BASE_MEDICAL};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG2};
};
class hmgl: sl {// HMG Lead
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {HMG_MAG2};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS,BASE_MEDICAL};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  handguns[] = {};
  items[] += {BASE_MEDICAL};
  magazines[] = {HAT_MAG,GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  launchers[] = {HAT_TRI_LO};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG2};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout
