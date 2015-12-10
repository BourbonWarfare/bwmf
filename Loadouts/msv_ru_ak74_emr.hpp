//Author: BWMF
//Description: Russians - AK Rifles

class rhs_faction_msv {
  //Rifle
  #define MSV_RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_2mag"
  #define MSV_RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
  #define MSV_RIFLE_ATTACHMENTS "rhs_acc_pkas","rhs_acc_dtk"
  //GL Rifle
  #define MSV_GLRIFLE "rhs_weap_ak74m_gp25"
  #define MSV_GLRIFLE_MAG MSV_RIFLE_MAG
  #define MSV_GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
  #define MSV_GLRIFLE_MAG_HE "rhs_VOG25:5"
  #define MSV_GLRIFLE_MAG_FLARE "rhs_VG40OP_red:2"
  //Carbine
  #define MSV_CARBINE EAST_RIFLE
  #define MSV_CARBINE_MAG MSV_RIFLE_MAG
  // AR
  #define MSV_AR "rhs_weap_pkp"
  #define MSV_AR_MAG "rhs_100Rnd_762x54mmR:3","rhs_100Rnd_762x54mmR_green:2"
  // SF Rifle
  #define MSV_SFR "hlc_rifle_aek971"
  #define MSV_SFR_MAG "hlc_30Rnd_545x39_S_AK:6"
  // AT
  #define MSV_AT "rhs_weap_rpg7"
  #define MSV_AT_MAG "rhs_rpg7_PG7VL_mag:3","rhs_rpg7_OG7V_mag:1"
  // MAT
  #define MSV_MAT "rhs_weap_rpg7"
  #define MSV_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_TBG7V_mag:1"
  // LAT
  #define MSV_LAT "rhs_weap_rpg26"
  #define MSV_LAT_MAG "rhs_rpg26_mag"
  // SAM
  #define MSV_SAM "rhs_weap_igla"
  #define MSV_SAM_MAG "rhs_mag_9k38_rocket:2"
  // Sniper Rifle
  #define MSV_SNIPER "rhs_weap_svds"
  #define MSV_SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // Spotter Rifle
  #define MSV_SPOTTER "rhs_weap_svds"
  #define MSV_SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
  // SMG
  #define MSV_SMG "rhs_weap_ak74m_folded"
  #define MSV_SMG_MAG "rhs_30Rnd_545x39_AK:6"
  // Pistol
  #define MSV_PISTOL "rhs_weap_pya"
  #define MSV_PISTOL_MAG "rhs_mag_9x19_17:2"

  class Car {
    TransportWeapons[] = {MSV_LAT};
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Tank {
    TransportWeapons[] = {MSV_LAT};
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Helicopter {
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };
  class Plane {};
  class Ship_F {};

  class rhs_msv_rifleman {// rifleman
    uniform[] = {"rhs_uniform_emr_patchless"};
    vest[] = {"rhs_6b23_digi_6sh92_vog"};
    headgear[] = {"rhs_6b28","rhs_6b28_bala","rhs_6b28_ess","rhs_6b28_ess_bala"};
    backpack[] = {"rhs_assault_umbts"};
    backpackItems[] = {BASE_MEDICAL};
    weapons[] = {MSV_RIFLE};
    magazines[] = {MSV_RIFLE_MAG,EAST_BASE_GRENADES};
    items[] = {EAST_BASE_TOOLS};
    linkedItems[] = {EAST_BASE_LINKED};
    attachments[] = {MSV_RIFLE_ATTACHMENTS};
  };
  class Fic_Soldier_Carbine: rhs_msv_rifleman {// carbine-man
    weapons[] = {MSV_CARBINE};
    magazines[] = {MSV_CARBINE_MAG,EAST_BASE_GRENADES};
  };
  class rhs_msv_junior_sergeant: rhs_msv_rifleman {// FTL
    vest[] = {"rhs_6b23_digi_6sh92_vog_headset"};
    weapons[] = {MSV_GLRIFLE};
    magazines[] = {MSV_GLRIFLE_MAG,MSV_GLRIFLE_MAG_HE,MSV_GLRIFLE_MAG_SMOKE,EAST_LEADER_GRENADES};
    items[] += {EAST_LEADER_TOOLS};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
  };
  class rhs_msv_sergeant: rhs_msv_junior_sergeant {// SL
    backpack[] = {"B_FieldPack_oli"};
    handguns[] = {MSV_PISTOL};
    magazines[] += {MSV_PISTOL_MAG};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  };
  class rhs_msv_officer: rhs_msv_sergeant {// CO and DC
    headgear[] = {"rhs_6b27m_digi_ess_bala"};
    items[] += {RADIO_LR};
  };
  class rhs_msv_machinegunner: rhs_msv_rifleman {// AR
    weapons[] = {MSV_AR};
    magazines[] = {MSV_AR_MAG,MSV_PISTOL_MAG,EAST_BASE_GRENADES};
    handguns[] = {MSV_PISTOL};
    attachments[] = {};
  };
  class rhs_msv_machinegunner_assistant: rhs_msv_rifleman {// AAR
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] += {MSV_AR_MAG};
    linkedItems[] += {BINOS};
  };
  class rhs_msv_at: Fic_Soldier_Carbine {// RAT
    magazines[] += {MSV_AT_MAG};
    launchers[] = {MSV_AT};
  };
  class rhs_msv_strelok_rpg_assist: rhs_msv_rifleman {// Assistant Grenadier
    backpackItems[] += {MSV_AT_MAG};
    linkedItems[] += {BINOS};
  };
  class rhs_msv_medic: Fic_Soldier_Carbine {// Medic
    vest[] = {"rhs_6b23_digi_medic"};
    magazines[] = {MSV_CARBINE_MAG,MEDIC_GRENADES};
    backpackItems[] = {MEDIC_MEDICAL};
  };
  class Fic_Spotter: rhs_msv_rifleman {
    linkedItems[] += {EAST_LEADER_LINKED,RANGE_FINDER};
    items[] += {RADIO_MR};
  }
  class rhs_msv_mmg: rhs_msv_machinegunner {};// MMG
  class rhs_msv_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
    backpack[] = {"B_Kitbag_rgr"};
    backpackItems[] += {MSV_AR_MAG};
  };
  class rhs_msv_mat: Fic_Soldier_Carbine {// MAT Gunner
    LAUNCHER_GEAR("rhs_assault_umbts",EAST_MAT_MAG)
    launchers[] = {EAST_MAT};
    secondaryAttachments[] = {EAST_MAT_OPTIC};
  };
  class rhs_msv_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
    LAUNCHER_GEAR("rhs_assault_umbts",EAST_MAT_MAG)
  };
  class rhs_msv_aa: Fic_Soldier_Carbine {// SAM Gunner
    LAUNCHER_GEAR("rhs_assault_umbts",EAST_SAM_MAG)
    launchers[] = {EAST_SAM};
  };
  class rhs_msv_aaag: Fic_Spotter {// SAM Spotter/Ammo Bearer
    LAUNCHER_GEAR("rhs_assault_umbts",EAST_SAM_MAG2)
  };
  class rhs_msv_support_Mort: Fic_Soldier_Carbine {// Mortar Gunner
    MORTAR_GEAR("rhs_msv_Mortar_01_weapon_F")
  };
  class rhs_msv_support_AMort: Fic_Spotter {// Assistant Mortar
    MORTAR_GEAR("rhs_msv_Mortar_01_support_F")
  };
  class rhs_msv_sf : rhs_msv_rifleman {// Spetnaz Team
    vest[] = {"rhs_6b23_digi_6sh92_vog_headset"};
    headgear[] = {"rhs_6b28_bala","rhs_6b28_ess_bala"};
    backpack[] = {"rhs_assault_umbts"};
    weapons[] = {MSV_SFR};
    magazines[] = {MSV_SFR_MAG,EAST_BASE_GRENADES,"DemoCharge_Remote_Mag:1"};
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
    weapons[] = {MSV_SPOTTER};
    magazines[] = {MSV_SPOTTER_MAG,EAST_BASE_GRENADES};
    items[] += {"ACE_RangeCard"};
    attachments[] = {"rhs_acc_pso1m2"};
  };
  class rhs_pilot_transport_heli {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a"};
    backpack[] = {"rhs_assault_umbts"};
    weapons[] = {MSV_SMG};
    magazines[] = {MSV_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
    attachments[] = {"rhs_acc_dtk"};
  };
  class rhs_msv_crew: Fic_Soldier_Carbine {// Crew
    headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
    magazines[] = {MSV_CARBINE_MAG,CREW_GRENADES};
    backpackItems[] += {KEY_EAST,RADIO_LR};
    linkedItems[] += {EAST_LEADER_LINKED,BINOS};
    items[] += {BASE_MEDICAL};
  };
  class rhs_msv_repair: rhs_msv_crew {// Repair Specialist
    backpack[] = {"rhs_assault_umbts_engineer"};
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
    TransportMagazines[] = {MSV_RIFLE_MAG,MSV_RIFLE_MAG,MSV_CARBINE_MAG,MSV_AR_MAG,MSV_AR_MAG,MSV_GLRIFLE_MAG_HE,MSV_AT_MAG};
    TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
  };

  class rhs_pilot_transport_heli {// Pilot
    uniform[] = {"rhs_uniform_df15"};
    vest[] = {"V_TacVest_blk"};
    headgear[] = {"rhs_zsh7a"};
    backpack[] = {"rhs_assault_umbts"};
    weapons[] = {MSV_SMG};
    magazines[] = {MSV_SMG_MAG,CREW_GRENADES};
    backpackItems[] = {KEY_EAST,RADIO_LR};
    items[] = {BASE_MEDICAL,EAST_BASE_TOOLS,RADIO_MR};
    linkedItems[] = {EAST_BASE_LINKED,EAST_LEADER_LINKED};
    attachments[] = {"rhs_acc_dtk"};
  };
};
