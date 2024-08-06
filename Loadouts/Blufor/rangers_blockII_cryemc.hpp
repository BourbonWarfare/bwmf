author = "AChesheireCat";
description = "US Army Ranger Regiment c. 2023";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_CRYE_G3C_MC_US","CUP_U_CRYE_G3C_MC_US_V2"
#define CAMO_VEST "acp_US_OCP_modern_west_lite_V_Crye_AVS_1_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_1_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_2_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_3_US_OCP"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "B_Carryall_mcamo"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Covered_MCAM_US_SF","CUP_H_OpsCore_Covered_MCAM_SF","CUP_H_OpsCore_Covered_MCAM"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_USA_Cap_Mcam_DEF","H_Booniehat_mcamo"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "U_B_HeliPilotCoveralls"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_CrewHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_CPC_light_mc"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "CUP_arifle_M4A1_SOMMOD_black","CUP_arifle_M4A1_SOMMOD_Grip_black","CUP_arifle_Mk16_CQC","CUP_arifle_Mk16_CQC_FG","CUP_arifle_M4A1_SOMMOD_black"
#define RIFLE_MAG "hlc_30rnd_556x45_MDim_PMAG:7","hlc_30rnd_556x45_t_PMAG:3"
#define RIFLE_ATTACHMENTS "hlc_muzzle_556NATO_rotexiiic_tan","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "ptv_xps3_des"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "cup_optic_eotech553_coyote","ptv_compm4s","ptv_t1","ptv_compm5"
#define MAG_OPTICS "ptv_xps3xmag_des_pip","ptv_shortdot","CUP_optic_Elcan_SpecterDR_coyote"
// GL Rifle
#define GLRIFLE "CUP_arifle_mk18_m203_black"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE "CUP_arifle_mk18_black"
#define CARBINE_MAG RIFLE_MAG
#define CARBINE_MAG_REDUCED "hlc_30rnd_556x45_t_PMAG:5"
// AR
#define AR "CUP_lmg_L110A1"
#define AR_MAG "CUP_100Rnd_TE4_Red_Tracer_556x45_M249:4"
// AT
#define AT "ptv_m72a7"
#define AT_MAG 
#define AT_ATTACHMENTS "CUP_acc_ANPEQ_15"
// AT 2
#define AT2 "CUP_launch_M136_Loaded"
#define AT2_MAG "CUP_M136_M:1"
// MMG - M240
#define MMG "CUP_lmg_M240_B"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MMG 2 - Mk48
#define MMG2 "CUP_lmg_Mk48_nohg"
#define MMG2_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
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
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_M2010_dsrt"
#define SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:10"
#define SNIPER_ATTACHMENTS "muzzle_snds_B_snd_F", "ACE_optic_LRPS_PIP", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER "CUP_arifle_M4A1_SOMMOD_black"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "hlc_muzzle_556NATO_rotexiiic_tan", "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "CUP_optic_Elcan_SpecterDR_coyote", "CUP_bipod_Harris_1A2_L_BLK"
// SMG
#define SMG "CUP_arifle_mk18_black"
#define SMG_MAG "ACE_30Rnd_556x45_Stanag_Mk318_mag:5"
// Pistol - Glock 19
#define PISTOL "ptv_g19t"
#define PISTOL_MAG "ptv_15Rnd_9mm_G19:1","ptv_17Rnd_9mm_G17:2"
#define PISTOL_OPTIC "ptv_x300"
// Pistol 2 - M17
#define PISTOL2 "CUP_hgun_M17_Coyote"
#define PISTOL2_MAG "CUP_17Rnd_9x19_M17_Coyote:1","CUP_21Rnd_9x19_M17_Coyote:2"
#define PISTOL2_OPTIC "potato_strongerFlashlights_Vanilla_HG_LED_flashlight","optic_MRD_black"
// Secondary GL
#define GLPISTOL "ptv_hk69"
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "HandGrenade:2"
#define SIDE_SMOKE "SmokeShell:2"
#define FLASHBANG "ACE_CTS9:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED,"ACE_NVG_Gen4_Black_WP"
#define LEADER_LINKED BASE_LEADER_LINKED,"ACE_NVG_Gen4_Black_WP"


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "acp_US_OCP_modern_west_lite_V_Crye_AVS_2_US_OCP"
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "acp_US_OCP_core_lite_B_Kitbag_rgr_US_OCP"
#define CAMO_BACKPACK_FTL "B_AssaultPack_mcamo"
#define CAMO_BACKPACK_SL CAMO_BACKPACK_FTL
#define CAMO_BACKPACK_MEDIC "ptv_DeltaPack_AFG"
#define MMG_ATTACHMENTS "ptv_specterdr6_des_2d","cup_acc_anpeq_15"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define DMR "CUP_srifle_M110","CUP_srifle_m110_kac"
#define DMR_MAG "CUP_20Rnd_762x51_L129_M:10"
#define DMR_ATTACHMENTS "optic_ams","cup_acc_anpeq_15","cup_muzzle_snds_m110","cup_bipod_harris_1a2_l_blk"

#define BRIFLE "CUP_arifle_Mk17_STD_FG","CUP_arifle_Mk17_STD"
#define BRIFLE_MAG "CUP_20Rnd_762x51_B_SCAR:7","CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR:3"
#define BRIFLE_ATTACHMENTS "ptv_specterdr6_des_2d","CUP_acc_ANPEQ_15","ptv_1a2"

//  init = "this addGoggles selectRandom ['cwr3_b_facewear_scrimnet_scarf_olive','G_Shades_Red','CUP_G_ESS_BLK','CUP_G_WatchGPSCombo','CUP_G_Oakleys_Drk','CUP_FR_NeckScarf','CUP_G_ESS_KHK_Dark'];"

//Gas Mask: "G_AirPurifyingRespirator_01_F"

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
class ftl: Fic_Soldier_Carbine {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {RIFLE};
  handguns[] = {GLPISTOL};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad"};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
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
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {"cup_acc_anpeq_15"};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  secondaryAttachments[] = {AT_ATTACHMENTS};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,PISTOL2_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
  handguns[] = {PISTOL2};
  handgunAttachments[] = {PISTOL2_OPTIC};
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
  backpack[] = {CARRYALL};
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
  magazines[] += {MAT_MAG2};
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
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {DMR};
  backpack[] = {CARRYALL};
  magazines[] = {DMR_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {DMR_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_ATTACHMENTS};
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
  attachments[] = {"optic_holosight"};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_NVG_GPNVG_black_WP"};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  attachments[] = {"optic_holosight"};
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
  weapons[] = {BRIFLE};
  magazines[] = {BRIFLE_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {BRIFLE_ATTACHMENTS};
  backpackItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,"ACE_salineIV_500:2"};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class rifleman_03: rifleman {// Rifleman 3
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR,"acex_intelitems_notepad"};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY,"acex_intelitems_notepad"};
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
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG3};
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
  linkedItems[] = {LINKED,LEADER_LINKED};
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