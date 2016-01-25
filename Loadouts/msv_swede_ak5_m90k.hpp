//Author: Soviet
//Description: Swedish: AK5 - M90K (Desert)

class rhs_faction_msv {
  //Rifle
  #define MSV_RIFLE "SAM_AK5C","SAM_AK5C_NOGRIP"
  #define MSV_RIFLE_MAG "SAM_30Rnd_556x45_Pmag:8","SAM_30Rnd_556x45_Pmag_T:2"
  #define MSV_RIFLE_ATTACHMENTS "sam_acco_aimpoint","rhsusf_acc_anpeq15A"
  //GL Rifle
  #define MSV_GLRIFLE "SAM_AK5C_GRT"
  #define MSV_GLRIFLE_MAG MSV_RIFLE_MAG
  #define MSV_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
  #define MSV_GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
  //Carbine
  #define MSV_CARBINE MSV_RIFLE
  #define MSV_CARBINE_MAG MSV_RIFLE_MAG
  // AR
  #define MSV_AR "SAM_KSP90C"
  #define MSV_AR_MAG "SAM_200Rnd_556x45:2"
  // SF Rifle
  #define MSV_SFR "hlc_rifle_aek971"
  #define MSV_SFR_MAG "hlc_30Rnd_545x39_S_AK:6"
  // MMG
  #define MSV_MMG "SAM_KSP94"
  #define MSV_MMG_MAG "SAM_120Rnd_762x51:2","SAM_120Rnd_762x51_T:2"
  // LAT
  #define MSV_LAT "rhs_weap_M136_hedp"
  // Sniper Rifle
  #define MSV_SNIPER "rhs_weap_svds"
  #define MSV_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // Spotter Rifle
  #define MSV_SPOTTER "rhs_weap_svds"
  #define MSV_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // SMG
  #define MSV_SMG "hgun_PDW2000_F"
  #define MSV_SMG_MAG "30Rnd_9x21_Mag:4"
  // Pistol
  #define MSV_PISTOL "rhsusf_weap_m1911a1"
  #define MSV_PISTOL_MAG "rhsusf_mag_7x45acp_MHP:2"
  // Grenades
  #define MSV_FRAG "rhs_mag_rgd5:2"

  class Car {
    TransportWeapons[] = {MSV_LAT};
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {MSV_LAT};
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class rhs_msv_rifleman {// rifleman
    uniform[] = {"SAM_Crye_M90k_uniform","SAM_Crye_M90k_uniform_r"};
    vest[] = {"SAM_PlateCarrier"};
    headgear[] = {"SAM_HelmetIA_M90K","SAM_HelmetIA_M90K"};
    backpack[] = {"SAM_AssaultPack_rgr"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {MSV_RIFLE};
    magazines[] = {MSV_RIFLE_MAG,BASE_GRENADES(MSV_FRAG)};
    items[] = {EAST_BASE_TOOLS};
    linkedItems[] = {EAST_BASE_LINKED};
    attachments[] = {MSV_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: rhs_msv_rifleman {// carbine-man
    weapons[] = {MSV_CARBINE};
    magazines[] = {MSV_CARBINE_MAG,BASE_GRENADES(MSV_FRAG)};
  };
  class rhs_msv_junior_sergeant: rhs_msv_rifleman {// FTL
    weapons[] = {MSV_GLRIFLE};
    magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,LEADER_GRENADES(MSV_FRAG,EAST_CHEM)};
    items[] += {EAST_LEADER_TOOLS};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
  };
  class rhs_msv_sergeant: rhs_msv_junior_sergeant {// SL
    handguns[] = {MSV_PISTOL};
    magazines[] += {MSV_PISTOL_MAG};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class rhs_msv_officer: rhs_msv_sergeant {// CO and DC
    items[] += {RADIO_LR};
  };
  class rhs_msv_machinegunner: rhs_msv_rifleman {// AR
    backpack[] = {"SAM_Kitbag_rgr"};
    weapons[] = {MSV_AR};
    magazines[] = {MSV_AR_MAG,MSV_PISTOL_MAG,BASE_GRENADES(MSV_FRAG)};
    handguns[] = {MSV_PISTOL};
  };
  class rhs_msv_machinegunner_assistant: rhs_msv_rifleman {// AAR
    backpackItems[] += {MSV_AR_MAG};
    linkedItems[] += {BINOS};
  };
  class rhs_msv_at: Fic_Soldier_Carbine {// RAT
    LAUNCHER_GEAR("SAM_GRG_Backpack_Heat",WEST_MAT_MAG)
    launchers[] = {WEST_MAT};
  };
  class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman {// Assistant Grenadier
    LAUNCHER_GEAR("SAM_GRG_Backpack_Heat",WEST_MAT_MAG2)
    linkedItems[] += {BINOS};
  };
  class rhs_msv_medic: Fic_Soldier_Carbine {// Medic
    backpack[] = {"SAM_Kitbag_rgr_med"};
    magazines[] = {MSV_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: rhs_msv_rifleman {
    linkedItems[] += {EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class rhs_msv_mmg: rhs_msv_machinegunner {// MMG
    attachments[] = {};
    weapons[] = {MSV_MMG};
    magazines[] = {MSV_MMG_MAG,MSV_PISTOL_MAG,BASE_GRENADES(MSV_FRAG)};
  };
  class rhs_msv_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"SAM_Kitbag_rgr"};
    backpackItems[] += {MSV_MMG_MAG};
  };
  class rhs_msv_mat: rhs_msv_at {// MAT Gunner
    secondaryAttachments[] = {WEST_MAT_OPTIC};
  };
  class rhs_msv_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("SAM_GRG_Backpack_Heat",WEST_MAT_MAG2)
  };
  class rhs_msv_aa: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("SAM_Kitbag_rgr",WEST_SAM_MAG)
    launchers[] = {WEST_SAM};
  };
  class rhs_msv_aaag: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("SAM_Kitbag_rgr",WEST_SAM_MAG2)
  };
  class rhs_msv_support_Mort: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("rhs_msv_Mortar_01_weapon_F")
  };
  class rhs_msv_support_AMort: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("rhs_msv_Mortar_01_support_F")
  };
  class rhs_msv_sf : rhs_msv_rifleman {// Spetnaz Team
    backpack[] = {"SAM_Kitbag_rgr"};
    weapons[] = {MSV_SFR};
    magazines[] = {MSV_SFR_MAG,BASE_GRENADES(MSV_FRAG),"DemoCharge_Remote_Mag:1"};
    items[] += {RADIO_MR,"ACE_DefusalKit","ACE_Clacker"};
    linkedItems[] += {EAST_LEADER_LINKED,RANGE_FINDER};
    backpackItems[] += {"Chemlight_red"};
    attachments[] = {"hlc_optic_kobra","hlc_muzzle_545SUP_AK"};
  };
  class rhs_msv_sfl : rhs_msv_sf {// Spetnaz Leader
    items[] += {EAST_LEADER_TOOLS};
    backpackItems[] += {RADIO_LR};
  };
  class rhs_msv_marksman: rhs_msv_rifleman {// Marksman
    attachments[] = {"rhsusf_acc_anpeq15A","sam_acco_aimpoint_3x"};
  };
  class rhs_pilot_transport_heli {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a"};
    backpack[] = {"SAM_Kitbag_rgr"};
    weapons[] = {MSV_SMG};
    magazines[] = {MSV_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,EAST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class rhs_msv_crew: Fic_Soldier_Carbine {// Crew
    magazines[] = {MSV_CARBINE_MAG,CREW_GRENADES};
    backpack[] = {"SAM_Kitbag_rgr"};
    backpackItems[] += {KEY_EAST,RADIO_LR};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class rhs_msv_repair: rhs_msv_crew {// Repair Specialist
    backpackItems[] = {"Toolkit",RADIO_MR,KEY_EAST};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
  class Fic_eng: rhs_msv_repair {
    backpack[] = {"B_Carryall_oli"};
    items[] += {BASE_ENG};
    backpackItems[] = {};
  };
  class rhs_msv_exp: Fic_eng {// Explosive Specialist
    magazines[] += {BASE_EXP};
    backpackItems[] = {"Toolkit"};
  };
  class rhs_msv_engineer: Fic_eng {// Mine Specialist
    magazines[] += {BASE_MINE};
  };
  class fallback: rhs_msv_rifleman {}; //This means any faction member who doesn't match something will use this loadout
};

class rhs_faction_vvs {
  class Helicopter {
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };

  class rhs_pilot_transport_heli {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a"};
    backpack[] = {"SAM_Kitbag_rgr"};
    weapons[] = {MSV_SMG};
    magazines[] = {MSV_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,EAST_LEADER_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
  };
};
