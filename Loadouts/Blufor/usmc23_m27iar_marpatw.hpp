author = "AChesheireCat";
description = "United States Marine Corps c.2023";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_B_USMC_FROG3_WMARPAT","CUP_U_B_USMC_MCCUU_gloves","CUP_U_B_USMC_MCCUU_roll_2_gloves","CUP_U_B_USMC_MCCUU_gloves"
#define CAMO_VEST "acp_Solid_CoyoteBrown_lite_LBT_G3_Solid_CoyoteBrown"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "acp_Solid_CoyoteBrown_lite_B_Carryall_Solid_CoyoteBrown"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Tan"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_FR_BoonieMARPAT"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USMC_PilotOverall"
#define CAMO_VEST_PILOT "CUP_V_B_Eagle_SPC_Empty"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_PilotHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_B_USMC_MCCUU_gloves"
#define CAMO_VEST_VICC "CUP_V_B_Eagle_SPC_Crew"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_b_headgear_cvc"
// Rifle
#define RIFLE "CUP_arifle_HK_M27","CUP_arifle_HK_M27_VFG"
#define RIFLE_MAG "hlc_30rnd_556x45_TDim_L5:7","hlc_30rnd_556x45_M_L5:3"
#define RIFLE_ATTACHMENTS "cup_muzzle_snds_m16", "cup_acc_anpeq_15_tan_top", "cup_optic_sb_11_4x20_pm"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "cup_optic_acog_ta31_kf","cup_optic_g33_hws_blk","cup_optic_aimm_microt1_blk","cup_optic_vortexrazor_uh1_black","optic_holosight_blk_f","cup_optic_eotech553_black","cup_optic_microt1"
// GL Rifle
#define GLRIFLE "CUP_arifle_HK_M27_AG36"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_MAG_HUNTIR "ACE_HuntIR_M203:3"
// Carbine
#define CARBINE "CUP_arifle_M4A1_black"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_HK_M27_VFG"
#define AR_MAG "CUP_60Rnd_556x45_SureFire_Tracer_Red:10"
#define AR_ATTACHMENTS "cup_muzzle_snds_m16", "cup_acc_anpeq_15_tan_top", "cup_optic_sb_11_4x20_pm", "CUP_bipod_Harris_1A2_L_BLK"
// AT
#define AT "launch_MRAWS_green_F"
#define AT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
// MMG
#define MMG "CUP_lmg_M240_B"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "CUP_launch_Mk153Mod0_blk"
#define MAT_MAG "CUP_SMAW_HEAA_M:2","CUP_SMAW_HEDP_M:1","CUP_SMAW_Spotting:5"
#define MAT_OPTIC "CUP_acc_ANPEQ_15", "CUP_optic_SMAW_Scope"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "CUP_Javelin_M:2"
// SAM
#define SAM "CUP_launch_FIM92Stinger_Loaded"
#define SAM_MAG "CUP_Stinger_M:1"
// Sniper
#define SNIPER "CUP_srifle_M2010_wdl"
#define SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:20"
#define SNIPER_ATTACHMENTS "muzzle_snds_B", "ACE_acc_pointer_green", "CUP_optic_LeupoldM3LR", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER "CUP_arifle_HK_M27"
#define SPOTTER_MAG "ACE_30Rnd_556x45_Stanag_Mk262_mag:10"
#define SPOTTER_ATTACHMENTS "CUP_muzzle_snds_M16_coyote", "cup_acc_anpeq_15", "CUP_optic_LeupoldM3LR", "CUP_bipod_Harris_1A2_L_BLK"
// SMG
#define SMG "CUP_smg_MP5A5_Rail"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:5"
// Pistol
#define PISTOL "CUP_hgun_M17_Coyote"
#define PISTOL_MAG "CUP_21Rnd_9x19_M17_Coyote:3"
#define PISTOL_ATTACHMENTS "hlc_acc_tlr1"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS,"ACE_EntrenchingTool"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED,"ACE_NVG_Gen4_Black"
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT "acp_Solid_CoyoteBrown_lite_B_Kitbag_rgr_Solid_CoyoteBrown"
#define CAMO_BACKPACK_AR "acp_Solid_CoyoteBrown_lite_B_AssaultPack_Solid_CoyoteBrown"
#define CAMO_BACKPACK_FTL "acp_Solid_CoyoteBrown_lite_B_AssaultPackEnhanced_Solid_CoyoteBrown"
#define CAMO_BACKPACK_MEDIC "B_Kitbag_cbr"
#define MMG_ATTACHMENTS "cup_optic_acog_ta648_308_rds_black","cup_acc_anpeq_15"

class Car {
  TransportWeapons[] = {CARBINE,"CUP_launch_M136:2"};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,"SatchelCharge_Remote_Mag:1"};
  TransportItems[] = {MEDIC_MEDICAL,MEDIC_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,"ACE_M26_Clacker:1"};
};
class Tank {
  TransportWeapons[] = {CARBINE,"CUP_launch_M136:2"};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,"SatchelCharge_Remote_Mag:1"};
  TransportItems[] = {MEDIC_MEDICAL,MEDIC_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,"ACE_M26_Clacker:1"};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,"SatchelCharge_Remote_Mag:1"};
  TransportItems[] = {MEDIC_MEDICAL,MEDIC_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,"ACE_M26_Clacker:1"};
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
  items[] = {TOOLS,"CUP_H_FR_BoonieMARPAT"};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  handguns[] = {PISTOL};
  secondaryAttachments[] = {PISTOL_ATTACHMENTS};
  magazines[] += {PISTOL_MAG,GLRIFLE_MAG_HUNTIR};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER,SIDE_UAV_TERMINAL};
  items[] += {RADIO_MR,"ACE_HuntIR_monitor"};
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
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {AR_ATTACHMENTS};
  secondaryAttachments[] = {PISTOL_ATTACHMENTS};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  vest[] = {"CUP_V_B_Eagle_SPC_MG"};
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
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
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
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod","CUP_H_FR_BoonieMARPAT"};
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
  vest[] = {"CUP_V_B_Eagle_SPC_GL"};
  backpack[] = {CAMO_BACKPACK};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,BASE_GRENADES};
};
class rifleman_03: rifleman {// Rifleman 2
  backpack[] = {CAMO_BACKPACK};
  launchers[] = {"CUP_launch_M136"};
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
  launchers[] = {SAM};
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

#define SF_UNIFORM "CUP_U_B_USMC_MCCUU_MARPAT_M81_roll_gloves","CUP_U_B_USMC_MCCUU_MARPAT_M81_gloves","CUP_U_B_USMC_MCCUU_roll_2_gloves","CUP_U_B_USMC_MCCUU_gloves"
#define SF_VEST "acp_Solid_CoyoteBrown_lite_V_Crye_AVS_1_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_lite_V_Crye_AVS_1_1_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_lite_V_Crye_AVS_1_2_Solid_CoyoteBrown","acp_Solid_CoyoteBrown_lite_V_Crye_AVS_1_3_Solid_CoyoteBrown"
#define SF_VEST_AR "acp_Solid_CoyoteBrown_lite_V_Crye_AVS_2_Solid_CoyoteBrown"
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER "acp_Solid_CoyoteBrown_lite_LBT_G3_Solid_CoyoteBrown"
#define SF_HEADGEAR "CUP_H_OpsCore_Tan","CUP_H_OpsCore_Tan_SF"
#define SF_BACKPACK "acp_Solid_CoyoteBrown_lite_B_TacticalPack_Solid_CoyoteBrown"
#define SF_CARRYALL "acp_Solid_CoyoteBrown_lite_B_Kitbag_rgr_Solid_CoyoteBrown"

#define SF_RIFLE "arifle_SPAR_01_blk_F"
#define SF_RIFLE_MAG "hlc_30rnd_556x45_TDim_PMAG:7","hlc_30rnd_556x45_M_PMAG:3"
#define SF_RIFLE_ATTACHMENTS "optic_holosight","cup_acc_anpeq_15_top_flashlight_tan_l"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG


#define SF_GLRIFLE "arifle_SPAR_01_GL_blk_F"
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:10"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:2"
#define SF_GLRIFLE_MAG_ILLUM "UGL_FlareCIR_F:5"

#define SF_AR "CUP_lmg_Mk48_nohg"
#define SF_AR_MAG "hlc_200Rnd_762x51_Mdim_M60E4:2"
#define SF_AR_ATTACHMENTS "cup_optic_acog_ta648_308_rds_black","cup_acc_anpeq_15"

#define SF_SNIPER "CUP_srifle_m110_kac"
#define SF_SNIPER_MAG "CUP_20Rnd_762x51_L129_M:10"
#define SF_SNIPER_ATTACHMENTS "optic_tws","cup_acc_anpeq_15","cup_muzzle_snds_m110","cup_bipod_vltor_modpod"

#define SF_AT "launch_MRAWS_green_F"
#define SF_AT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
#define SF_AT_ATTACHMENTS "cup_acc_anpeq_15"

#define SF_PISTOL "hgun_ACPC2_F"
#define SF_PISTOL_MAG "9Rnd_45ACP_Mag:3"
#define SF_PISTOL_ATTACHMENTS "hlc_acc_tlr1"

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