author = "AChesheireCat";
description = "Ukrainian VDV Airborne c. 1995. Includes a complete SF class section. This loadout is specifically intended to replicate the paratrooper/light infantry component post-soviet dissolution. Note that the MAT, HMG, and HAT roles have reduced primary ammo for weight reasons.";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "rhs_uniform_afghanka_para_ttsko"
#define CAMO_VEST "rhs_lifchik","rhs_lifchik_light"
#define CAMO_BACKPACK "cwr3_o_backpack_gasmask"
#define CARRYALL "rhs_tortila_khaki"
#define CAMO_HEADGEAR "rhs_fieldcap_m88_ttsko_vdv"
#define CAMO_HEADGEAR_SPECIAL "PLOT_ARMOR_H_Bandanna_khk"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "rhs_uniform_df15"
#define CAMO_VEST_PILOT "PLOT_ARMOR_V_Pockets_F"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "vn_o_helmet_zsh3_02"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_officer"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "vn_o_helmet_tsh3_01","vn_o_helmet_tsh3_02"
// Rifle
#define RIFLE "rhs_weap_aks74n"
#define RIFLE_MAG "hlc_30Rnd_545x39_EP_ak:7", "hlc_30Rnd_545x39_t_ak:3"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1983", "rhs_acc_2dpZenit"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_nita","rhs_acc_ekp8_02","rhs_acc_ekp1","rhs_acc_pkas"
// GL Rifle
#define GLRIFLE "rhs_weap_aks74n_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_MAG_INSTANT "rhs_GDM40:2"
// Carbine
#define CARBINE "rhs_weap_aks74n"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74_45"
#define AR_MAG "hlc_45Rnd_545x39_EP_rpk:10"
// AT
#define AT "rhs_weap_rpg26"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_PKMN"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VM_M:3"
#define MAT_MAG2 "CUP_PG7VL_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_rhs_afrf3_metis_carry"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9M131F:2"
// SAM
#define SAM "vn_sa7b"
#define SAM_MAG "vn_sa7b_mag:2"
// Sniper
#define SNIPER "vn_svd"
#define SNIPER_MAG "vn_svd_mag:10"
#define SNIPER_ATTACHMENTS "vn_o_4x_svd"
// Spotter
#define SPOTTER "vn_svd"
#define SPOTTER_MAG "vn_svd_mag:10"
#define SPOTTER_OPTIC "vn_o_4x_svd"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "hlc_30Rnd_545x39_EP_ak:5"
#define SMG_ATTACHMENTS "rhs_acc_pgs64_74u"
// Pistol
#define PISTOL "vn_pm"
#define PISTOL_MAG "vn_pm_mag:4"
#define PISTOL_OPTIC 
// Pistol w/ Flashlight
#define PISTOL_LIGHT "vn_fkb1_pm"
// Grenades
#define LEADER_GRENADES OPF_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define OPF_FRAG "vn_rgd5_grenade_mag:2"
#define OPF_SMOKE "vn_rdg2_mag:2"
#define OFF_FRAG "rhs_mag_rgn:2"
#define DEF_FRAG "rhs_mag_rgo:2"
#defome BASE_GRENADES OPF_FRAG,OPF_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define AR_VEST "rhs_6b2_RPK"
#define FTL_VEST "rhs_lifchik_vog"
#define SL_VEST "rhs_lifchik_NCO"
#define M_VEST CAMO_VEST
#define LATPACK CAMO_BACKPACK
#define ARPACK "rhs_rd54"
#define FTLPACK "rhs_rd54"
#define SLPACK "cwr3_o_backpack_rd54_r148"
#define MPACK "cwr3_o_backpack_rd54_medic_empty"
#define MMG_ATTACHMENTS "rhs_acc_1p29"

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
  items[] = {TOOLS,CAMO_HEADGEAR_SPECIAL};
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
  backpack[] = {SLPACK};
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
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {ARPACK};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {LATPACK};
  backpackItems[] += {"rhs_weap_rpg26"};
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
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {"cwr3_o_backpack_rpg7"};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,BASE_GRENADES,MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,BASE_GRENADES,MAT_MAG,MAT_MAG2};
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
  attachments[] = {SMG_ATTACHMENTS};
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
  attachments[] = {SMG_ATTACHMENTS};
  magazines[] = {SMG_MAG,CREW_GRENADES};
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
  magazines[] += {MMG_MAG};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
};
class hmgl: sl {// HMG Lead
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  magazines[] = {SMG_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpackItems[] = {};
  magazines[] = {SMG_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  weapons[] = {SMG};
  attachments[] = {SMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  magazines[] = {SMG_MAG,BASE_GRENADES,HAT_MAG};
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

//SF Classes - This is intended to replicate a standard Reconnaissence unit

#define SF_UNIFORM "cwr3_o_uniform_kzs_v2"
#define SF_VEST "rhs_lifchik","rhs_lifchik_light"
#define SF_VEST_AR SF_VEST
#define SF_VEST_FTL "rhs_lifchik_vog"
#define SF_VEST_SL "rhs_lifchik_NCO"
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "cwr3_o_headgear_ssh68_cover"
#define SF_BACKPACK "rhs_rd54"
#define SF_CARRYALL "rhs_tortila_khaki"

#define SF_RIFLE "rhs_weap_akms"
#define SF_RIFLE_MAG "hlc_30Rnd_762x39_b_ak:7","hlc_30Rnd_762x39_t_ak:3"
#define SF_RIFLE_ATTACHMENTS "cup_muzzle_bizon"

#define SF_CARBINE "rhs_weap_aks74n"
#define SF_CARBINE_MAG "hlc_45Rnd_545x39_t_rpk:3","hlc_30Rnd_545x39_EP_ak:7"
#define SF_CARBINE_ATTACHMENTS "rhs_acc_dtk1983"

#define SF_GLRIFLE "rhs_weap_aks74n_gp25"
#define SF_GLRIFLE_MAG SF_CARBINE_MAG
#define SF_GLRIFLE_MAG_HE GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE GLRIFLE_MAG_INSTANT,GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM GLRIFLE_MAG_FLARE

#define SF_AR AR
#define SF_AR_MAG AR_MAG
#define SF_AR_ATTACHMENTS 

#define SF_SNIPER SNIPER
#define SF_SNIPER_MAG SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS SNIPER_ATTACHMENTS

#define SF_AT MAT
#define SF_AT_MAG MAT_MAG
#define SF_AT_ATTACHMENTS MAT_OPTIC

#define SF_PISTOL PISTOL_LIGHT
#define SF_PISTOL_MAG PISTOL_MAG
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
  attachments[] = {SF_CARBINE_ATTACHMENTS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  attachments[] = {SF_CARBINE_ATTACHMENTS};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {SF_CARBINE_ATTACHMENTS};
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