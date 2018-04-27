// Author: Raeth
// Description: CSAT: QBZ-95 - Green Hex
// WARNING: Spez is replaced with VIPER team, reducing role varity. Verify slot names correct before play

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "arifle_CTAR_ghex_F"
#define RIFLE_MAG "30Rnd_580x42_Mag_F:8","30Rnd_580x42_Mag_Tracer_F:2"
#define RIFLE_ATTACHMENTS "acc_pointer_IR"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "arifle_CTAR_GL_ghex_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// AR
#define AR "arifle_CTARS_ghex_F"
#define AR_MAG "100Rnd_580x42_Mag_F:4"
// Recon Gear
#define RECON_RIFLE "arifle_ARX_ghex_F"
#define RECON_RIFLE_MAGS "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2","10Rnd_50BW_Mag_F:3"
#define RECON_RIFLE_ATTACHMENTS "muzzle_snds_65_TI_ghex_F","acc_pointer_IR","optic_Arco_ghex_F"
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
#define MARKSMAN "srifle_DMR_07_ghex_F"
#define MARKSMAN_MAG "20Rnd_650x39_Cased_Mag_F:8"
#define MARKSMAN_ATTACHMENTS "optic_DMS_ghex_F"
// SMG
#define SMG "SMG_02_F"
#define SMG_MAG "30Rnd_9x21_Mag_SMG_02:6"
// Pistol
#define PISTOL "hgun_Rook40_F"
#define PISTOL_MAG "16Rnd_9x21_Mag:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY,"H_HelmetLeaderO_ghex_F"
#define LINKED BASE_LINKED,"O_NVGoggles_ghex_F"
#define LEADER_LINKED BASE_LEADER_LINKED
#define MSV_EXP "DemoCharge_Remote_Mag:2"

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
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class potato_msv_sr: potato_msv_rifleman {// FTL
  vest[] = {"V_HarnessOGL_ghex_F"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {BASE_LEADER_TOOLS,SIDE_KEY};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sl: potato_msv_sr { // SL
  headgear[] = {"H_HelmetCrew_O_ghex_F"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
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
  weapons[] = {};
  handguns[] = {"hgun_Pistol_heavy_02_Yorris_F"};
  magazines[] = {"6Rnd_45ACP_Cylinder:3"};
  items[] += {RADIO_MR,RADIO_MR,BASE_MEDICAL}; // 2 radios
};
class potato_msv_ar: potato_msv_rifleman {// AR
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
  magazines[] = {MARKSMAN_MAG,BASE_GRENADES};
  attachments[] = {MARKSMAN_ATTACHMENTS};
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
  items[] += {LEADER_TOOLS,RADIO_MR};
  linkedItems[] += {LEADER_LINKED};
};
class potato_msv_mtrl: Fic_Spotter { // Mortar Leader
  items[] += {LEADER_TOOLS,RADIO_LR};
  linkedItems[] += {LEADER_LINKED,RANGE_FINDER};
};
class potato_msv_mtrg: potato_msv_rifleman {// Mortar Gunner
  MORTAR_GEAR("O_Mortar_01_weapon_F")
};
class potato_msv_mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("O_Mortar_01_support_F")
};
class potato_msv_pilot {// Pilot
  uniform[] = {"U_O_PilotCoveralls"};
  vest[] = {"V_TacVest_khk"};
  headgear[] = {"H_PilotHelmetHeli_O"};
  backpack[] = {"B_Carryall_oli"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
  attachments[] = {};
};
class potato_msv_cc: potato_msv_pilot {// Crew Chief
  headgear[] = {"H_CrewHelmetHeli_O"};
};
class fic_vehicle_crewman: potato_msv_rifleman {// Vehicle crew base
  headgear[] = {"H_HelmetCrew_O_ghex_F"};
  magazines[] = {RIFLE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] += {LEADER_LINKED};
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
  linkedItems[] = {LINKED};
};
class potato_msv_engl: potato_msv_eng {// Demoman Leader
  backpackItems[] += {RADIO_MR,SIDE_KEY};
  linkedItems[] += {LEADER_LINKED};
};
class potato_msv_sf_rifleman: potato_msv_rifleman {// Recon Rifleman
  uniform[] = {"U_O_V_Soldier_Viper_F"};
  vest[] = {};
  headgear[] = {"H_HelmetO_ViperSP_ghex_F"};
  backpack[] = {"B_ViperHarness_ghex_TL_F"};
  weapons[] = {RECON_RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RECON_RIFLE_MAGS,BASE_GRENADES,PISTOL_MAG};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RECON_RIFLE_ATTACHMENTS};
  handgunAttachments[] = {"muzzle_snds_L"};
  opticChoices[] = {};
};
class potato_msv_sf_ftl: potato_msv_sf_rifleman {// Recon Senior Rifleman
  items[] += {BASE_LEADER_TOOLS,SIDE_KEY}; // Avoid using leader tools because it adds double headgear (viper is not mechanized)
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sf_sl: potato_msv_sf_ftl {// Recon Squad Leader
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
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
  magazines[] = {RECON_RIFLE_MAGS,MEDIC_GRENADES,PISTOL_MAG};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_sf_ar: potato_msv_sf_sm {};// Recon AR WARNING: IN VIPER TEAM AR IS A SECOND MEDIC
class potato_msv_sf_marksman: potato_msv_sf_rifleman {};// Recon Marksman WARNING: MARKSMAN IS A NORMAL RIFLEMAN IN VIPER
class potato_msv_sf_aar: potato_msv_sf_rifleman {};//Recon AAR WARNING: AAR IS A NORMAL RIFLEMAN IN VIPER
class fallback: potato_msv_rifleman {}; // This means any faction member who doesn't match something will use this loadout
