// Author: Raeth
// Description: CSAT: Pacific Mechanized WARNING: Spez is replaced with VIPER team, reducing role varity. Verify slot names correct before play

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "arifle_CTAR_blk_F","arifle_CTAR_ghex_F"
#define RIFLE_MAG "30Rnd_580x42_Mag_F:8","30Rnd_580x42_Mag_Tracer_F:2"
#define RIFLE_ATTACHMENTS "acc_pointer_IR","optic_ACO_grn"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "arifle_CTAR_GL_blk_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareRed_F:4"
// AR
#define AR "arifle_CTARS_blk_F","arifle_CTARS_ghex_F"
#define AR_MAG "100Rnd_580x42_Mag_F:4"
// Recon Gear
#define RECONRIFLE_ATTACHMENTS  "muzzle_snds_65_TI_ghex_F","acc_pointer_IR","optic_Arco_ghex_F"
#define RECON_MAGS "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2","10Rnd_50BW_Mag_F:3"
// AT
#define AT "launch_RPG32_ghex_F"
#define AT_MAG "RPG32_F:3","RPG32_HE_F:1"
// MMG
#define MMG "MMG_01_tan_F"
#define MMG_MAG "150Rnd_93x64_Mag:4"
// MAT
#define MAT "launch_O_Titan_short_ghex_F"
#define MAT_MAG "Titan_AT:4"
#define MAT_MAG2 "Titan_AT:3"
// SAM
#define SAM "launch_O_Titan_ghex_F"
#define SAM_MAG "Titan_AA:3"
#define SAM_MAG2 "Titan_AA:2"
// Marksman Rifle
#define MARKSMAN "srifle_DMR_07_blk_F","srifle_DMR_07_ghex_F"
#define MARKSMAN_MAG "20Rnd_650x39_Cased_Mag_F:8"
// Sniper Rifle
#define SNIPER "srifle_DMR_05_blk_F"
#define SNIPER_MAG "10Rnd_762x54_Mag:8"
// Spotter Rifle
#define SPOTTER "srifle_DMR_01_F"
#define SPOTTER_MAG "16Rnd_9x21_Mag:8"
// SMG
#define SMG "SMG_02_F"
#define SMG_MAG "30Rnd_9x21_Mag_SMG_02:6"
// Pistol
#define PISTOL "hgun_Rook40_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:3"
// Grenades
#define BASE_FRAG "HandGrenade:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_red:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_EAST,"H_HelmetLeaderO_ghex_F"
#define BASE_LINKED COMMON_LINKED,"O_NVGoggles_ghex_F"
#define MSV_EXP "DemoCharge_Remote_Mag:2"
#define MSV_OPTIX "optic_Arco_blk_F","optic_Arco_ghex_F","ACE_optic_Arco_PIP","optic_Holosight_blk_F"

class Car {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class potato_msv_rifleman { // rifleman
  uniform[] = {"U_O_T_Soldier_F"};
  vest[] = {"V_HarnessO_ghex_F"};
  headgear[] = {"H_HelmetLeaderO_ghex_F"};
  backpack[] = {"B_FieldPack_ghex_F"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {MSV_OPTIX};
};
class potato_msv_sr: potato_msv_rifleman {// FTL
  vest[] = {"V_HarnessOGL_ghex_F"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {COMMON_LEADER_TOOLS,KEY_EAST};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sl: potato_msv_sr { // SL
  headgear[] = {"H_HelmetCrew_O_ghex_F"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class potato_msv_plt: potato_msv_sl { // PLT
  backpack[] = {"B_Carryall_ghex_F"};
  headgear[] = {"H_Beret_blk"};
  items[] += {RADIO_LR};
};
class potato_msv_aplt: potato_msv_plt {}; // PLT Assistant
class potato_msv_coy: potato_msv_plt { // COY
  headgear[] = {"H_HelmetCrew_O_ghex_F"};
};
class potato_msv_acoy: potato_msv_plt{}; // COY Assistant
class potato_msv_pol: potato_msv_rifleman { // Political Officer
  vest[] = {"V_BandollierB_ghex_F"};
  headgear[] = {"H_Beret_blk"};
  backpack[] = {}; // This loadout looks stupid with a backpack
  weapons[] = {"hgun_Pistol_heavy_02_Yorris_F"};
  magazines[] = {"6Rnd_45ACP_Cylinder:3"};
  items[] += {RADIO_MR,RADIO_MR,BASE_MEDICAL}; // 2 radios
};
class potato_msv_AR: potato_msv_rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class potato_msv_g: potato_msv_rifleman {// Grenadier
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class potato_msv_ag: potato_msv_rifleman {// Assistant Grenadier
  magazines[] += {AT_MAG};
};
class potato_msv_sm: potato_msv_rifleman {// Medic
  magazines[] = {RIFLE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_marksman: potato_msv_rifleman {// Squad Marksman
  weapons[] = {MARKSMAN};
  magazines[] = {MARKSMAN_MAG};
  attachments[] = {"optic_DMS"};
  opticChoices[] = {"optic_DMS_ghex_F"};
};
class Fic_Spotter: potato_msv_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_msv_mmgg: potato_msv_AR {// MMG
  backpack[] = {"B_Carryall_ghex_F"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
  opticChoices[] = {};
};
class potato_msv_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_ghex_F"};
  backpackItems[] += {MMG_MAG};
};
class potato_msv_matg: potato_msv_rifleman {// MAT Gunner
  backpack[] = {"B_Carryall_ghex_F"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
};
class potato_msv_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_ghex_F"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {BASE_MEDICAL};
};
class potato_msv_msamg: potato_msv_rifleman {// SAM Gunner
  SAM_GEAR("B_Carryall_ghex_F", SAM_MAG)
  launchers[] = {SAM};
};
class potato_msv_msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_ghex_F", SAM_MAG2)
};
class potato_msv_msaml: potato_msv_msamag {// SAM Leader
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,RADIO_MR};
};
class potato_msv_mtrl: Fic_Spotter { // Mortar Leader
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,RANGE_FINDER,RADIO_LR};
};
class potato_msv_mtrg: potato_msv_rifleman {// Mortar Gunner
  MORTAR_GEAR("O_Mortar_01_weapon_F")
};
class potato_msv_mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("O_Mortar_01_support_F")
};
class potato_msv_rifleman_02: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {"optic_KHS_blk","bipod_02_F_blk"};
  opticChoices[] = {};
};
class potato_msv_sniper: potato_msv_rifleman_02 {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  attachments[] = {"optic_KHS_blk","bipod_02_F_blk"};
  opticChoices[] = {};
};
class potato_msv_pilot {// Pilot
  uniform[] = {"U_O_PilotCoveralls"};
  vest[] = {"V_TacVest_khk"};
  headgear[] = {"H_PilotHelmetHeli_O"};
  backpack[] = {"B_Carryall_oli"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_EAST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  attachments[] = {};
};
class potato_msv_cc: potato_msv_pilot {// Crew Chief
  headgear[] = {"H_CrewHelmetHeli_O"};
};
class fic_vehicle_crewman: potato_msv_rifleman {// Vehicle crew base
  headgear[] = {"H_HelmetCrew_O_ghex_F"};
  magazines[] = {RIFLE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_EAST};
  linkedItems[] += {BASE_LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_msv_vicc: fic_vehicle_crewman {// Vehicle Crewman (non-repair)
  backpackItems[] += {RADIO_MR};
  linkedItems[] += {BINOS};
};
class potato_msv_vicl: potato_msv_vicc {// Vehicle Leader
  backpackItems[] += {RADIO_LR};
};
class potato_msv_vicd: fic_vehicle_crewman {// Vehicle Crewman (repair)
  backpackItems[] += {"toolkit"};
};
class potato_msv_eng: potato_msv_rifleman {// Demoman
  backpack[] = {"B_Carryall_ghex_F"};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {"Toolkit"};
  magazines[] += {MSV_EXP};
  linkedItems[] = {BASE_LINKED};
};
class potato_msv_engl: potato_msv_eng {// Demoman Leader
  backpackItems[] += {RADIO_MR,KEY_EAST};
  linkedItems[] += {LEADER_LINKED};
};
class potato_msv_sf_rifleman: potato_msv_rifleman {// Recon Rifleman
  uniform[] = {"U_O_V_Soldier_Viper_F"};
  vest[] = {};
  headgear[] = {"H_HelmetO_ViperSP_ghex_F"};
  backpack[] = {"B_ViperHarness_ghex_TL_F"};
  weapons[] = {"arifle_ARX_ghex_F"};
  handguns[] = {PISTOL};
  magazines[] = {RECON_MAGS,BASE_GRENADES,PISTOL_MAG};
  linkedItems[] = {COMMON_LINKED}; // Direct calls to common are perfectly safe said nobody ever
  attachments[] = {RECONRIFLE_ATTACHMENTS};
  handgunAttachments[] = {"muzzle_snds_L"};
  opticChoices[] = {};
};
class potato_msv_sf_ftl: potato_msv_sf_rifleman {// Recon Senior Rifleman
  items[] += {COMMON_LEADER_TOOLS,KEY_EAST}; // Avoid using leader linked because it adds double headgear (viper is not mechanized)
  linkedItems[] += {COMMON_LEADER_TOOLS,BINOS};
};
class potato_msv_sf_sl: potato_msv_sf_ftl {// Recon Squad Leader
  linkedItems[] = {COMMON_LINKED,COMMON_LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class potato_msv_sf_g: potato_msv_sf_rifleman {//Recon Grenadier WARNING: REDUCED ROCKETS FOR VIPER TEAM
  magazines[] += {"RPG32_F:2"};
  launchers[] = {AT};
};
class potato_msv_rifleman_04: potato_msv_sf_rifleman {//Recon Assistant Grenadier WARNING: REDUCED ROCKETS FOR VIPER
  magazines[] += {"RPG32_F"};
};
class potato_msv_sf_sm: potato_msv_sf_rifleman {// Recon Medic
  magazines[] = {RECON_MAGS,MEDIC_GRENADES,PISTOL_MAG};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_sf_ar: potato_msv_sf_sm {};// Recon AR WARNING: IN VIPER TEAM AR IS A SECOND MEDIC
class potato_msv_sf_marksman: potato_msv_sf_rifleman {};// Recon Marksman WARNING: MARKSMAN IS A NORMAL RIFLEMAN IN VIPER
class potato_msv_sf_aar: potato_msv_sf_rifleman {};//Recon AAR WARNING: AAR IS A NORMAL RIFLEMAN IN VIPER
class fallback: potato_msv_rifleman {}; // This means any faction member who doesn't match something will use this loadout
