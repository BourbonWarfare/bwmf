//Author: Shanahan
//Description: NATO [UK Spec Ops]: MX - Grey (CTRG)

class blu_f {
  //Rifle
  #define WEST_RIFLE "arifle_MX_Black_F"
  #define WEST_RIFLE_MAG "30Rnd_65x39_caseless_mag:8","30Rnd_65x39_caseless_mag_Tracer:2"
  #define WEST_RIFLE_ATTACHMENTS "optic_Holosight","acc_pointer_IR"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "arifle_MX_GL_Black_F"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "3Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell:2"
  #define WEST_GLRIFLE_MAG_HE "3Rnd_HE_Grenade_shell:2"
  #define WEST_GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
  //Carbine
  #define WEST_CARBINE "arifle_MXC_Black_F"
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "arifle_MX_SW_Black_F"
  #define WEST_AR_MAG "100Rnd_65x39_caseless_mag:4"
  // AT
  #define WEST_AT "launch_NLAW_F"
  // MMG
  #define WEST_MMG "LMG_Zafir_F"
  #define WEST_MMG_MAG "150Rnd_762x54_Box:3"
  #define WEST_MMG_MAG2 "150Rnd_762x54_Box:3"
  // Sniper Rifle
  #define WEST_SNIPER "arifle_MXM_Black_F"
  #define WEST_SNIPER_MAG "30Rnd_65x39_caseless_mag:8"
  // Spotter Rifle
  #define WEST_SPOTTER WEST_SNIPER
  #define WEST_SPOTTER_MAG WEST_SNIPER_MAG
  // SMG
  #define WEST_SMG "SMG_01_F"
  #define WEST_SMG_MAG "30Rnd_45ACP_Mag_SMG_01:6"
  // Pistol
  #define WEST_PISTOL "hgun_Pistol_heavy_01_F"
  #define WEST_PISTOL_MAG "11Rnd_45ACP_Mag:2"
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
    uniform[] = {"U_B_CTRG_1","U_B_CTRG_1","U_B_CTRG_2","U_B_CTRG_3"};
    vest[] = {"V_PlateCarrierH_CTRG"};
    headgear[] = {"H_HelmetB_light_black"};
    backpack[] = {"B_AssaultPack_rgr"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {WEST_RIFLE};
    magazines[] = {WEST_RIFLE_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] = {WEST_BASE_TOOLS};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {WEST_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: B_Soldier_F {// carbine-man
	vest[] = {"V_PlateCarrierL_CTRG"};
    weapons[] = {WEST_CARBINE};
    magazines[] = {WEST_CARBINE_MAG,BASE_GRENADES(WEST_FRAG)};
  };
  class B_Soldier_TL_F: B_Soldier_F {// FTL
    weapons[] = {WEST_GLRIFLE};
    headgear[] = {"H_HelmetSpecB_blk"};
    magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,LEADER_GRENADES(WEST_FRAG,WEST_CHEM)};
    items[] += {WEST_LEADER_TOOLS};
    linkedItems[] += {WEST_LEADER_LINKED,BINOS};
  };
  class B_Soldier_SL_F: B_Soldier_TL_F {// SL
    handguns[] = {WEST_PISTOL};
    magazines[] += {WEST_PISTOL_MAG};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class B_officer_F: B_Soldier_SL_F {// CO and DC
	headgear[] = {"H_MilCap_gry"};
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
	attachments[] += {"bipod_01_F_blk"};
  };
  class B_Soldier_AAR_F: B_Soldier_F {// AAR
    backpackItems[] += {WEST_AR_MAG};
    attachments[] = {WEST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class B_Soldier_LAT_F: Fic_Soldier_Carbine {// RAT
    launchers[] = {WEST_AT};
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
    LAUNCHER_GEAR("B_Carryall_khk", RPG32_MAT_MAG)
    launchers[] = {RPG32_MAT};
  };
  class B_Soldier_AAT_F: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_khk", RPG32_MAT_MAG2)
  };
  class B_soldier_AA_F: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("B_Carryall_khk", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class B_Soldier_AAA_F: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("B_Carryall_khk", WEST_SAM_MAG2)
  };
  class B_support_Mort_F: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class B_support_AMort_F: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class B_spotter_F: Fic_Spotter {// Spotter
	uniform[] = {"U_B_CTRG_2","U_B_CTRG_3"};
    vest[] = {"V_PlateCarrierL_CTRG"};
    headgear[] = {"H_HelmetB_light","H_Cap_tan_specops_US"};
    weapons[] = {WEST_SPOTTER};
    magazines[] = {WEST_SPOTTER_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
    linkedItems[] += {WEST_LEADER_LINKED};
	attachments[] = {"optic_Aco","bipod_01_F_blk","acc_pointer_IR","muzzle_snds_H"};
  };
  class B_sniper_F: B_spotter_F {// Sniper
    headgear[] = {"H_Booniehat_khk_hs","H_Cap_blk"};
    weapons[] = {WEST_SNIPER};
    magazines[] = {WEST_SNIPER_MAG,BASE_GRENADES(WEST_FRAG)};
    items[] = {BASE_MEDICAL,BASE_TOOLS,"ACE_RangeCard"};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {"optic_Aco","bipod_01_F_blk","acc_pointer_IR","muzzle_snds_H"};
  };
  class B_Helipilot_F {// Pilot
    uniform[] = {"U_B_HeliPilotCoveralls"};
    backpack[] = {"B_AssaultPack_blk"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"H_PilotHelmetHeli_B"};
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,WEST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class B_helicrew_F: B_Helipilot_F {}; // Pilot
  class B_crew_F: Fic_Soldier_Carbine {// Crew
    headgear[] = {"H_HelmetB_light_black"};
    backpack[] = {"B_Carryall_khk"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class B_soldier_repair_F: B_crew_F {// Repair Specialist
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_WEST};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class Fic_eng: B_soldier_repair_F {
    headgear[] = {"H_HelmetB"};
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
