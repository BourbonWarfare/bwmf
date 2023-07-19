author = "You";
description = "paste your loadout config from the arseanal exporter";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "rhs_uniform_afghanka_winter_boots","rhs_uniform_afghanka_winter"
#define CAMO_VEST "rhs_lifchik","rhs_lifchik_light"
#define CAMO_BACKPACK "cwr3_o_backpack_gasmask"
#define CARRYALL "rhs_tortila_khaki"
#define CAMO_HEADGEAR "rhs_ushanka"
#define CAMO_HEADGEAR_SPECIAL "cwr3_o_headgear_officer_cap"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "rhs_uniform_df15_tan"
#define CAMO_VEST_PILOT "rhs_vest_commander"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "vn_o_helmet_zsh3_02"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "rhs_vest_commander"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "vn_o_helmet_tsh3_02","vn_o_helmet_tsh3_01"
// Rifle
#define RIFLE "rhs_weap_aks74n"
#define RIFLE_MAG "CUP_30Rnd_545x39_AK_M:7","CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M:3"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1983","rhs_acc_2dpzenit"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "rhs_acc_ekp8_02b","rhs_acc_pkas","rhs_acc_ekp1","rhs_acc_1pn34"
// GL Rifle
#define GLRIFLE "rhs_weap_aks74n_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74_45"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:11"
// AT
#define AT "CUP_launch_RPG18_Loaded"
#define AT_MAG "CUP_RPG18_M:1"
// MMG
#define MMG "vn_pk"
#define MMG_MAG "vn_pk_100_mag:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "rhs_rpg7_PG7VL_mag:3"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// HMG
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:5"
// HAT
#define HAT "ace_compat_rhs_afrf3_metis_carry"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9M131F:2"
// SAM
#define SAM "vn_sa7b"
#define SAM_MAG "vn_sa7b_mag:1"
// Sniper Rifle
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "10Rnd_762x54_Mag:10"
#define SNIPER_ATTACHMENTS "cup_optic_pso_1_1"
// Spotter Rifle
#define SPOTTER "CUP_srifle_SVD"
#define SPOTTER_MAG SNIPER_MAG
#define SPOTTER_ATTACHMENTS "cup_optic_pso_1_1"
// SMG
#define SMG "vn_vz61"
#define SMG_MAG "vn_vz61_t_mag:10"
#define SMG_ATTACHMENTS 
// Pistol
#define PISTOL "vn_fkb1_pm"
#define PISTOL_MAG "vn_pm_mag:5"
// Flare Pistol
#define FLARE_PISTOL "CUP_hgun_FlareGun"
#define FLARE_PISTOL_ILLUM "CUP_IllumFlareYellow_265_M:5"
#define FLARE_PISTOL_SIGNAL "CUP_StarClusterRed_265_M:2","CUP_StarClusterGreen_265_M:2","CUP_StarClusterWhite_265_M:2"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define AR_VEST "rhs_suspender_AK"
#define FTL_VEST "rhs_lifchik_vog"
#define SL_VEST "rhs_lifchik_NCO"
#define M_VEST CAMO_VEST
#define LATPACK CAMO_BACKPACK
#define ARPACK "rhs_rd54"
#define FTLPACK "rhs_rd54"
#define SLPACK "vn_o_pack_t884_01"
#define MPACK CARRYALL
#define MMG_ATTACHMENTS 
#define NVG "cwr3_o_nvg_pnv57_tsh3"

//init = "this addGoggles 'CUP_G_RUS_Balaclava_Ratnik','CUP_G_RUS_Balaclava_Ratnik_v2','G_Bandanna_khk','G_Balaclava_blk','rhs_facewear_6m2','rhs_facewear_6m2_1','rhs_balaclava','rhs_balaclava1_olive'";

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
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {FTL_VEST};
  backpack[] = {FTLPACK};
  weapons[] = {SMG};
  handguns[] = {FLARE_PISTOL};
  magazines[] = {SMG_MAG,FLARE_PISTOL_ILLUM,FLARE_PISTOL_SIGNAL,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {SL_VEST};
  handguns[] = {FLARE_PISTOL};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
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
  backpackItems[] += {"CUP_launch_RPG18_Loaded"};
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
  backpack[] = {"rhs_rpg_2"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"rhs_rpg_2"};
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
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS,NVG};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,NVG};
};
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
  linkedItems[] += {NVG};
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

class sf_rifleman {// sf rifleman
  uniform[] = {"rhs_uniform_gorka_1_a"};
  vest[] = {"rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3"};
  headgear[] = {"PLOT_ARMOR_H_Bandanna_cbr"};
  backpack[] = {"rhs_rd54_vest"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {"rhs_weap_akms"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10",BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {"cup_muzzle_bizon"};
  opticChoices[] = {ALT_OPTICS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {"rhs_6b3_holster"};
  backpack[] = {"rhs_rd54_vest"};
  weapons[] = {"vn_pk"};
  magazines[] = {"vn_pk_100_mag:5","rhs_mag_9x18_8_57N181S:3",BASE_GRENADES};
  handguns[] = {"rhs_weap_pb_6p9"};
  secondaryAttachments[] = {"rhs_acc_6p9_suppressor"};
};
class sf_aar: sf_rifleman {// AAR
  backpack[] = {"rhs_rd54_vest"};
  backpackItems[] += {"vn_pk_100_mag:5"};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {"rhs_rpg_6b3"};
  magazines[] += {"CUP_PG7VM_M:2"};
  launchers[] = {"CUP_launch_RPG7V"};
  secondaryAttachments[] = {"cup_optic_pgo7v3"};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {"rhs_6b3_VOG","rhs_6b3_VOG_2"};
  backpack[] = {"rhs_rd54"};
  weapons[] = {"rhs_weap_akms_gp25"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10","rhs_VOG25P:5","1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2",LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {"cup_muzzle_bizon"};
};
class sf_sl: sf_ftl {// SL
  vest[] = {"rhs_6b3_R148"};
  handguns[] = {"rhs_weap_pb_6p9"};
  magazines[] += {"rhs_mag_9x18_8_57N181S:3"};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class sf_sm: sf_rifleman {// Medic
  vest[] = {"rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10",MEDIC_GRENADES};
  backpack[] = {"rhs_tortila_khaki"};
  backpackItems[] = {MEDIC_MEDICAL};
};