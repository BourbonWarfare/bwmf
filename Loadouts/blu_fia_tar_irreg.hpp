//Author: Shanahan
//Description: FIA: TAR - Irregular Uniforms

class blu_f {
  //Rifle
  #define WEST_RIFLE "arifle_TRG21_F"
  #define WEST_RIFLE_MAG "30Rnd_556x45_Stanag:8","30Rnd_556x45_Stanag_Tracer_Yellow:2"
  #define WEST_RIFLE_ATTACHMENTS "optic_Aco","acc_flashlight"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "arifle_TRG21_GL_F"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "3Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell:2"
  #define WEST_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define WEST_CARBINE "arifle_TRG20_F"
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "LMG_Mk200_F"
  #define WEST_AR_MAG "200Rnd_65x39_cased_Box:2"
  // AT
  #define WEST_AT "launch_RPG32_F"
  #define WEST_AT_MAG "RPG32_F:1"
  // MMG
  #define WEST_MMG "LMG_Zafir_F"
  #define WEST_MMG_MAG "150Rnd_762x54_Box:3"
  // Sniper Rifle
  #define WEST_SNIPER "srifle_DMR_01_F"
  #define WEST_SNIPER_MAG "10Rnd_762x54_Mag:10"
  // Spotter Rifle
  #define WEST_SPOTTER WEST_SNIPER
  #define WEST_SPOTTER_MAG WEST_SNIPER_MAG
  // SMG
  #define WEST_SMG "hgun_PDW2000_F"
  #define WEST_SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
  // Pistol
  #define WEST_PISTOL "hgun_ACPC2_F"
  #define WEST_PISTOL_MAG "9Rnd_45ACP_Mag:3"
  // SAM
  #define WEST_SAM "launch_B_Titan_F"
  #define WEST_SAM_MAG "Titan_AA:3"
  #define WEST_SAM_MAG2 "Titan_AA:2"
  // Grenades
  #define WEST_FRAG "HandGrenade:2"

  class Car {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {WEST_AT};
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {WEST_RIFLE_MAG,WEST_RIFLE_MAG,WEST_CARBINE_MAG,WEST_AR_MAG,WEST_AR_MAG,WEST_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class B_Soldier_F {// rifleman
    uniform[] = {"U_BG_Guerrilla_6_1","U_BG_Guerilla1_1","U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};
    vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_khk","V_TacVest_oli"};
    headgear[] = {"H_Watchcap_sgg","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_sgg","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_red","H_Shemag_olive","H_Watchcap_sgg","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_cbr","H_Bandanna_sgg","H_Cap_blk","H_Cap_grn","H_Cap_oli","H_Cap_red","H_Shemag_olive","H_Hat_brown"};
    backpack[] = {"B_TacticalPack_blk","B_TacticalPack_rgr","B_TacticalPack_oli"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {WEST_RIFLE};
    magazines[] = {WEST_RIFLE_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] = {WEST_BASE_TOOLS};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {WEST_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: B_Soldier_F {// carbine-man
    weapons[] = {WEST_CARBINE};
    magazines[] = {WEST_CARBINE_MAG,BASE_GRENADES(WEST_FRAG)};
  };
  class B_Soldier_TL_F: B_Soldier_F {// FTL
    weapons[] = {WEST_GLRIFLE};
    headgear[] = {"H_Cap_oli_hs","H_Bandanna_khk_hs","H_Shemag_olive_hs","H_Watchcap_camo"};
    magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,LEADER_GRENADES(WEST_FRAG,WEST_CHEM)};
    items[] += {WEST_LEADER_TOOLS};
    linkedItems[] += {WEST_LEADER_LINKED,BINOS};
  };
  class B_Soldier_SL_F: B_Soldier_TL_F {// SL
	uniform[] = {"U_BG_leader"};
    handguns[] = {WEST_PISTOL};
    magazines[] += {WEST_PISTOL_MAG};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class B_officer_F: B_Soldier_SL_F {// CO and DC
	headgear[] = {"H_Beret_blk"};
    items[] += {RADIO_LR};
  };
  class B_soldier_UAV_F: B_Soldier_F {
    backpack[] = {"B_UAV_01_backpack_F"};
    linkedItems[] += {"B_uavterminal"};
  };
  class B_Soldier_AR_F: B_Soldier_F {// AR
    weapons[] = {WEST_AR};
    magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,BASE_GRENADES(WEST_FRAG)};
    handguns[] = {WEST_PISTOL};
	attachments[] += {"bipod_01_F_snd"};
  };
  class B_Soldier_AAR_F: B_Soldier_F {// AAR
    backpackItems[] += {WEST_AR_MAG};
    attachments[] = {WEST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    launchers[] = {WEST_AT};
	magazines[] += {WEST_AT_MAG};
  };
  class B_medic_F: Fic_Soldier_Carbine {// Medic
    magazines[] = {WEST_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: B_Soldier_F {
    linkedItems[] += {RANGE_FINDER};
  };
  class B_support_MG_F: B_Soldier_AR_F {// MMG
    weapons[] = {WEST_MMG};
    magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,BASE_GRENADES(WEST_FRAG)};
    attachments[] = {};
  };
  class B_Soldier_A_F: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpackItems[] += {WEST_MMG_MAG2};
  };
  class B_soldier_AT_F: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("B_Carryall_oli", RPG32_MAT_MAG)
    launchers[] = {RPG32_MAT};
  };
  class B_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_oli", RPG32_MAT_MAG2)
  };
  class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_oli", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class B_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_oli", WEST_SAM_MAG2)
  };
  class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class B_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class B_spotter_F: Fic_Spotter {// Spotter
    uniform[] = {"U_BG_Guerrilla_6_1","U_BG_Guerilla1_1","U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3"};  /// randomized
    vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_khk","V_TacVest_oli"}; /// randomized
    headgear[] = {"H_Bandanna_khk_hs","H_Watchcap_camo","H_Cap_oli_hs","H_Shemag_olive_hs"}; /// randomized
    weapons[] = {WEST_SPOTTER};
    magazines[] = {WEST_SPOTTER_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {WEST_LEADER_LINKED};
    attachments[] = {"ACE_optic_SOS_2D"};
  };
  class B_sniper_F: B_spotter_F {// Sniper
    weapons[] = {WEST_SNIPER};
    magazines[] = {WEST_SNIPER_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] = {BASE_MEDICAL,BASE_TOOLS,"ACE_RangeCard"};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {"ACE_optic_SOS_2D"};
  };
  class B_Helipilot_F {// Pilot
    uniform[] = {"U_BG_leader"};  /// randomized
    backpack[] = {"B_TacticalPack_blk","B_TacticalPack_rgr","B_TacticalPack_oli"};
    vest[] = {"V_TacVest_blk","V_TacVest_brn","V_TacVest_camo","V_TacVest_khk","V_TacVest_oli"}; /// randomized
    headgear[] = {"H_Bandanna_khk_hs","H_Watchcap_camo","H_Cap_oli_hs","H_Shemag_olive_hs"}; /// randomized
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,WEST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class B_helicrew_F: B_Helipilot_F {}; // Pilot
  class B_crew_F: Fic_Soldier_Carbine {// Crew
    backpack[] = {"B_Carryall_oli"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class B_soldier_repair_F: B_crew_F {// Repair Specialist
    backpack[] = {"B_Carryall_oli"};
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class Fic_eng: B_soldier_repair_F {
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class B_soldier_exp_F: Fic_eng {// Explosive Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class B_engineer_F: Fic_eng {// Mine Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: B_Soldier_F {}; //This means any faction member who doesn't match something will use this loadout
};
