//Author: BWMF
//Description: USMC: M16A4 - Desert Camo

class rhs_faction_usmc_wd {
  //Rifle
  #define WEST_RIFLE "rhs_weap_m16a4_carryhandle"
  #define WEST_RIFLE_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red:2"
  #define WEST_RIFLE_ATTACHMENTS "rhsusf_acc_anpeq15A"
  #define WEST_AAR_ATTACHMENTS WEST_RIFLE_ATTACHMENTS
  //GL Rifle
  #define WEST_GLRIFLE "rhs_weap_m16a4_carryhandle_M203"
  #define WEST_GLRIFLE_MAG WEST_RIFLE_MAG
  #define WEST_GLRIFLE_MAG_SMOKE "rhs_mag_m714_White:2","rhs_mag_m713_Red:2"
  #define WEST_GLRIFLE_MAG_HE "rhs_mag_M433_HEDP:5"
  #define WEST_GLRIFLE_MAG_FLARE "rhs_mag_M585_white:2","rhs_mag_m661_green:2","rhs_mag_m662_red:2"
  // GL Launcher
  #define WEST_GLLAUNCHER "rhs_weap_m32"
  #define WEST_GLLAUNCHER_MAG_HE "rhsusf_mag_6Rnd_M441_HE:3"
  #define WEST_GLLAUNCHER_MAG_SMOKE "rhsusf_mag_6Rnd_M714_white:5"
  //Carbine
  #define WEST_CARBINE WEST_RIFLE
  #define WEST_CARBINE_MAG WEST_RIFLE_MAG
  // AR
  #define WEST_AR "rhs_weap_m249_pip_L"
  #define WEST_AR_MAG "rhs_200rnd_556x45_M_SAW:2"
  // AT
  #define WEST_AT "rhs_weap_rpg26"
  // MAT
  #define USMC_MAT "rhs_weap_smaw_green"
  #define USMC_MAT_MAG "rhs_mag_smaw_HEDP","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR:5"
  #define USMC_MAT_MAG2 "rhs_mag_smaw_HEDP","rhs_mag_smaw_HEAA"
  #define USMC_MAT_OPTIC "rhs_weap_optic_smaw"
  // HAT
  #define WEST_HAT "rhs_weap_fgm148"
  #define WEST_HAT_MAG "rhs_fgm148_magazine_AT:2"
  // MMG
  #define WEST_MMG "rhs_weap_m240G"
  #define WEST_MMG_MAG "rhsusf_100Rnd_762x51:2"
  #define WEST_MMG_MAG2 "rhsusf_100Rnd_762x51:4"
  // Sniper Rifle
  #define WEST_SNIPER "srifle_DMR_06_olive_F"
  #define WEST_SNIPER_MAG "20Rnd_762x51_Mag:4", "ACE_20Rnd_762x51_Mag_Tracer:4"
  // Spotter Rifle
  #define WEST_SPOTTER "rhs_weap_m4a1_blockII_grip2_KAC"
  #define WEST_SPOTTER_MAG "rhs_mag_30Rnd_556x45_Mk318_Stanag:8"
  // SMG
  #define WEST_SMG "hlc_smg_mp5a4"
  #define WEST_SMG_MAG "hlc_30Rnd_9x19_B_MP5:6"
  // Pistol
  #define WEST_PISTOL "rhsusf_weap_m9"
  #define WEST_PISTOL_MAG "rhsusf_mag_15Rnd_9x19_FMJ:3"

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

  class rhsusf_usmc_marpat_wd_rifleman {// Rifleman
    uniform[] = {"rhs_uniform_FROG01_d"};
    vest[] = {"rhsusf_spc_rifleman"};
    headgear[] = { "rhsusf_lwh_helmet_marpatd" };
    backpack[] = { "rhsusf_assault_eagleaiii_coy" };
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {WEST_RIFLE};
    magazines[] = {WEST_RIFLE_MAG,WEST_BASE_GRENADES};
    items[] = {WEST_BASE_TOOLS};
    linkedItems[] = {WEST_BASE_LINKED};
    attachments[] = {WEST_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: rhsusf_usmc_marpat_wd_rifleman {// carbine-man
    weapons[] = {WEST_CARBINE};
    magazines[] = {WEST_CARBINE_MAG,WEST_BASE_GRENADES};
  };
  class rhsusf_usmc_marpat_wd_teamleader: rhsusf_usmc_marpat_wd_rifleman {// FTL
    vest[] = {"rhsusf_spc_teamleader"};
    weapons[] = {WEST_GLRIFLE};
    magazines[] = {WEST_GLRIFLE_MAG,WEST_GLRIFLE_MAG_HE,WEST_GLRIFLE_MAG_SMOKE,WEST_BASE_GRENADES};
    items[] += {WEST_LEADER_TOOLS};
    linkedItems[] += {WEST_LEADER_LINKED,BINOS};
  };
  class rhsusf_usmc_marpat_wd_squadleader: rhsusf_usmc_marpat_wd_teamleader {// SL
    vest[] = {"rhsusf_spc_squadleader"};
    handguns[] = {WEST_PISTOL};
    magazines[] += {WEST_PISTOL_MAG};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class rhsusf_usmc_marpat_wd_officer: rhsusf_usmc_marpat_wd_squadleader {// PLT, CO and DC
    headgear[] = {"rhs_Booniehat_marpatd"};
    items[] += {RADIO_LR};
  };
  class rhsusf_usmc_marpat_wd_grenadier_m32: rhsusf_usmc_marpat_wd_officer {// PLT Sergeant
    headgear[] = {"rhsusf_lwh_helmet_marpatd"};
    vest[] = {"rhsusf_spc_teamleader"};
    weapons[] = {WEST_GLLAUNCHER};
    magazines[] = {WEST_GLLAUNCHER_MAG_HE, WEST_GLLAUNCHER_MAG_SMOKE, WEST_PISTOL_MAG };
    attachments[] = {};
  };
  class rhsusf_usmc_marpat_wd_fso : rhsusf_usmc_marpat_wd_officer{// FAC
    magazines[] = { WEST_GLRIFLE_MAG, WEST_GLRIFLE_MAG_SMOKE, WEST_GLRIFLE_MAG_SMOKE, "rhs_mag_m716_yellow:4", WEST_GLRIFLE_MAG_FLARE, WEST_GLRIFLE_MAG_FLARE, WEST_LEADER_GRENADES };
    vest[] = {"rhsusf_spc_teamleader"};
  };
  class rhsusf_usmc_marpat_wd_autorifleman_m249: rhsusf_usmc_marpat_wd_rifleman {// AR
    vest[] = {"rhsusf_spc_mg"};
    weapons[] = {WEST_AR};
    magazines[] = {WEST_AR_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    handguns[] = {WEST_PISTOL};
  };
  class rhsusf_usmc_marpat_wd_autorifleman_m249_ass: rhsusf_usmc_marpat_wd_rifleman {// AAR
    vest[] = {"rhsusf_spc_light"};
    backpackItems[] += {WEST_AR_MAG};
    attachments[] = {WEST_AAR_ATTACHMENTS};
    linkedItems[] += {BINOS};
  };
  class rhsusf_usmc_marpat_wd_riflemanat: Fic_Soldier_Carbine {// RAT
    launchers[] = {WEST_AT};
  };
  class Fic_Spotter: rhsusf_usmc_marpat_wd_rifleman {
    linkedItems[] += {RANGE_FINDER};
  };
  class rhsusf_usmc_marpat_wd_machinegunner: rhsusf_usmc_marpat_wd_autorifleman_m249 {// MMG
    weapons[] = {WEST_MMG};
    magazines[] = {WEST_MMG_MAG,WEST_PISTOL_MAG,WEST_BASE_GRENADES};
    attachments[] = {};
  };
  class rhsusf_usmc_marpat_wd_machinegunner_ass: Fic_Spotter {// MMG Spotter/Ammo Bearer
    vest[] = {"rhsusf_spc_light"};
    backpackItems[] += {WEST_MMG_MAG2};
  };
  class rhsusf_usmc_lar_marpat_wd_machinegunner : Fic_Soldier_Carbine{// HMG
    items[] = {BASE_MEDICAL};
    backpackItems[] = {};
    backpack[] = { "RHS_M2_Gun_Bag" };
  };
  class rhsusf_usmc_lar_marpat_wd_marksman : Fic_Spotter{// HMG Spotter / Ammo carrier
    items[] = {BASE_MEDICAL};
    backpackItems[] = {};
    backpack[] = {"RHS_M2_MiniTripod_Bag"};
  };
  class rhsusf_usmc_marpat_wd_smaw: Fic_Soldier_Carbine {// MAT Gunner
    vest[] = {"rhsusf_spc_light"};
    LAUNCHER_GEAR("B_Carryall_mcamo", USMC_MAT_MAG)
    launchers[] = {USMC_MAT};
    secondaryAttachments[] = {USMC_MAT_OPTIC};
  };
  class rhsusf_usmc_marpat_wd_javelin: Fic_Spotter {// MAT Spotter/Ammo Bearer
    vest[] = { "rhsusf_spc_light" };
    LAUNCHER_GEAR("B_Carryall_mcamo", USMC_MAT_MAG2)
  };
  class rhsusf_usmc_lar_marpat_wd_crewman : Fic_Soldier_Carbine{ // HAT Gunner
    LAUNCHER_GEAR("B_Carryall_mcamo", WEST_HAT_MAG)
    launchers[] = {WEST_HAT};
  };
  class rhsusf_usmc_lar_marpat_wd_combatcrewman : Fic_Spotter{// HAT Spotter
    vest[] = {"rhsusf_spc_light"};
    LAUNCHER_GEAR("B_Carryall_mcamo", WEST_HAT_MAG)
  };
  class rhsusf_usmc_marpat_wd_stinger : Fic_Soldier_Carbine {// SAM Gunner
    vest[] = { "rhsusf_spc_light" };
    LAUNCHER_GEAR("B_Carryall_mcamo", WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class rhsusf_usmc_marpat_wd_grenadier: Fic_Soldier_Carbine {// Mortar Gunner
    vest[] = { "rhsusf_spc_light" };
    MORTAR_GEAR("B_Mortar_01_weapon_F")
  };
  class rhsusf_usmc_marpat_wd_gunner: Fic_Spotter {// Assistant Mortar
    vest[] = { "rhsusf_spc_light" };
    MORTAR_GEAR("B_Mortar_01_support_F")
  };
  class rhsusf_usmc_marpat_wd_helipilot {// Pilot
    uniform[] = {"U_B_HeliPilotCoveralls"};
    backpack[] = {"B_AssaultPack_blk"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhsusf_hgu56p"};
    weapons[] = {WEST_SMG};
    magazines[] = {WEST_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    items[] = {BASE_MEDICAL,WEST_BASE_TOOLS,WEST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class rhsusf_usmc_marpat_wd_helicrew: rhsusf_usmc_marpat_wd_helipilot {// Pilot Crewchief
    headgear[] = {"rhsusf_hgu56p_mask"};
  };
  class rhsusf_usmc_marpat_wd_combatcrewman: Fic_Soldier_Carbine {// Crewman Commander
    vest[] = {"rhsusf_spc_crewman"};
    headgear[] = {"rhsusf_cvc_helmet"};
    backpack[] = {"B_Carryall_mcamo"};
    magazines[] = {WEST_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_WEST,RADIO_LR};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class rhsusf_usmc_marpat_wd_crewman: rhsusf_usmc_marpat_wd_combatcrewman {// Crewman Gunner
    backpackItems[] = {RADIO_MR,KEY_WEST};
    linkedItems[] = {WEST_BASE_LINKED,WEST_LEADER_LINKED};
  };
  class rhsusf_usmc_marpat_wd_engineer: rhsusf_usmc_marpat_wd_combatcrewman{// Crewman Driver
    backpackItems[] += {"Toolkit"};
  };
  class Fic_eng: rhsusf_usmc_marpat_wd_crewman {
    headgear[] = {"rhsusf_lwh_helmet_marpatd"};
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class rhsusf_usmc_marpat_wd_explosives: Fic_eng{// EOD Explodey guy
    vest[] = { "rhsusf_spc_rifleman" };
    backpackItems[] += {BASE_EXP};    // uncomment to add explosives
    //backpackItems[] += {BASE_MINE};   // uncomment to add mines
    linkedItems[] = { WEST_BASE_LINKED };
  };

  class rhsusf_usmc_recon_marpat_wd_teamleader: rhsusf_usmc_marpat_wd_squadleader {// SF Squad Leader
    //headgear[] = { "rhsusf_Bowman" };
  };
  class rhsusf_usmc_recon_marpat_wd_teamleader_fast: rhsusf_usmc_marpat_wd_teamleader{// SF FTL
    //headgear[] = {"rhsusf_Bowman"};
  };
  class rhsusf_usmc_recon_marpat_wd_machinegunner: rhsusf_usmc_marpat_wd_autorifleman_m249{// SF AR
  };
  class rhsusf_usmc_recon_marpat_wd_marksman: rhsusf_usmc_marpat_wd_autorifleman_m249_ass{// SF AAR
    weapons[] = {WEST_SNIPER};
    magazines[] = {WEST_SNIPER_MAG, WEST_BASE_GRENADES};
    attachments[] = {};
  };
  class rhsusf_usmc_recon_marpat_wd_rifleman_at: rhsusf_usmc_marpat_wd_riflemanat{// SF RAT
  };


  class fallback: rhsusf_usmc_marpat_wd_rifleman {}; //This means any faction member who doesn't match something will use this loadout
};

class rhs_faction_usn : rhs_faction_usmc_wd{
  class rhsusf_navy_marpat_wd_medic : Fic_Soldier_Carbine{// SL Corpsman
    vest[] = { "rhsusf_spc_corpsman" };
    magazines[] = { WEST_CARBINE_MAG,MEDIC_GRENADES };
    backpackItems[] = { MEDIC_MEDICAL };
  };
  class rhsusf_navy_sarc_w_fast : rhsusf_navy_marpat_wd_medic{// SF Squad Corpsman
  };
  class rhsusf_navy_sarc_w : rhsusf_navy_marpat_wd_medic{ // PLT Corpsman. Same as SL Corpsman. Future proofing for Advanced Medical
  };
};
