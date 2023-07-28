author = "You";
description = "SF Section is the relevant section; Green Berets (SFOD-A) c. 2020";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_CRYE_G3C_MC_US","CUP_U_CRYE_G3C_MC_US_V2"
#define CAMO_VEST "acp_main_Crye_AVS_1_base","acp_main_Crye_AVS_1_1_base","acp_main_Crye_AVS_1_2_base","acp_main_Crye_AVS_1_3_base"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "B_Carryall_mcamo"
#define CAMO_HEADGEAR "CUP_H_OpsCore_Covered_MCAM_US_SF","CUP_H_OpsCore_Covered_MCAM_SF","CUP_H_OpsCore_Covered_MCAM"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_USA_Cap_Mcam_DEF","H_Booniehat_mcamo"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "U_B_HeliPilotCoveralls"
#define CAMO_VEST_PILOT "CUP_V_B_PilotVest"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_CrewHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "CUP_V_CPC_light_mc"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "CUP_H_CVC"
// Rifle
#define RIFLE "CUP_arifle_M4A1_SOMMOD_black","CUP_arifle_M4A1_SOMMOD_Grip_black","CUP_arifle_Mk16_CQC"
#define RIFLE_MAG "hlc_30rnd_556x45_MDim_PMAG:7","hlc_30rnd_556x45_M_PMAG:3"
#define RIFLE_ATTACHMENTS "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "CUP_optic_Elcan_SpecterDR_coyote"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "cup_optic_eotech553_coyote","optic_holosight","cup_optic_microt1","cup_optic_g33_hws_coyote","cup_optic_sb_11_4x20_pm_pip"
// GL Rifle
#define GLRIFLE "CUP_arifle_mk18_m203_black"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
#define CARBINE_MAG_REDUCED "hlc_30rnd_556x45_t_PMAG:6"
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
#define SNIPER_ATTACHMENTS "muzzle_snds_B_snd_F", "ACE_optic_LRPS_PIP", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER "CUP_arifle_M4A1_SOMMOD_black"
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "hlc_muzzle_556NATO_rotexiiic_tan", "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L", "CUP_optic_Elcan_SpecterDR_coyote", "CUP_bipod_Harris_1A2_L_BLK"
// SMG
#define SMG "CUP_arifle_mk18_black"
#define SMG_MAG "ACE_30Rnd_556x45_Stanag_Mk318_mag:5"
// Pistol
#define PISTOL "CUP_hgun_Glock17_blk"
#define PISTOL_MAG "CUP_17Rnd_9x19_glock17:2"
#define PISTOL_ATTACHMENTS "hlc_acc_tlr1"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "acp_main_Crye_AVS_2_base"
#define CAMO_VEST_FTL CAMO_VEST
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "B_AssaultPack_mcamo"
#define CAMO_BACKPACK_FTL "B_AssaultPack_mcamo"
#define CAMO_BACKPACK_MEDIC "B_Kitbag_mcamo"
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

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
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
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};

class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {"cup_acc_anpeq_15","CUP_optic_Elcan_SpecterDR_coyote"};
  handguns[] = {PISTOL};
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
  vest[] = {CAMO_VEST_AR};
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
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
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

//SF Classes

#define SF_UNIFORM "U_B_survival_uniform"
#define SF_VEST "acp_main_Crye_AVS_1_base","acp_main_Crye_AVS_1_1_base","acp_main_Crye_AVS_1_2_base","acp_main_Crye_AVS_1_3_base","CUP_V_B_Armatus_BB_US_MCam","CUP_V_B_Armatus_BB_MCam"
#define SF_VEST_AR "acp_main_Crye_AVS_2_base"
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "H_Booniehat_mcamo"
#define SF_HEADGEAR_ALT "CUP_H_OpsCore_Tan_SF"
#define SF_BACKPACK "B_Kitbag_mcamo"
#define SF_CARRYALL "B_Carryall_mcamo"

#define SF_ALT_OPTICS "cup_optic_microt1","cup_optic_compm4","cup_optic_eotech553_coyote","cup_optic_vortexrazor_uh1_black"

#define SF_RIFLE "CUP_arifle_M4A1_SOMMOD_black"
#define SF_RIFLE_MAG "hlc_30rnd_556x45_MDim_PMAG:6","hlc_30rnd_556x45_t_PMAG:4"
#define SF_RIFLE_ATTACHMENTS "optic_holosight", "cup_acc_anpeq_15_top_flashlight_tan_l", "hlc_muzzle_556nato_rotexiiic_tan"

#define SF_CARBINE "arifle_SPAR_01_blk_F","CUP_arifle_mk18_black","CUP_arifle_Mk16_CQC"
#define SF_CARBINE_MAG SF_RIFLE_MAG

#define SF_GLRIFLE "arifle_SPAR_01_GL_blk_F","CUP_arifle_mk18_m203_black"
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:4","1Rnd_SmokeRed_Grenade_shell:2","1Rnd_SmokeBlue_Grenade_shell:2"
#define SF_GLRIFLE_MAG_ILLUM "UGL_FlareCIR_F:4"

#define SF_AR "CUP_lmg_Mk48_nohg"
#define SF_AR_MAG "hlc_100Rnd_762x51_Barrier_M60E4:5"
#define SF_AR_ATTACHMENTS "cup_optic_eotech553_black","cup_acc_anpeq_15"

#define SF_SNIPER "CUP_srifle_M2010_blk"
#define SF_SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:10"
#define SF_SNIPER_ATTACHMENTS "ace_optic_lrps_2d","ace_acc_pointer_green","muzzle_snds_b_snd_f","cup_bipod_harris_1a2_l_blk"

#define SF_AT "launch_MRAWS_green_F"
#define SF_AT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
#define SF_AT_ATTACHMENTS "cup_acc_anpeq_15"

#define SF_SMG "CUP_smg_MP7"
#define SF_SMG_MAG "CUP_40Rnd_46x30_MP7:6"
#define SF_SMG_ATTACHMENTS "cup_optic_microt1","cup_acc_anpeq_15","cup_muzzle_snds_mp7"

#define SF_PISTOL "CUP_hgun_M17_Coyote"
#define SF_PISTOL_MAG "CUP_21Rnd_9x19_M17_Coyote:3"
#define SF_PISTOL_ATTACHMENTS "optic_mrd_black","hlc_acc_tlr1"

#define SF_GRENADES "ACE_Chemlight_IR:5","ACE_CTS9:2","HandGrenade:2","SmokeShell:2"
#define SF_FAC_GRENADES "1Rnd_SmokeBlue_Grenade_shell:4","1Rnd_SmokeGreen_Grenade_shell:5","1Rnd_SmokeOrange_Grenade_shell:3","1Rnd_SmokeYellow_Grenade_shell:3"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL,SF_HEADGEAR_ALT};
  weapons[] = {SF_RIFLE};
  handguns[] = {SF_PISTOL};
  magazines[] = {SF_RIFLE_MAG,SF_PISTOL_MAG,SF_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED,"Nikon_DSLR_HUD"};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
  opticChoices[] = {SF_ALT_OPTICS};
  init = "this addGoggles 'G_B_Diving'";
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02 - aka sniper/marksman
  vest[] = {SF_VEST_SNIPER};
  backpack[] = {"ace_gunbag_Tan"};
  backpackItems[] = {SF_SNIPER,SF_SNIPER_ATTACHMENTS};
  weapons[] = {SF_SMG};
  handguns[] = {};
  magazines[] = {SF_SMG_MAG,SF_SNIPER_MAG,SF_GRENADES};
  items[] = {TOOLS,BASE_MEDICAL,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] = {LINKED,RANGE_FINDER};
  attachments[] = {SF_SMG_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  backpack[] = {"B_TacticalPack_mcamo"};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,SF_GRENADES};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,SF_PISTOL_MAG,SF_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,SF_PISTOL_MAG,LEADER_GRENADES,"ACE_HandFlare_Green:2","ACE_HandFlare_Red:2"};
  items[] += {LEADER_TOOLS,RADIO_MR};
  linkedItems[] += {LINKED,LEADER_LINKED,RANGE_FINDER};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_PISTOL_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};
class fac: sf_rifleman {// FAC
  magazines[] = {SF_RIFLE_MAG,SF_PISTOL_MAG,SF_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  backpack[] = {"B_RadioBag_01_mtp_F"};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
  items[] += {RADIO_MR,RADIO_MR,BASE_MEDICAL};
};
class uav: sf_rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  backpackItems[] = {};
  items[] += {BASE_MEDICAL};
};
class demo: sf_rifleman {// Explosive Specialist
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_PISTOL_MAG,SF_GRENADES,"DemoCharge_Remote_Mag:5","SLAMDirectionalMine_Wire_Mag:3"};
  linkedItems[] += {"MineDetector"};
  backpackItems[] += {"Toolkit",SIDE_KEY};
  items[] += {"ACE_Clacker","ACE_DefusalKit","ACE_SpraypaintGreen","ACE_SpraypaintRed","ACE_wirecutter"};
};