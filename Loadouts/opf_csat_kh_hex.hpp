//Author: Shanahan
//Description: CSAT Ground Forces: KH 2002 Sama - Hex-Pattern

class opf_f {
  //Rifle
  #define EAST_RIFLE "arifle_Katiba_F"
  #define EAST_RIFLE_MAG "30Rnd_65x39_caseless_green:8","30Rnd_65x39_caseless_green_mag_Tracer:2"
  #define EAST_RIFLE_ATTACHMENTS "optic_ACO_grn","acc_pointer_IR"
  #define EAST_AAR_ATTACHMENTS EAST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define EAST_GLRIFLE "arifle_Katiba_GL_F"
  #define EAST_GLRIFLE_MAG EAST_RIFLE_MAG
  #define EAST_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
  #define EAST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
  #define EAST_GLRIFLE_MAG_FLARE "UGL_FlareRed_F:4"
  //Carbine
  #define EAST_CARBINE "arifle_Katiba_C_F"
  #define EAST_CARBINE_MAG EAST_RIFLE_MAG
  // AR
  #define EAST_AR "LMG_Mk200_F"
  #define EAST_AR_MAG "200Rnd_65x39_cased_Box:2"
  // AT
  #define EAST_AT "launch_RPG32_F"
  #define EAST_AT_MAG "RPG32_F:1"
  // MMG
  #define EAST_MMG "LMG_Zafir_F"
  #define EAST_MMG_MAG "150Rnd_762x54_Box:3"
  // Sniper Rifle
  #define EAST_SNIPER "srifle_DMR_01_F"
  #define EAST_SNIPER_MAG "10Rnd_762x54_Mag:8"
  // Spotter Rifle
  #define EAST_SPOTTER EAST_SNIPER
  #define EAST_SPOTTER_MAG EAST_SNIPER_MAG
  // SMG
  #define EAST_SMG "SMG_02_F"
  #define EAST_SMG_MAG "30Rnd_9x21_Mag:8"
  // Pistol
  #define EAST_PISTOL "hgun_Rook40_F"
  #define EAST_PISTOL_MAG "16Rnd_9x21_Mag:2"
  // SAM
  #define EAST_SAM "launch_O_Titan_F"
  #define EAST_SAM_MAG "Titan_AA:3"
  #define EAST_SAM_MAG2 "Titan_AA:2"
  //Grenades
  #define EAST_FRAG "HandGrenade:2"

  class Car {
    TransportWeapons[] = {EAST_AT};
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {EAST_AT};
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE,EAST_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {EAST_RIFLE_MAG,EAST_RIFLE_MAG,EAST_CARBINE_MAG,EAST_AR_MAG,EAST_AR_MAG,EAST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class O_Soldier_F { // rifleman
    uniform[] = {"U_O_CombatUniform_ocamo"};
    vest[] = {"V_HarnessO_brn"};
    headgear[] = {"H_HelmetO_ocamo"};
    backpack[] = {"B_FieldPack_ocamo"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {EAST_RIFLE};
    magazines[] = {EAST_RIFLE_MAG,BASE_GRENADES(EAST_FRAG)};
    items[] = {EAST_BASE_TOOLS};
    linkedItems[] = {EAST_BASE_LINKED};
    attachments[] = {EAST_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: O_Soldier_F {// carbine-man
    weapons[] = {EAST_CARBINE};
    magazines[] = {EAST_CARBINE_MAG,BASE_GRENADES(EAST_FRAG)};
  };
  class O_Soldier_TL_F: O_Soldier_F {// FTL
    vest[] = {"V_HarnessOGL_brn"};
    weapons[] = {EAST_GLRIFLE};
    magazines[] = {EAST_GLRIFLE_MAG,EAST_GLRIFLE_MAG_HE,EAST_GLRIFLE_MAG_SMOKE,LEADER_GRENADES(EAST_FRAG,EAST_CHEM)};
    items[] += {EAST_LEADER_TOOLS};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
  };
  class O_soldier_SL_F: O_Soldier_TL_F { // SL
	headgear[] = {"H_HelmetLeaderO_ocamo"};
    handguns[] = {EAST_PISTOL};
    magazines[] += {EAST_PISTOL_MAG};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class O_officer_F: O_Soldier_SL_F { // CO and DC
	uniform[] = {"U_O_OfficerUniform_ocamo"};
	headgear[] = {"H_Beret_blk"};
    items[] += {RADIO_LR};
  };
  class O_soldier_UAV_F: O_Soldier_F {
    backpack[] = {"O_UAV_01_backpack_F"};
    linkedItems[] += {"O_uavterminal"};
  };
  class O_soldier_GL_F: O_Soldier_TL_F {}; // GP Dude
  class O_Soldier_AR_F: O_Soldier_F {// AR
    weapons[] = {EAST_AR};
    magazines[] = {EAST_AR_MAG,EAST_PISTOL_MAG,BASE_GRENADES(EAST_FRAG)};
    handguns[] = {EAST_PISTOL};
    attachments[] += {"bipod_02_F_tan"};
  };
  class O_Soldier_AAR_F: O_Soldier_F {// AAR
    backpackItems[] += {EAST_AR_MAG};
    attachments[] = {EAST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class O_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    magazines[] += {EAST_AT_MAG};
    launchers[] = {EAST_AT};
  };
  class O_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {EAST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: O_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class O_support_MG_F: O_Soldier_AR_F {// MMG Gunner
    weapons[] = {EAST_MMG};
    magazines[] = {EAST_MMG_MAG,EAST_PISTOL_MAG,BASE_GRENADES(EAST_FRAG)};
  };
  class O_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpackItems[] += {EAST_MMG_MAG};
  };
  class O_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("B_Carryall_ocamo", RPG32_MAT_MAG)
    launchers[] = {RPG32_MAT};
  };
  class O_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_ocamo", RPG32_MAT_MAG2)
  };
  class O_soldier_AA_F: Fic_soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_ocamo", EAST_SAM_MAG)
    launchers[] = {EAST_SAM};
  };
  class O_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_ocamo", EAST_SAM_MAG2)
  };
  class O_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("O_Mortar_01_weapon_F")
  };
  class O_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("O_Mortar_01_support_F")
  };
  class O_spotter_F: Fic_Spotter {// Spotter
	headgear[] = {"H_HelmetSpecO_ocamo"};
    weapons[] = {EAST_SPOTTER};
    magazines[] = {EAST_SPOTTER_MAG,BASE_GRENADES(EAST_FRAG)};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {EAST_LEADER_LINKED};
    attachments[] = {EAST_RIFLE_ATTACHMENTS};
  };
  class O_sniper_F: O_spotter_F {// Sniper
    weapons[] = {EAST_SNIPER};
    magazines[] = {EAST_SNIPER_MAG,BASE_GRENADES(EAST_FRAG)};
    items[] = {EAST_BASE_TOOLS,BASE_MEDICAL,"ACE_RangeCard"};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
    attachments[] = {"ACE_optic_SOS_2D"};
  };
  class O_Helipilot_F {// Pilot
    uniform[] = {"U_O_PilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_HelmetCrew_O"};
    backpack[] = {"B_AssaultPack_rgr"};
    weapons[] = {EAST_SMG};
    magazines[] = {EAST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,EAST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class O_crew_F: Fic_Soldier_Carbine {// Crew
    magazines[] = {EAST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] += {KEY_EAST,RADIO_LR};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class O_soldier_repair_F: O_crew_F {// Repair Specialist
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_EAST};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class Fic_eng: O_soldier_repair_F {
    backpack[] = {"B_Carryall_ocamo"};
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class O_soldier_exp_F: Fic_eng {// Mines Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class O_engineer_F: Fic_eng {// Explosive Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: O_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
