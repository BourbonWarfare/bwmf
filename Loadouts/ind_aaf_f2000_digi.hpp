//Author: Shanahan
//Description: Altis Armed Forces: F2000 - Green Digital

class ind_f {
  //Rifle
  #define IND_RIFLE "arifle_Mk20_F"
  #define IND_RIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Green:2"
  #define IND_RIFLE_ATTACHMENTS "optic_ACO_grn","acc_pointer_IR"
  #define IND_AAR_ATTACHMENTS IND_RIFLE_ATTACHMENTS
  //GL Rifle
  #define IND_GLRIFLE "arifle_Mk20_GL_F"
  #define IND_GLRIFLE_MAG IND_RIFLE_MAG
  #define IND_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
  #define IND_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
  //Carbine
  #define IND_CARBINE IND_RIFLE
  #define IND_CARBINE_MAG IND_RIFLE_MAG
  // AR
  #define IND_AR "LMG_Mk200_F"
  #define IND_AR_MAG "200Rnd_65x39_cased_Box:2"
  // AT
  #define IND_AT "launch_NLAW_F"
  // MMG
  #define IND_MMG "LMG_Zafir_F"
  #define IND_MMG_MAG "150Rnd_762x54_Box:3"
  // Sniper Rifle
  #define IND_SNIPER "srifle_EBR_F"
  #define IND_SNIPER_MAG "20Rnd_762x51_Mag:8"
  // Spotter Rifle
  #define IND_SPOTTER IND_CARBINE
  #define IND_SPOTTER_MAG IND_RIFLE_MAG
  // SMG
  #define IND_SMG "hgun_PDW2000_F"
  #define IND_SMG_MAG "30Rnd_9x21_Mag:8"
  // Pistol
  #define IND_PISTOL "hgun_ACPC2_F"
  #define IND_PISTOL_MAG "9Rnd_45ACP_Mag:3"
  // SAM
  #define IND_SAM "launch_I_Titan_F"
  #define IND_SAM_MAG "Titan_AA:3"
  #define IND_SAM_MAG2 "Titan_AA:2"
  // Grenades
  #define IND_FRAG "HandGrenade:2"

  class Car {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {IND_AT};
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {IND_RIFLE_MAG,IND_RIFLE_MAG,IND_CARBINE_MAG,IND_AR_MAG,IND_AR_MAG,IND_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class I_Soldier_F {// rifleman
    uniform[] = {"U_I_CombatUniform"};
    vest[] = {"V_PlateCarrierIA2_dgtl"};
    headgear[] = {"H_HelmetIA"};
    backpack[] = {"B_AssaultPack_dgtl"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {IND_RIFLE};
    magazines[] = {IND_RIFLE_MAG,BASE_GRENADES(IND_FRAG)};
    items[] = {IND_BASE_TOOLS};
    linkedItems[] = {IND_BASE_LINKED};
    attachments[] = {IND_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: I_Soldier_F {// carbine-man
	vest[] = {"V_PlateCarrierIA1_dgtl"};
    weapons[] = {IND_CARBINE};
    magazines[] = {IND_CARBINE_MAG,BASE_GRENADES(IND_FRAG)};
  };
  class I_Soldier_TL_F: I_Soldier_F {// FTL
    weapons[] = {IND_GLRIFLE};
    magazines[] = {IND_GLRIFLE_MAG,IND_GLRIFLE_MAG_HE,IND_GLRIFLE_MAG_SMOKE,LEADER_GRENADES(IND_FRAG,IND_CHEM)};
    items[] += {IND_LEADER_TOOLS};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
  };
  class I_Soldier_SL_F: I_Soldier_TL_F {// SL
	vest[] = {"V_PlateCarrierIAGL_dgtl"};
    handguns[] = {IND_PISTOL};
    magazines[] += {IND_PISTOL_MAG};
    linkedItems[] += {IND_BASE_LINKED,IND_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class I_officer_F: I_Soldier_SL_F {// CO and DC
	uniform[] = {"U_I_OfficerUniform"};
	vest[] = {"V_PlateCarrierIA1_dgtl"};
	headgear[] = {"H_Beret_blk"};
    items[] += {RADIO_LR};
  };
  class I_soldier_UAV_F: I_Soldier_F {
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_uavterminal"};
  };
  class I_Soldier_AR_F: I_Soldier_F {// AR
    weapons[] = {IND_AR};
    magazines[] = {IND_AR_MAG,IND_PISTOL_MAG,BASE_GRENADES(IND_FRAG)};
    handguns[] = {IND_PISTOL};
	attachments[] += {"bipod_03_F_blk"};
  };
  class I_Soldier_AAR_F: I_Soldier_F {// AAR
    backpackItems[] += {IND_AR_MAG};
    attachments[] = {IND_AAR_ATTACHMENTS};
    linkeditems[] += {BINOS};
  };
  class I_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    launchers[] = {IND_AT};
  };
  class I_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {IND_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: I_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class I_support_MG_F: I_Soldier_AR_F {// MMG
    weapons[] = {IND_MMG};
    magazines[] = {IND_MMG_MAG,IND_PISTOL_MAG,BASE_GRENADES(IND_FRAG)};
    attachments[] = {};
  };
  class I_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpackItems[] += {IND_MMG_MAG};
  };
  class I_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("B_Carryall_oli", RPG32_MAT_MAG)
    launchers[] = {RPG32_MAT};
  };
  class I_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_oli", RPG32_MAT_MAG2)
  };
  class I_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_oli", IND_SAM_MAG)
    launchers[] = {IND_SAM};
  };
  class I_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_oli", IND_SAM_MAG2)
  };
  class I_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("I_Mortar_01_weapon_F")
  };
  class I_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("I_Mortar_01_support_F")
  };
  class I_spotter_F: Fic_Spotter {// Spotter
	uniform[] = {"U_I_CombatUniform_shortsleeve"};
	vest[] = {"V_PlateCarrierIA1_dgtl"};
    headgear[] = {"H_Booniehat_dgtl","H_Cap_blk_Raven"};
    weapons[] = {IND_SPOTTER};
    magazines[] = {IND_SPOTTER_MAG,BASE_GRENADES(IND_FRAG)};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {IND_LEADER_LINKED};
    attachments[] = {IND_RIFLE_ATTACHMENTS};
  };
  class I_sniper_F: I_spotter_F {// Sniper
    weapons[] = {IND_SNIPER};
    magazines[] = {IND_SNIPER_MAG,BASE_GRENADES(IND_FRAG)};
    items[] = {IND_BASE_TOOLS,BASE_MEDICAL,"ACE_RangeCard"};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
    attachments[] = {"optic_DMS"};
  };
  class I_Helipilot_F {// Pilot
    uniform[] = {"U_I_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_I"};
    backpack[] = {"B_AssaultPack_rgr"};
    weapons[] = {IND_SMG};
    magazines[] = {IND_SMG_MAG,CREW_GRENADES};
    items[] = {BASE_MEDICAL,IND_BASE_TOOLS,IND_LEADER_TOOLS,RADIO_MR};
    backpackItems[] += {KEY_IND,RADIO_LR};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
  };
  class I_helicrew_F: I_Helipilot_F {}; // Pilot
  class I_crew_F: Fic_Soldier_Carbine {// Crew
    magazines[] = {IND_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] += {KEY_IND,RADIO_LR};
    linkedItems[] += {IND_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class I_Soldier_repair_F: I_crew_F {// Repair Specialist
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_IND};
    linkedItems[] = {IND_BASE_LINKED,IND_LEADER_LINKED};
  };
  class Fic_Eng: I_soldier_repair_F {
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class I_soldier_exp_F: Fic_Eng {// Explosive Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class I_engineer_F: Fic_Eng {// Mine Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: I_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
