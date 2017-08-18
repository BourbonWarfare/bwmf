// Author: SovietOnion
// Description: British: L85 - Multi-Terrain Pattern

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L85A2_RIS_AFG"
#define RIFLE_MAG "UK3CB_BAF_556_30Rnd:8","UK3CB_BAF_556_30Rnd_T:2"
#define RIFLE_ATTACHMENTS "UK3CB_BAF_Eotech","UK3CB_BAF_LLM_IR_Black"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "optic_Aco","rhsusf_acc_compm4","rhsusf_acc_eotech_xps3","CUP_optic_CompM2_Black","CUP_optic_TrijiconRx01_black","BWA3_optic_RSAS","RKSL_optic_RMR_MS19"
// GL Rifle
#define GLRIFLE "UK3CB_BAF_L85A2_UGL_HWS","UK3CB_BAF_L85A2_UGL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "UK3CB_BAF_L110A2"
#define AR_MAG "UK3CB_BAF_556_100Rnd_T:4"
// AT
#define AT "UK3CB_BAF_AT4_CS_AP_Launcher"
#define AT_MAG "UK3CB_BAF_AT4_CS_AP_Mag:1"
// MMG
#define MMG "UK3CB_BAF_L7A2"
#define MMG_MAG "UK3CB_BAF_762_100Rnd_T:5"
// MAT
#define MAT "rhs_weap_smaw"
#define MAT_MAG "rhs_mag_smaw_HEAA:3","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:3"
#define MAT_MAG2 "rhs_mag_smaw_HEAA:2","rhs_mag_smaw_HEDP:1","rhs_mag_smaw_SR:2"
#define MAT_OPTIC "rhs_weap_optic_smaw"
// SAM
#define SAM "rhs_weap_fim92"
#define SAM_MAG "rhs_fim92_mag:3"
#define SAM_MAG2 "rhs_fim92_mag:2"
// Sniper Rifle
#define SNIPER "UK3CB_BAF_L135A1"
#define SNIPER_MAG "UK3CB_BAF_127_10Rnd:5"
// Spotter Rifle
#define SPOTTER "UK3CB_BAF_L86A3"
#define SPOTTER_MAG RIFLE_MAG
// SMG
#define SMG "UK3CB_BAF_L91A1"
#define SMG_MAG "UK3CB_BAF_9_30Rnd:6"
// Pistol
#define PISTOL "UK3CB_BAF_L131A1"
#define PISTOL_MAG "UK3CB_BAF_9_17Rnd:3"
// Grenades
#define BASE_FRAG "rhs_mag_m67:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_blue:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_WEST
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class Soldier_F {// rifleman
  uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP","UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
  vest[] = {"UK3CB_BAF_V_Osprey_Rifleman_A","UK3CB_BAF_V_Osprey_Rifleman_B","UK3CB_BAF_V_Osprey_Rifleman_C","UK3CB_BAF_V_Osprey_Rifleman_D","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_V_Osprey_Rifleman_F"};
  headgear[] = {"UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D","UK3CB_BAF_H_Mk7_Camo_E","UK3CB_BAF_H_Mk7_Camo_F","UK3CB_BAF_H_Mk7_Camo_ESS_A","UK3CB_BAF_H_Mk7_Camo_ESS_B","UK3CB_BAF_H_Mk7_Camo_ESS_C","UK3CB_BAF_H_Mk7_Camo_ESS_D","UK3CB_BAF_H_Mk7_Camo_CESS_A","UK3CB_BAF_H_Mk7_Camo_CESS_B","UK3CB_BAF_H_Mk7_Camo_CESS_C"};
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: Soldier_F {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class Soldier_TL_F: Soldier_F {// FTL
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Radio_L_B","UK3CB_BAF_B_Bergen_MTP_Radio_L_A","UK3CB_BAF_B_Bergen_MTP_PointMan_L_A"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class Soldier_SL_F: Soldier_TL_F {// SL
  vest[] = {"UK3CB_BAF_V_Osprey_SL_D","UK3CB_BAF_V_Osprey_SL_C","UK3CB_BAF_V_Osprey_SL_B","UK3CB_BAF_V_Osprey_SL_A"};
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_SL_L_A","UK3CB_BAF_B_Bergen_MTP_SL_H_A","UK3CB_BAF_B_Bergen_MTP_JTAC_L_A"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class officer_F: Soldier_SL_F {// CO and DC
  items[] += {RADIO_LR};
};
class Soldier_unarmed_F: officer_F {// FAC
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_SMOKES,FAC_MAGAZINES};
  handguns[] = {};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,FAC_LINKED};
  items[] += {RADIO_LR};
};
class soldier_UAV_F: Soldier_F {
  backpack[] = {"B_UAV_01_backpack_F"};
  linkedItems[] += {"B_uavterminal"};
};
class Soldier_AR_F: Soldier_F {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class Soldier_AAR_F: Soldier_F {// AAR
  vest[] = {"UK3CB_BAF_V_Osprey_MG_A","UK3CB_BAF_V_Osprey_MG_B"};
  backpackItems[] += {AR_MAG};
  attachments[] = {AAR_ATTACHMENTS};
  linkedItems[] += {BINOS};
};
class Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class medic_F: Fic_Soldier_Carbine {// Medic
  vest[] = {"UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_V_Osprey_Medic_B","UK3CB_BAF_V_Osprey_Medic_C","UK3CB_BAF_V_Osprey_Medic_D"};
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Medic_L_A","UK3CB_BAF_B_Bergen_MTP_Medic_L_B"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: Soldier_F {
  linkedItems[] += {RANGE_FINDER};
};
class support_MG_F: Soldier_AR_F {// MMG
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {};
};
class Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B"};
  backpackItems[] += {MMG_MAG};
};
class soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C", SAM_MAG)
  launchers[] = {SAM};
};
class Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C", SAM_MAG2)
};
class support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("B_Mortar_01_weapon_F")
};
class support_AMort_F: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("B_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
  vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
  headgear[] = {"UK3CB_BAF_H_Mk7_Scrim_ESS_A","UK3CB_BAF_H_Mk7_Scrim_ESS_B","UK3CB_BAF_H_Mk7_Scrim_ESS_C"};
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
};
class sniper_F: spotter_F {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED};
  attachments[] = {"UK3CB_BAF_SB31250_Ghillie"};
};
class Helipilot_F {// Pilot
  uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
  backpack[] = {"B_AssaultPack_blk"};
  vest[] = {"UK3CB_BAF_V_Pilot_A"};
  headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class helicrew_F: Helipilot_F {}; // Pilot
class crew_F: Fic_Soldier_Carbine {// Crew
  uniform[] = {"UK3CB_BAF_U_CrewmanCoveralls_RTR"};
  vest[] = {"UK3CB_BAF_V_Osprey","UK3CB_BAF_V_Osprey_Belt_A"};
  headgear[] = {"UK3CB_BAF_H_CrewHelmet_A","UK3CB_BAF_H_CrewHelmet_ESS_A"};
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_WEST,RADIO_LR};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class soldier_repair_F: crew_F {// Repair Specialist
  backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Engineer_H_A"};
  backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
};
class Fic_eng: soldier_repair_F {
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class soldier_exp_F: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
  backpackItems[] = {"Toolkit"};
};
class engineer_F: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class fallback: Soldier_F {}; // This means any faction member who doesn't match something will use this loadout
