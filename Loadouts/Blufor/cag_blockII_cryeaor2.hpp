author = "You";
description = "paste your loadout config from the arseanal exporter";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_CRYE_G3C_AOR2"
#define CAMO_VEST "acp_main_Crye_AVS_1_base","acp_main_Crye_AVS_1_1_base","acp_main_Crye_AVS_1_2_base","acp_main_Crye_AVS_1_3_base"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "B_Carryall_mcamo"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Covered_MCAM_US_SF","CUP_H_OpsCore_Covered_MCAM_SF","CUP_H_OpsCore_Covered_MCAM"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_USA_Cap_Mcam_DEF","H_Booniehat_mcamo"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "U_B_HeliPilotCoveralls"
#define CAMO_VEST_PILOT "CUP_V_B_PilotVest"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_CrewHelmetHeli_B","MNP_Helmet_Dslyecxi","MNP_Helmet_STPilot"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_CPC_light_mc"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "CUP_arifle_M4A1_SOMMOD_black","CUP_arifle_M4A1_SOMMOD_Grip_black","CUP_arifle_HK416_Black","arifle_SPAR_02_blk_F"
#define RIFLE_MAG "CUP_30Rnd_556x45_PMAG_BLACK:7","CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red:3"
#define RIFLE_ATTACHMENTS "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "CUP_optic_Elcan_SpecterDR_coyote"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "cup_optic_eotech553_coyote","optic_holosight","cup_optic_microt1","cup_optic_g33_hws_coyote","cup_optic_sb_11_4x20_pm_pip"
// GL Rifle
#define GLRIFLE "CUP_arifle_HK416_AGL_Black"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
#define CARBINE_MAG_REDUCED "CUP_30Rnd_556x45_PMAG_BLACK:6"
// AR
#define AR "CUP_lmg_L110A1"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch:1","CUP_100Rnd_TE4_Red_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_M136_Loaded"
#define AT_MAG "CUP_M136_M:1"
// MMG
#define MMG "CUP_lmg_M240_B"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "MRAWS_HEAT55_F:3","MRAWS_HE_F:2"
#define MAT_OPTIC "CUP_acc_ANPEQ_15"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "CUP_Javelin_M:1"
// SAM
#define SAM "CUP_launch_FIM92Stinger_Loaded"
#define SAM_MAG "CUP_Stinger_M:2"
// Sniper
#define SNIPER "CUP_srifle_M2010_dsrt"
#define SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:10"
#define SNIPER_OPTIC "muzzle_snds_B_snd_F", "ACE_optic_LRPS_PIP", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER "CUP_arifle_M4A1_SOMMOD_black"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC "hlc_muzzle_556NATO_rotexiiic_tan", "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "CUP_optic_Elcan_SpecterDR_coyote", "CUP_bipod_Harris_1A2_L_BLK"
// SMG
#define SMG "CUP_arifle_mk18_black"
#define SMG_MAG "ACE_30Rnd_556x45_Stanag_Mk318_mag:5"
// Pistol
#define PISTOL "CUP_hgun_Glock17_blk"
#define PISTOL_MAG "CUP_17Rnd_9x19_glock17:2"
#define PISTOL_OPTIC "hlc_acc_tlr1"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define AR_VEST "acp_main_Crye_AVS_2_base"
#define FTL_VEST CAMO_VEST
#define SL_VEST CAMO_VEST
#define M_VEST CAMO_VEST
#define LATPACK CAMO_BACKPACK
#define ARPACK "B_AssaultPack_mcamo"
#define FTLPACK "B_AssaultPack_mcamo"
#define MPACK "B_Kitbag_mcamo"
#define MMG_ATTACHMENTS "cup_optic_acog_ta648_308_rds_black","cup_acc_anpeq_15"
#define DMR "CUP_srifle_M110","CUP_srifle_m110_kac"
#define DMR_MAG "CUP_20Rnd_762x51_L129_M:10"
#define DMR_ATTACHMENTS "optic_ams","cup_acc_anpeq_15","cup_muzzle_snds_m110","cup_bipod_harris_1a2_l_blk"

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
class Box_NATO_Ammo_F {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,CARBINE_MAG,CARBINE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,LEADER_GRENADES,LEADER_GRENADES,LEADER_GRENADES};
};
class Box_NATO_WpsLaunch_F{
  TransportWeapons[] = {AT,AT,AT,AT};
};

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
  vest[] = {FTL_VEST};
  backpack[] = {FTLPACK};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {SL_VEST};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  vest[] = {AR_VEST};
  backpack[] = {ARPACK};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {"cup_acc_anpeq_15"};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {ARPACK};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {LATPACK};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {M_VEST};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {MPACK};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  vest[] = {AR_VEST};
  magazines[] = {CARBINE_MAG_REDUCED,BASE_GRENADES,MMG_MAG};
  backpack[] = {CARRYALL};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] = {CARBINE_MAG_REDUCED,BASE_GRENADES,MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] = {CARBINE_MAG_REDUCED,BASE_GRENADES,MAT_MAG};
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
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
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
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {CARRYALL};
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
  backpack[] = {CARRYALL};
  magazines[] = {CARBINE_MAG_REDUCED,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,PISTOL_MAG,MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] = {CARBINE_MAG_REDUCED,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
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
