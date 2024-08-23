author = "AChesheireCat";
description = "Askeland Defense Force (ADF) c. 2023 - this loadout uses the mod Project True Viking [2.0] and recreates the fictional country's military.";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "ptv_u_g3_trollmtp","ptv_u_g3_trollmtp_rs"
#define CAMO_VEST "V_thor_r","V_thor_r2","V_thor"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "B_Carryall_cbr"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Tan","CUP_H_OpsCore_Tan_SF"
#define CAMO_HEADGEAR_SPECIAL "ptv_ballcap_ct3_t"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "CUP_U_B_USArmy_PilotOverall"
#define CAMO_VEST_PILOT "Aircrew_vest_2_NH"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_green_visor"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_B_USArmy_PilotOverall"
#define CAMO_VEST_VICC "V_thor03"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "rhs_tsh4","rhs_tsh4_ess"
// Rifle
#define RIFLE "ptv_rs556"
#define RIFLE_MAG "ptv_30Rnd_556x45_L5awm:7","ptv_30Rnd_556x45_L5awm_Red:3"
#define RIFLE_ATTACHMENTS "ptv_dbalsf","ptv_compm5","ptv_acc_grip2"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_compm4s","ptv_t1","ptv_eot552","ptv_xps3"
// GL Rifle
#define GLRIFLE "ptv_rs556_gl"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE "ptv_rs556s"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "ptv_ng5_b"
#define AR_MAG "ptv_150Rnd_556x45_Negev:3"
// AT
#define AT "launch_NLAW_F"
#define AT_MAG 
// Light AT
#define ATLIGHT "ptv_m72a7"
#define ATLIGHT_MAG 
#define ATLIGHT_ATTACHMENTS "ACE_DBAL_A3_Green"
// MMG
#define MMG "CUP_lmg_PKM_top_rail_B50_vfg"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M:5"
// MAT
#define MAT "CUP_launch_MAAWS"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "CUP_TOW2_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO "ace_csw_m220CarryTripod"
#define HAT_MAG "CUP_compats_TOW2_M:1"
// SAM
#define SAM "CUP_launch_9K32Strela_Loaded"
#define SAM_MAG "CUP_Strela_2_M:1"
// Sniper
#define SNIPER "ptv_AX_g"
#define SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:20"
#define SNIPER_OPTIC "ptv_PMII_525_wdl","ACE_DBAL_A3_Green","ptv_1a2"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_OPTIC "ptv_xps3","ptv_dbalsf","ptv_acc_grip4"
// SMG
#define SMG "ptv_cbj_ms2_b"
#define SMG_MAG "ptv_100Rnd_65x25_CBJ_Mag:1","ptv_30Rnd_65x25_CBJ_Mag:1"
// Pistol
#define PISTOL "ptv_p320_b"
#define PISTOL_MAG "ptv_15Rnd_9mm_P320:3"
#define PISTOL_OPTIC "potato_strongerFlashlights_Vanilla_HG_LED_flashlight","ptv_romeo1pro"
// Grenades
#define LEADER_GRENADES DEF_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "ptv_mag_frag03:2"
#define SIDE_SMOKE "ptv_mag_smoke01:2"
#define OFF_FRAG "ptv_mag_frag01:2"
#define DEF_FRAG "ptv_mag_frag02:2"
#define BASE_GRENADES DEF_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL "V_thor02"
#define CAMO_VEST_SL "V_thor_sl","V_thor_tl"
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "B_FieldPack_cbr"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "ptv_RadioBag_01_Desert"
#define CAMO_BACKPACK_MEDIC CARRYALL
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define NVG "ptv_ANPVS_14"

//  init = "this addGoggles selectRandom ['ptv_shemagh_ct3_t','ptv_shemagh_ct3_g','ptv_shemagh_ess_ct3_g','ptv_shemagh_ess_ct3_t','None'];"

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
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad"};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
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
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  items[] += {"ACE_EntrenchingTool"};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
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
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_OPTIC};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
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
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG,"WBK_HeadLampItem",BASE_MEDICAL};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
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
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {ATLIGHT_MAG};
  launchers[] = {ATLIGHT};
  secondaryAttachments[] = {ATLIGHT_ATTACHMENTS};
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
  items[] += {"ACE_EntrenchingTool"};
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

#define SF_UNIFORM "ptv_u_g3_trollmtp","ptv_u_g3_trollmtp_rs","ptv_u_g3cw_trollmtp_apg"
#define SF_VEST "acp_US_OCP_modern_west_lite_V_Crye_AVS_1_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_1_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_2_US_OCP","acp_US_OCP_modern_west_lite_V_Crye_AVS_1_3_US_OCP"
#define SF_VEST_AR "acp_US_OCP_modern_west_lite_V_Crye_AVS_2_US_OCP"
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "CUP_H_OpsCore_Covered_MCAM_SF","CUP_H_OpsCore_Covered_MCAM"
#define SF_BACKPACK "B_Battle_Belt_F"
#define SF_CARRYALL "acp_US_OCP_core_lite_B_Kitbag_rgr_US_OCP"

#define SF_RIFLE "CUP_arifle_Mk16_CQC_black","CUP_arifle_Mk16_CQC_AFG_black","CUP_arifle_Mk16_CQC_FG_black"
#define SF_RIFLE_MAG "CUP_30Rnd_556x45_Emag:7","CUP_30Rnd_556x45_Emag_Tracer_Red:3"
#define SF_RIFLE_ATTACHMENTS "ptv_xps3","ptv_dbalsf","ptv_rotex"
#define SF_OPTICS "ptv_eot552","ptv_t1","ptv_compm5"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_CARBINE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE "CUP_arifle_Mk16_CQC_EGLM_black"
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:10"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define SF_GLRIFLE_MAG_ILLUM "ACE_40mm_Flare_ir:4"

#define SF_AR "ptv_m60e4rs"
#define SF_AR_MAG "ptv_100Rnd_762x51_Barrier_M60:4"
#define SF_AR_ATTACHMENTS "ptv_eot552","ptv_dbala2","CUP_muzzle_snds_socom762rc"

#define SF_SNIPER "ptv_AX_g"
#define SF_SNIPER_MAG "ACE_10Rnd_338_300gr_HPBT_Mag:5"
#define SF_SNIPER_ATTACHMENTS "ptv_PMII_wdl_sunshade","ACE_DBAL_A3_Green","muzzle_snds_338_green","ptv_hbrs"

#define SF_AT "ptv_m72a7"
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS "ACE_DBAL_A3_Green"

#define SF_PISTOL "ptv_g19t"
#define SF_PISTOL_MAG "ptv_17Rnd_9mm_G17:3"
#define SF_PISTOL_ATTACHMENTS "potato_strongerFlashlights_Vanilla_HG_LED_flashlight"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  handguns[] = {SF_PISTOL};
  magazines[] = {SF_RIFLE_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  items[] = {TOOLS,"WBK_HeadLampItem"};
  linkedItems[] = {LINKED,"ACE_NVG_Gen4_Black_WP"};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
  opticChoices[] = {SF_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  uniform[] = {SF_UNIFORM};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_CARBINE_MAG,SF_SNIPER_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  backpackItems[] += {SF_CARBINE,SF_CARBINE_ATTACHMENTS};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod","WBK_HeadLampItem"};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  backpack[] = {"ptv_DeltaPack_AFG_Ask"};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  attachments[] = {SF_AR_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  backpack[] = {"ptv_DeltaPack_AFG_Ask"};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES,SF_PISTOL_MAG};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER,"ACE_NVG_Gen4_Black_WP"};
  items[] += {RADIO_MR};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_PISTOL_MAG,MEDIC_GRENADES};
  backpack[] = {"ptv_DeltaPack_AFG_Med"};
  backpackItems[] = {MEDIC_MEDICAL};
};