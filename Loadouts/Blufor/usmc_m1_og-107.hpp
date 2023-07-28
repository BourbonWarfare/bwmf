author = "AChesheireCat";
description = "United States Marine Corps c.1950 w/ alternate AR loadouts (BAR vs. 1919A6)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_b_uniform_og107","cwr3_b_uniform_og107_rolled","cwr3_b_uniform_og107_tee"
#define CAMO_VEST "vn_b_vest_usarmy_02","vn_b_vest_usarmy_03"
#define CAMO_BACKPACK "vn_b_pack_m41_01","vn_b_pack_m41_02","vn_b_pack_m41_03","vn_b_pack_m41_04"
#define CARRYALL "vn_b_pack_lw_05"
#define CAMO_HEADGEAR "vn_b_helmet_m1_12_01","vn_i_helmet_m1_02_01","vn_i_helmet_m1_03_01","vn_b_helmet_m1_12_01"
#define CAMO_HEADGEAR_SPECIAL 
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "vn_b_uniform_k2b_01_02"
#define CAMO_VEST_PILOT "vn_b_vest_aircrew_04"
#define CAMO_BACKPACK_PILOT "vn_b_pack_ba22_01"
#define CAMO_HEADGEAR_PILOT "vn_o_helmet_shl61_01","vn_o_helmet_shl61_02"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_b_uniform_tanksuit"
#define CAMO_VEST_VICC "vn_b_vest_usarmy_10","vn_b_vest_usarmy_01"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "vn_b_helmet_t56_01_01","vn_b_helmet_t56_02_01"
// Rifle
#define RIFLE "vn_m1_garand"
#define RIFLE_MAG "vn_m1_garand_mag:10","vn_m1_garand_t_mag:5"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "vn_m1_garand_gl"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "vn_22mm_m22_smoke_mag:5"
#define GLRIFLE_MAG_HE "vn_22mm_m1a2_frag_mag:5"
#define GLRIFLE_MAG_FLARE "vn_22mm_lume_mag:5"
#define GLRIFLE_MAG_AT "vn_22mm_m9_heat_mag:5"
// Carbine
#define CARBINE "vn_m1carbine"
#define CARBINE_MAG "vn_carbine_15_mag:10","vn_carbine_15_t_mag:5"
// AR
#define AR "vn_m1918"
#define AR_MAG "vn_m1918_mag:13","vn_m1918_t_mag:7"
#define AR_ATTACHMENTS "vn_bipod_m1918"
#define AAR_MAG "vn_m1918_mag:10","vn_m1918_t_mag:5"
//AR (1919A6)
#define AR_2 "ace_compat_sog_m1919a6_carry"
#define AR_MAG2 "ace_compat_sog_m1919_250:2"
// AT
#define AT 
#define AT_MAG 
// MMG
#define MMG "ace_compat_sog_m1919a4_carry"
#define MMG_TRI_HI "ace_csw_m3CarryTripod"
#define MMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define MMG_MAG "ace_compat_sog_m1919_250:2"
// MAT
#define MAT "vn_m20a1b1_01"
#define MAT_MAG "vn_m20a1b1_heat_mag:3","vn_m20a1b1_wp_mag:2"
#define MAT_OPTIC 
// HMG
#define HMG "ace_compat_sog_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripodLow"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:2","ace_csw_100Rnd_127x99_mag_red:1"
// HAT
#define HAT 
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG 
// SAM
#define SAM ""
#define SAM_MAG ""
// Sniper
#define SNIPER "vn_m1903"
#define SNIPER_MAG "vn_m1903_mag:15"
#define SNIPER_ATTACHMENTS "vn_o_8x_m1903"
// Spotter
#define SPOTTER "vn_m3a1"
#define SPOTTER_MAG "vn_m3a1_mag:10"
#define SPOTTER_ATTACHMENTS "vn_s_m3a1"
// SMG
#define SMG "vn_m1a1_tommy"
#define SMG_MAG "vn_m1a1_30_mag:7","vn_m1a1_30_t_mag:3"
// CREW SMG
#define SMG_CREW "vn_m3a1"
#define SMG_CREW_MAG "vn_m3a1_t_mag:5"
// Pistol
#define PISTOL "vn_m1911"
#define PISTOL_MAG "vn_m1911_mag:5"
#define PISTOL_ATTACHMENTS 
// Pistol (Night)
#define PISTOL_ALT "vn_mx991_m1911"
// Melee
#define KNIFE "Knife_m3","WBK_BrassKnuckles"
// Grenades
#define LEADER_GRENADES WEST_FRAG,LEADER_SMOKES,WEST_FLARE
#define WEST_FRAG "vn_m61_grenade_mag:2"
#define WEST_FLARE "ACE_HandFlare_Red"
#define WEST_GRENADES WEST_FRAG,WEST_FRAG,BASE_SMOKES,WEST_FLARE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL CAMO_BACKPACK
#define CAMO_VEST_SL "vn_b_vest_usarmy_09"
#define CAMO_VEST_MEDIC "vn_b_vest_usarmy_07"
#define CAMO_VEST_MMG "vn_b_vest_usarmy_06"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR CAMO_BACKPACK
#define CAMO_BACKPACK_FTL "vn_b_pack_lw_01"
#define CAMO_BACKPACK_SL "vn_b_pack_m41_05"
#define CAMO_BACKPACK_MEDIC "vn_b_pack_m5_01"
#define MMGPACK "vn_b_pack_lw_02"
#define MMGPACK2 "vn_b_pack_lw_05"
#define MMG_ATTACHMENTS 

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

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  handguns[] = {KNIFE};
  magazines[] = {RIFLE_MAG,WEST_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,WEST_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  handguns[] = {PISTOL};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,PISTOL_MAG,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  weapons[] = {CARBINE};
  handguns[] = {PISTOL};
  magazines[] = {CARBINE_MAG,PISTOL_MAG,LEADER_GRENADES};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,PISTOL_MAG,LEADER_GRENADES};
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,WEST_GRENADES};
  handguns[] = {PISTOL};
};
class aar: Fic_Soldier_Carbine {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AAR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  weapons[] = {GLRIFLE};
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_AT,GLRIFLE_MAG_SMOKE,WEST_GRENADES};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  handguns[] = {PISTOL};
  magazines[] = {CARBINE_MAG,PISTOL_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: Fic_Soldier_Carbine {
  linkedItems[] += {BINOS};
};
class mmgg: ar {// MMG
  vest[] = {CAMO_VEST_MMG};
  launchers[] = {MMG};
  backpack[] = {MMGPACK};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,PISTOL_MAG,WEST_GRENADES,MMG_MAG};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  launchers[] = {MMG_TRI_LO};
  backpack[] = {MMGPACK2};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"potato_vz99_carryWeapon"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:6","potato_vz99_flare:2"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:2","potato_vz99_smokeWhite:4","potato_vz99_flare:2"};
};
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,WEST_GRENADES};
  items[] += {RADIO_MR,"ACE_SpottingScope","ACE_EntrenchingTool"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,WEST_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod","ACE_EntrenchingTool"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG_CREW};
  magazines[] = {SMG_CREW_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG_CREW};
  handguns[] = {};
  magazines[] = {SMG_CREW_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  handguns[] = {};
  items[] += {BASE_ENG,BASE_MEDICAL};
  linkedItems[] = {LINKED,LEADER_LINKED};
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
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
};
class rifleman_02: rifleman {// Rifleman 2
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,WEST_GRENADES};
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {"vn_b_pack_lw_07"};
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
};
class mmgl: sl {// MMG Lead
  launchers[] = {MMG_TRI_HI};
  backpack[] = {MMGPACK2};
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
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
  magazines[] += {SAM_MAG};
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

//SF Classes

#define SF_UNIFORM
#define SF_VEST
#define SF_VEST_AR
#define SF_VEST_FTL
#define SF_VEST_SL
#define SF_VEST_SNIPER
#define SF_HEADGEAR
#define SF_BACKPACK
#define SF_CARRYALL

#define SF_RIFLE
#define SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG


#define SF_GLRIFLE
#define SF_GLRIFLE_MAG
#define SF_GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER
#define SF_SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS

#define SF_AT
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL
#define SF_PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};