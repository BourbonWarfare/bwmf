author = "AChesheireCat";
description = "Irregular Militia (as seen from Squad) c. 2020 - Uses S.O.G Prarie Fire assets.";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_O_RUS_Gorka_Partizan_gloves2", "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_O_RUS_Gorka_Partizan_gloves2", "CUP_U_O_CHDKZ_Kam_04", "CUP_U_O_CHDKZ_Kam_05", "CUP_U_O_CHDKZ_Kam_06"
#define CAMO_VEST "CUP_V_B_GER_Carrier_Rig_3_Brown", "CUP_V_O_RUS_RPS_Smersh_AK_ModernOlive", "rhs_6sh92_vsr_radio", "rhs_6sh92_vsr"
#define CAMO_BACKPACK "cwr3_o_backpack_gasmask"
#define CARRYALL "CUP_B_HikingPack_Civ"
#define CAMO_HEADGEAR "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "rhs_6b28_green", "rhs_6b28_green_ess"
#define CAMO_HEADGEAR_SPECIAL "PLOT_ARMOR_H_No_Hat"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT CAMO_UNIFORM
#define CAMO_VEST_PILOT CAMO_VEST
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT CAMO_HEADGEAR
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_C_Tracksuit_02"
#define CAMO_VEST_VICC CAMO_VEST
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "rhs_tsh4", "rhs_tsh4_ess"
// Rifle
#define RIFLE "CUP_arifle_M16A2","CUP_arifle_M16A2","CUP_arifle_Colt727","potato_fauxC7_c7"
#define RIFLE_MAG "30Rnd_556x45_Stanag:7", "30Rnd_556x45_Stanag_Tracer_Yellow:3"
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_CUP_LED_flashlight","CUP_optic_Aimpoint_5000"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
#define MAG_OPTICS "rhs_acc_1p29","CUP_optic_ACOG_TA01B_Black"
// Rifle 2
#define RIFLE2 "cwr3_arifle_fnfal_hlag","CUP_arifle_FNFAL5061_wooden","CUP_arifle_FNFAL5061","CUP_arifle_FNFAL5060"
#define RIFLE2_MAG "vn_l1a1_20_mag:7", "CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M:3"
#define RIFLE2_ATTACHMENTS RIFLE_ATTACHMENTS
// Rifle 3
#define RIFLE3 "CUP_arifle_AKS74","CUP_arifle_AK74","CUP_arifle_AK74M","CUP_arifle_AKS74_Early","CUP_arifle_AK74_Early"
#define RIFLE3_MAG "CUP_30Rnd_545x39_AK_M:7", "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M:3"
#define RIFLE3_ATTACHMENTS "potato_strongerFlashlights_CUP_LED_flashlight","CUP_optic_1p63"
// Rifle 4
#define RIFLE4 "vn_sks"
#define RIFLE4_MAG "vn_sks_mag:7","vn_sks_t_mag:3"
#define RIFLE4_ATTACHMENTS "vn_o_3x_sks"
// GL Rifle
#define GLRIFLE "CUP_arifle_M16A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2", "1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "CUP_1Rnd_StarFlare_White_M203:4"
//GL Rifle 2
#define GLRIFLE2 "vn_l1a1_01_gl"
#define GLRIFLE2_MAG "vn_l1a1_20_mag:10"
#define GLRIFLE2_MAG_SMOKE "vn_22mm_m22_smoke_mag:4"
#define GLRIFLE2_MAG_HE "vn_22mm_m61_frag_mag:5"
#define GLRIFLE2_MAG_AT "vn_22mm_n94_heat_mag:5"
//GL Rifle 3
#define GLRIFLE3 "CUP_arifle_AKS74_GL","CUP_arifle_AK74_GL","CUP_arifle_AK74M_GL","CUP_arifle_AKS74_GL_Early","CUP_arifle_AK74_GL_Early"
#define GLRIFLE3_MAG RIFLE3_MAG
#define GLRIFLE3_MAG_FLARE "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE "CUP_arifle_AKS74U"
#define CARBINE_MAG RIFLE3_MAG
// AR
#define AR "CUP_lmg_minimipara","CUP_lmg_M249_E1","CUP_lmg_M249_E2"
#define AR_MAG "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M:2","CUP_OG7_M:1"
#define GREN_MAG "CUP_OG7_M:5"
// MMG
#define MMG "CUP_lmg_PKMN"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","CUP_OG7_M:1"
#define MAG_MAG2 "CUP_PG7VL_M:1","CUP_OG7_M:3"
#define MAT_MAG3 "CUP_PG7VR_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_rhs_afrf3_spg9m_carry"
#define HAT_TRI "ace_csw_spg9CarryTripod"
#define HAT_MAG "ace_compat_rhs_afrf3_mag_PG9V:2", "ace_compat_rhs_afrf3_mag_OG9V:1"
// SAM - should be an SPAA gun if possible
#define SAM "CUP_launch_Igla"
#define SAM_MAG 
// Sniper
#define SNIPER "vn_svd"
#define SNIPER_MAG "vn_svd_mag:10"
#define SNIPER_OPTIC "vn_o_4x_svd"
// Spotter
#define SPOTTER RIFLE3
#define SPOTTER_MAG RIFLE3_MAG
#define SPOTTER_OPTIC RIFLE3_ATTACHMENTS
// SMG
#define SMG CARBINE
#define SMG_MAG "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M:5"
// Pistol
#define PISTOL "vn_tt33"
#define PISTOL_MAG "vn_tt33_mag:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rhs_mag_rgd5:2"
#define SIDE_SMOKE "SmokeShell:2"
#define AT_FRAG "vn_rkg3_grenade_mag:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE

//V_HarnessO_brn rhs_lifchik V_Chestrig_khk

//Custom Defines
#define CAMO_VEST_AR "cwr3_b_vest_alice_mg","CUP_V_O_RUS_RPS_Smersh_PKP_Light_ModernOlive","CUP_V_O_RUS_RPS_Smersh_PKP_SPP_ModernOlive","CUP_V_B_RRV_MG"
#define CAMO_VEST_LAT CAMO_VEST
#define CAMO_VEST_FTL "rhs_6sh92_vsr_vog_headset", "CUP_V_B_GER_Carrier_Rig_3_Brown", "CUP_V_O_RUS_RPS_Smersh_VOG_SPP_ModernOlive", "rhs_6sh92_vsr_vog"
#define CAMO_VEST_SL CAMO_VEST
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "CUP_B_ACRPara_dpm"
#define CAMO_BACKPACK_FTL "CUP_B_CivPack_WDL"
#define CAMO_BACKPACK_SL "CUP_B_AlicePack_Bedroll"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "rhs_acc_1p29"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

//  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk',''];"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE2_MAG,RIFLE2_MAG,RIFLE3_MAG,RIFLE3_MAG,AR_MAG,AR_MAG,GLRIFLE2_MAG_HE,GLRIFLE2_MAG_HE,GLRIFLE3_MAG_HE};
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
  weapons[] = {GLRIFLE2};
  magazines[] = {GLRIFLE2_MAG,GLRIFLE2_MAG_HE,GLRIFLE2_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad"};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  weapons[] = {GLRIFLE3};
  magazines[] = {GLRIFLE3_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,PISTOL_MAG};
  handguns[] = {PISTOL};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR,"WBK_HeadLampItem"};
};
class coy: sl {// CO and DC
  headgear[] = {"CUP_H_ChDKZ_Beret"};
  backpack[] = {CARRYALL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES,PISTOL_MAG};
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
  items[] += {"WBK_HeadLampItem"};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  weapons[] = {RIFLE2};
  magazines[] = {RIFLE2_MAG,BASE_GRENADES};
  linkedItems[] += {BINOS};
};
class lat: rifleman {// RAT
  vest[] = {CAMO_VEST_LAT};
  backpack[] = {CAMO_BACKPACK_LAT};
  weapons[] = {RIFLE3};
  magazines[] = {RIFLE3_MAG,BASE_GRENADES,AT_MAG};
  launchers[] = {AT};
  attachments[] = {RIFLE3_ATTACHMENTS};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: Fic_Soldier_Carbine {
  linkedItems[] += {BINOS};
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
  launchers[] = {SAM};
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"ace_compat_sog_mortar_m2_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ace_compat_sog_60mm_he:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ace_compat_sog_60mm_he:2","ace_compat_sog_60mm_lume:2","ace_compat_sog_60mm_wp:2"};
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
  backpack[] = {CARRYALL};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
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
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
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
class rifleman_02: rifleman {// Rifleman 2 - FAL
  weapons[] = {RIFLE2};
  magazines[] = {RIFLE2_MAG,BASE_GRENADES};
  attachments[] = {RIFLE2_ATTACHMENTS};
};
class rifleman_03: rifleman {// Rifleman 3 - AKS-74
  weapons[] = {RIFLE3};
  magazines[] = {RIFLE3_MAG,BASE_GRENADES};
  attachments[] = {RIFLE3_ATTACHMENTS};
};
class rifleman_04: lat {// Rifleman 2 - RPG Grenadier
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES,GREN_MAG};
  attachments[] = {RIFLE_ATTACHMENTS};
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
  magazines[] += {MAT_MAG2};
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
  launchers[] = {HAT_TRI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  launchers[] = {SAM};
};
class mtrl: sl {// Mortar Lead
  backpack[] = {CARRYALL};
  items[] += {BASE_ARTILLERY};
  magazines[] += {"ace_compat_sog_60mm_lume:2","ace_compat_sog_60mm_wp:2"};
  linkedItems[] = {LINKED,LEADER_LINKED,"ACE_Yardage450"};
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