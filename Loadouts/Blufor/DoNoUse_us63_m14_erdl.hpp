// Author: Urist
// Description: paste your loadout config from the arseanal exporter
#include "undef.hpp" // Reset defines
// Camo set
#define CAMO_UNIFORM "rhs_uniform_bdu_erdl"
#define CAMO_VEST "PLOT_ARMOR_V_TacChestrig_grn_F"
#define CAMO_BACKPACK "B_Kitbag_rgr"
#define CAMO_HEADGEAR "rhsgref_helmet_M1_erdl"
// Rifle
#define RIFLE "rhs_weap_m14"
#define RIFLE_MAG "rhsusf_20Rnd_762x51_m80_Mag:10"
#define RIFLE_ATTACHMENTS ""
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS
// GL Rifle
#define GLRIFLE "rhs_weap_m14"
#define GLRIFLE_MAG "rhsusf_20Rnd_762x51_m80_Mag:10"
// WARNING - Unknown GL Muzzle [rhs_weap_m14->SAFE]
#define GLRIFLE_MAG_SMOKE ""
#define GLRIFLE_MAG_HE ""
#define GLRIFLE_MAG_FLARE ""
// Carbine
#define CARBINE "rhs_weap_m14"
#define CARBINE_MAG "rhsusf_20Rnd_762x51_m80_Mag:10"
// AR
#define AR "rhs_weap_m14"
#define AR_MAG "rhsusf_20Rnd_762x51_m80_Mag:15"
// AT
#define AT "CUP_launch_M72A6"
#define AT_MAG "CUP_M72A6_M:1"
// MMG
#define MMG "CUP_lmg_M60"
#define MMG_MAG "potato_box_762x51_100rnd_tracer_Red:5"
#define MMG_MAG2 "potato_box_762x51_100rnd_tracer_Red:4"
// MAT
#define MAT "CUP_launch_M72A6"
#define MAT_MAG ""
#define MAT_MAG2 ""
#define MAT_OPTIC ""
//HMG
#define HMG "ace_cswCompatCUP_cup_m2"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
#define HMG_MAG2 "ace_csw_100Rnd_127x99_mag:2"
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
#define SNIPER "CUP_srifle_M21"
#define SNIPER_MAG "potato_magazine_762x51_20rnd:10"
#define SNIPER_ATTACHMENTS "CUP_optic_artel_m14"
// Spotter Rifle
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS
// SMG
#define SMG CARBINE
#define SMG_MAG CARBINE_MAG
// Pistol
#define PISTOL "CUP_hgun_Colt1911"
#define PISTOL_MAG "potato_magazine_45_acp_7rnd:7"
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
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
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
  headgear[] = {"CUP_H_US_patrol_cap_ERDL"};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  vest[] = {CUP_V_O_SLA_M23_1_OD};
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {"rhsusf_acc_m14_bipod"};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
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
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpackItems[] = {"CUP_launch_M72A6","CUP_launch_M72A6","CUP_launch_M72A6"};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpackItems[] = {"CUP_launch_M72A6","CUP_launch_M72A6","CUP_launch_M72A6"};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
  vest[] = {"MNP_V_M81_Harness"};
  magazines[] = {"rhsusf_20Rnd_762x51_m80_Mag:9",BASE_GRENADES};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
  vest[] = {"MNP_V_M81_Harness"};
  magazines[] = {"rhsusf_20Rnd_762x51_m80_Mag:9",BASE_GRENADES};
};
class spotter: Fic_Spotter {// Spotter
  headgear[] = {"PLOT_ARMOR_H_Booniehat_oli"};
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
  uniform[] = {"CUP_U_B_USArmy_PilotOverall"};
  backpack[] = {"B_FieldPack_oli"};
  vest[] = {"Aircrew_vest_2_NH"};
  headgear[] = {"CUP_H_SPH4_green"};
  weapons[] = {};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};

class vicc: Fic_Soldier_Carbine {// Crew
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: vicd {
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
  backpack[] = {CARRYALL};
  magazines[] = {BASE_EXP,"rhsusf_20Rnd_762x51_m80_Mag:9",CREW_GRENADES};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  weapons[] = {"rhs_weap_m79"};
  magazines[] = {SIDE_FAC_GRENADES,SIDE_FAC_GRENADES,PISTOL_MAG,PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
  handguns[] = {PISTOL};
  weapons[] = {"rhs_weap_m79"};
  magazines[] = {"rhs_mag_M441_HE:20","rhs_mag_m714_White:5",BASE_GRENADES,PISTOL_MAG,PISTOL_MAG};
};
class artl: sl {// Artillery Leader
  backpack[] = {"B_Kitbag_mcamo"};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {// Platoon Medic
  backpackItems[] = {PL_MEDIC_MEDICAL,RADIO_MR};
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
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG2};
};
class matl: sl {// MAT Lead
  backpackItems[] = {"CUP_launch_M72A6","CUP_launch_M72A6","CUP_launch_M72A6"};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  backpack[] = {CARRYALL};
  magazines[] = {HMG_MAG2,RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] = {HMG_MAG,RIFLE_MAG,BASE_GRENADES};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] = {HMG_MAG,RIFLE_MAG,BASE_GRENADES};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
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
  handguns[] = {};
  magazines[] = {SAM_MAG2,GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
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
