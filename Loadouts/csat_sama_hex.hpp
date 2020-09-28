// Author: BWMF
// Description: CSAT: KH-2002 Sama - Hex

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "arifle_Katiba_F"
#define RIFLE_MAG "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2"
#define RIFLE_ATTACHMENTS "acc_pointer_IR"
#define ALT_OPTICS STANAG_OPTICS
// GL Rifle
#define GLRIFLE "arifle_Katiba_GL_F"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
// Carbine
#define CARBINE "arifle_Katiba_C_F"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "LMG_Mk200_F"
#define AR_MAG "100Rnd_65x39_cased_Box_Tracer_Green:4"
#define AR_ATTACHMENTS "acc_pointer_IR","bipod_02_F_tan"
// AT
#define AT "launch_NLAW_F"
// MMG
#define MMG "LMG_Zafir_F"
#define MMG_MAG "100Rnd_762x54_Box_Tracer_Green:5"
// MAT
#define MAT "launch_RPG32_F"
#define MAT_MAG "RPG32_F:3","RPG32_HE_F:1"
#define MAT_MAG2 "RPG32_F:2","RPG32_HE_F:1"
// SAM
#define SAM "launch_O_Titan_F"
#define SAM_MAG "Titan_AA:3"
#define SAM_MAG2 "Titan_AA:2"
// Sniper Rifle
#define SNIPER "srifle_EBR_F"
#define SNIPER_MAG "20Rnd_762x51_Mag:10"
#define SNIPER_ATTACHMENTS "optic_LRPS","acc_pointer_IR","bipod_02_F_tan"
// Spotter Rifle
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "optic_Hamr","acc_pointer_IR"
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
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED

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
  uniform[] = {"U_O_CombatUniform_ocamo"};
  vest[] = {"V_TacVest_khk"};
  headgear[] = {"H_HelmetO_ocamo"};
  backpack[] = {"B_AssaultPack_ocamo"};
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
  headgear[] = {"H_HelmetLeaderO_ocamo"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO
  backpack[] = {"B_FieldPack_ocamo"};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  weapons[] = {AR};
  attachments[] = {AR_ATTACHMENTS};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_cbr"};
  backpackItems[] += {MMG_MAG};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {"B_Carryall_ocamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"B_Carryall_ocamo"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR("B_Carryall_ocamo",SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_ocamo",SAM_MAG2)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  MORTAR_GEAR("O_Mortar_01_weapon_F")
};
class mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("O_Mortar_01_support_F")
};
class spotter: Fic_Spotter {// Spotter
  headgear[] = {"H_Booniehat_khk"};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {"U_O_PilotCoveralls"};
  backpack[] = {"B_AssaultPack_ocamo"};
  vest[] = {"V_TacVest_khk"};
  headgear[] = {"H_PilotHelmetHeli_O"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  vest[] = {"V_Chestrig_khk"};
  headgear[] = {"H_HelmetCrew_O"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpack[] = {"B_Carryall_ocamo"};
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: vicd {
  headgear[] = {"H_HelmetO_ocamo"};
  vest[] = {"V_TacVest_khk"};
  items[] += {BASE_ENG};
  backpackItems[] = {};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
};
class engl: Fic_eng {
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class fac: coy {// FAC
  items[] += {RADIO_LR};
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries"};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {// Platoon Medic
};
class cm: sm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
};
class mmgl: sl {// MMG Lead
};
class matl: sl {// MAT Lead
};
class hmgl: sl {// HMG Lead
};
class hmgg: rifleman {// HMG Gunner
};
class hmgag: rifleman {// HMG Spotter
};
class hatl: sl {// HAT Lead
};
class hatg: rifleman {// HAT Gunner
};
class hatag: rifleman {// HAT Spotter
};
class msaml: sl {// MSAM Lead
};
class mtrl: sl {// Mortar Lead
};
class helicrew: pilot {// Aircrew
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout
