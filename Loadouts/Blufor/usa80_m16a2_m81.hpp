author = "AChesheireCat";
description = "US Army c.1980 (more like 1983) with a fully configured special forces section";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_b_uniform_m81_woodland","cwr3_b_uniform_m81_woodland_gloves","cwr3_b_uniform_m81_woodland_rolled","cwr3_b_uniform_m81_woodland_rolled_gloves"
#define CAMO_VEST "cwr3_b_vest_alice","cwr3_b_vest_alice_light"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_b_backpack_alice"
#define CAMO_HEADGEAR "cwr3_b_headgear_pasgt_m81_woodland","cwr3_b_headgear_pasgt_m81_woodland_goggles","cwr3_b_headgear_pasgt_m81_woodland_scrim"
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_headgear_boonie_m81_sf_woodland"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "cwr3_b_uniform_pilot"
#define CAMO_VEST_PILOT "cwr3_b_vest_pilot"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_b_uniform_tanksuit"
#define CAMO_VEST_VICC "cwr3_b_vest_pasgt_alice_od_crew"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_b_headgear_cvc","cwr3_b_headgear_cvc_goggles"
// Rifle
#define RIFLE "CUP_arifle_M16A1","CUP_arifle_M16A2","CUP_arifle_M16A2"
#define RIFLE_MAG "30Rnd_556x45_Stanag_red:7","30Rnd_556x45_Stanag_Tracer_Red:3"
#define RIFLE_ATTACHMENTS "cup_acc_zenit_2ds"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "CUP_arifle_M16A1GL","CUP_arifle_M16A2_GL","CUP_arifle_M16A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE "CUP_arifle_Colt727"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_M249_E1"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_M72A6_Loaded"
#define AT_MAG "CUP_M72A6_M:1"
// MMG
#define MMG "CUP_lmg_M240_norail"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "cwr3_launch_m67_rcl"
#define MAT_MAG "cwr3_m67_rcl_heat_m:2"
#define MAT_OPTIC 
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red"
// HAT
#define HAT "ace_dragon_super"
#define HAT_TRI_HI "ace_dragon_super"
#define HAT_TRI_LO "ace_dragon_super"
#define HAT_MAG 
// SAM
#define SAM "CUP_launch_FIM92Stinger_Loaded"
#define SAM_MAG "CUP_Stinger_M:1"
// Sniper
#define SNIPER "CUP_srifle_M21"
#define SNIPER_MAG "ACE_20Rnd_762x51_M118LR_Mag:5"
#define SNIPER_OPTIC "CUP_optic_artel_m14", "CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC RIFLE_ATTACHMENTS
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_Red_Tracer_9x19_MP5:5"
// Pistol
#define PISTOL "vn_mx991_m1911"
#define PISTOL_MAG "vn_m1911_mag:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define AR_VEST "cwr3_b_vest_alice_mg"
#define FTL_VEST "cwr3_b_vest_alice_gl"
#define SL_VEST "cwr3_b_vest_alice_officer"
#define M_VEST CAMO_VEST
#define LATPACK CAMO_BACKPACK
#define ARPACK "vn_b_pack_lw_02"
#define FTLPACK "vn_b_pack_lw_01"
#define SLPACK "vn_b_pack_lw_06"
#define MPACK "vn_b_pack_lw_07"
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
  headgear[] = {"cwr3_b_headgear_pasgt_m81_woodland_2lt"};
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
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: rifleman {// RAT
  backpack[] = {LATPACK};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: rifleman {// Medic
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
  linkedItems[] += {"ace_dragon_sight"};
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
  uniform[] = {"cwr3_b_uniform_pilot"};
  vest[] = {"cwr3_b_vest_tgfaust_anite_black"};
  headgear[] = {"cwr3_b_headgear_protec_half","cwr3_b_headgear_protec_half_goggles","cwr3_b_headgear_protec_full","cwr3_b_headgear_protec_full_goggles"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {"CUP_arifle_Colt727"};
  magazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Red:10",BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {"cup_optic_aimpoint_5000","acc_flashlight","hlc_muzzle_556nato_kac"};
  opticChoices[] = {ALT_OPTICS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {"cwr3_b_vest_tgfaust_alice_black"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  weapons[] = {"vn_m14"};
  attachments[] = {"vn_o_9x_m14"};
  magazines[] = {"vn_m14_mag:10","vn_m1911_mag:3",BASE_GRENADES};
  handguns[] = {"vn_m1911"};
  secondaryAttachments[] = {"vn_s_m1911"};
  items[] += {"ACE_Kestrel4500","ACE_RangeCard","ACE_ATragMX"};
};
class sf_aar: sf_rifleman {// AAR
  backpack[] = {"B_Battle_Belt_XL_F"};
  backpackItems[] += {"ClaymoreDirectionalMine_Remote_Mag:4","ACE_FlareTripMine_Mag:4"};
  linkedItems[] += {BINOS};
  items[] += {"ACE_SpottingScope","ACE_Tripod","ACE_RangeCard","ACE_Clacker"};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {"vn_b_pack_lw_05"};
  magazines[] += {"MRAWS_HEAT55_F:2","MRAWS_HE_F:1"};
  launchers[] = {"CUP_launch_MAAWS"};
  secondaryAttachments[] = {"cup_optic_maaws_scope"};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {"cwr3_b_vest_tgfaust_anite_black"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  weapons[] = {"CUP_arifle_Colt727_M203"};
  magazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Red:10","CUP_1Rnd_HEDP_M203:5","1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2",LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {"cup_optic_aimpoint_5000","hlc_muzzle_556nato_kac"};
};
class sf_sl: sf_ftl {// SL
  vest[] = {"cwr3_b_vest_tgfaust_anite_black"};
  handguns[] = {"vn_m1911"};
  magazines[] += {"vn_m1911_mag:3"};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class sf_sm: sf_rifleman {// Medic
  vest[] = {"cwr3_b_vest_tgfaust_anite_black"};
  magazines[] = {"CUP_30Rnd_556x45_Stanag_Tracer_Red:10",MEDIC_GRENADES};
  backpack[] = {"vn_b_pack_m5_01"};
  backpackItems[] = {MEDIC_MEDICAL};
};