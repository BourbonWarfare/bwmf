// Author: BWMF
// Description: Russian: AK74 - EMR Desert

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_ak74m_camo","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m","rhs_weap_ak74m_2mag","rhs_weap_ak74m_desert"
#define RIFLE_MAG "rhs_30Rnd_545x39_AK:8","rhs_30Rnd_545x39_AK_green:2"
#define RIFLE_ATTACHMENTS "rhs_acc_pkas","rhs_acc_dtk"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "rhs_weap_ak74m_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
// Carbine
#define CARBINE "rhs_weap_ak105"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74M"
#define AR_MAG "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:6"
// Recon Rifle Attachments
#define RECONRIFLE_ATTACHMENTS  "rhs_acc_tgpa","rhs_acc_2dpZenit","rhs_acc_pkas"
// AT
#define AT "rhs_weap_rpg7"
#define AT_MAG "rhs_rpg7_PG7VL_mag:3","rhs_rpg7_OG7V_mag:1"
// MMG
#define MMG "rhs_weap_pkm"
#define MMG_MAG "rhs_100Rnd_762x54mmR_green:5"
// MAT
#define MAT "rhs_weap_rpg7"
#define MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1","rhs_rpg7_OG7V_mag:1"
#define MAT_MAG2 "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_OG7V_mag:1"
#define MAT_OPTIC "rhs_acc_pgo7v"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:3"
#define SAM_MAG2 "rhs_mag_9k38_rocket:2"
// Marksman Rifle
#define MARKSMAN "rhs_weap_svds"
#define MARKSMAN_MAG "rhs_10Rnd_762x54mmR_7N1:8"
// Sniper Rifle
#define SNIPER "rhs_weap_svds"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
// Spotter Rifle
#define SPOTTER "rhs_weap_svds"
#define SPOTTER_MAG "rhs_10Rnd_762x54mmR_7N1:8"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "rhs_30Rnd_545x39_AK:6"
// Pistol
#define PISTOL "rhs_weap_pya"
#define PISTOL_MAG "rhs_mag_9x19_17:3"
// Grenades
#define BASE_FRAG "rhs_mag_rgd5:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,"Chemlight_red:2"
// Gear
#define BASE_TOOLS COMMON_TOOLS,"rhs_6b27m_digi"
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY_EAST
#define BASE_LINKED COMMON_LINKED
#define LEADER_LINKED COMMON_LEADER_LINKED

class Car {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportWeapons[] = {AT,AT_MAG};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class potato_msv_rifleman { // rifleman
  uniform[] = {"rhs_uniform_emr_des_patchless"};
  vest[] = {"rhs_6b23_digi_6sh92"};
  headgear[] = {"rhs_6b27m_digi","rhs_6b27m_digi_bala","rhs_6b27m_digi_ess","rhs_6b27m_digi_ess_bala","rhs_6b47","rhs_6b47_bala","rhs_6b47_ess","rhs_6b47_ess_bala"};
  backpack[] = {"rhs_assault_umbts"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"rhs_1PN138"}; // rhs_1PN138 russian single tube NVG
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {"rhs_acc_pkas","rhs_acc_1p29","rhs_acc_1p63","rhs_acc_1p78","rhs_acc_1pn93_2","rhs_acc_ekp1"};
};
class Fic_Soldier_Carbine: potato_msv_rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class potato_msv_sr: potato_msv_rifleman {// FTL
  vest[] = {"rhs_6b23_digi_6sh92_vog_headset"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sl: potato_msv_sr { // SL
  headgear[] = {"rhs_tsh4"};
  backpack[] = {"B_FieldPack_oli"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class potato_msv_plt: potato_msv_sl { // PLT
  headgear[] = {"rhs_fieldcap_digi"};
  items[] += {RADIO_LR};
};
class potato_msv_aplt: potato_msv_plt {}; // PLT Assistant
class potato_msv_coy: potato_msv_plt { // COY
  headgear[] = {"rhs_tsh4"};
};
class potato_msv_acoy: potato_msv_plt{}; // COY Assistant
class potato_msv_pol: potato_msv_rifleman { // Poloitical Officer
  vest[] = {"rhs_vest_commander"};
  headgear[] = {"rhs_beret_mp1"};
  backpack[] = {}; // This loadout looks stupid with a backpack
  weapons[] = {"rhs_weap_makarov_pm"};
  magazines[] = {"rhs_mag_9x18_8_57N181S:3"};
  items[] += {RADIO_MR,RADIO_MR,BASE_MEDICAL}; // 2 radios
};
class potato_msv_AR: potato_msv_rifleman {// AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {};
  opticChoices[] = {};
};
class potato_msv_g: potato_msv_rifleman {// Grenadier
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class potato_msv_ag: potato_msv_rifleman {// Assistant Grenadier
  magazines[] += {AT_MAG};
};
class potato_msv_sm: potato_msv_rifleman {// Medic
  vest[] = {"rhs_6b23_digi_medic"};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_marksman: potato_msv_rifleman {// Squad Marksman
  weapons[] = {MARKSMAN};
  magazines[] = {MARKSMAN_MAG};
  attachments[] = {"rhs_acc_pso1m21"};
  opticChoices[] = {"rhs_acc_pso1m21","rhs_acc_1pn93_1"};
};
class Fic_Spotter: potato_msv_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_msv_mmgg: potato_msv_AR {// MMG
  backpack[] = {"B_Kitbag_sgg"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
};
class potato_msv_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"B_Kitbag_sgg"};
  backpackItems[] += {MMG_MAG};
};
class potato_msv_matg: potato_msv_rifleman {// MAT Gunner
  backpack[] = {"rhs_rpg_empty"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class potato_msv_matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {"rhs_rpg_empty"};
  backpackItems[] = {};
  magazines[] += {MAT_MAG2};
  items[] += {BASE_MEDICAL};
};
class potato_msv_msamg: potato_msv_rifleman {// SAM Gunner
  SAM_GEAR("B_Carryall_oli", SAM_MAG)
  launchers[] = {SAM};
};
class potato_msv_msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR("B_Carryall_oli", SAM_MAG)
};
class potato_msv_msaml: potato_msv_msamag {// SAM Leader
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,RADIO_LR};
};
class potato_msv_mtrl: Fic_Spotter { // Mortar Leader
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,RANGE_FINDER,RADIO_LR};
};
class potato_msv_mtrg: potato_msv_rifleman {// Mortar Gunner
  MORTAR_GEAR("O_Mortar_01_weapon_F")
};
class potato_msv_mtrag: Fic_Spotter {// Assistant Mortar
  MORTAR_GEAR("O_Mortar_01_support_F")
};
class spotter_F: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_RangeCard"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {"rhs_acc_pso1m2"};
};
class potato_msv_sniper: spotter_F {// Sniper
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS,"ACE_RangeCard"};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  attachments[] = {"rhs_acc_pso1m21"};
  opticChoices[] = {"rhs_acc_pso1m21","rhs_acc_1pn93_1"};
};
class potato_msv_pilot {// Pilot
  uniform[] = {"rhs_uniform_df15_tan"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"rhs_zsh7a_mike"};
  backpack[] = {"B_AssaultPack_rgr"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_EAST,RADIO_LR};
  items[] = {BASE_MEDICAL,BASE_TOOLS,LEADER_TOOLS,RADIO_MR,"rhsusf_ANPVS_15"}; // Theres no double tube NVGs for pilots in RHS yet
  linkedItems[] = {BASE_LINKED,LEADER_LINKED};
  attachments[] = {"rhs_acc_dtk"};
};
class potato_msv_cc: potato_msv_pilot {};// Crew Chief
class fic_vehicle_crewman: potato_msv_rifleman {// Vehicle crew base
  headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY_EAST,RADIO_LR};
  linkedItems[] += {BASE_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_msv_vicl: fic_vehicle_crewman {// Vehicle Leader
  backpackItems[] = {RADIO_MR,RADIO_LR,KEY_EAST};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,BINOS};
};
class potato_msv_vicc: fic_vehicle_crewman {// Vehicle Crewman (non-repair)
  backpackItems[] = {RADIO_MR,KEY_EAST};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_vicd: fic_vehicle_crewman {// Vehicle Crewman (repair)
  backpackItems[] = {"toolkit",KEY_EAST};
};
class potato_msv_eng: potato_msv_rifleman {// Demoman
  backpack[] = {"B_Carryall_oli"};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {"Toolkit"};
  magazines[] += {BASE_EXP};
  linkedItems[] = {BASE_LINKED};
};
class potato_msv_engl: potato_msv_eng {// Demoman Leader
  backpackItems[] += {RADIO_MR,KEY_EAS};
  linkedItems[] = {LEADER_LINKED};
};
class potato_msv_sf_rifleman: potato_msv_rifleman {// Recon Rifleman
  uniform[] = {"rhs_uniform_gorka_r_g","rhs_uniform_gorka_r_y"};
  vest[] = {"rhs_6b23_6sh116_od","rhsgref_6b23_khaki_rifleman","rhsgref_6b23_khaki"};
  headgear[] = {"rhs_6b27m_green","rhs_6b27m_green_bala","rhs_6b27m_green_ess","rhs_6b27m_green_ess_bala","rhs_6b28_green","rhs_6b28_green_bala","rhs_6b28_green_ess","rhs_6b28_green_ess_bala","rhs_beanie_green","rhs_beret_milp","rhsusf_Bowman","rhsusf_bowman_cap"};
  backpack[] = {"rhs_sidor"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  attachments[] = {RECONRIFLE_ATTACHMENTS};
};
class potato_msv_sf_ftl: potato_msv_sf_rifleman {// Recon Senior Rifleman
  vest[] = {"rhs_6b23_6sh116_vog_od"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sf_sl: potato_msv_sf_ftl {// Recon Squad Leader
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR,"rhs_6b27m_digi"};
};
class potato_msv_sf_ar: potato_msv_sf_rifleman {// Recon AR
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  attachments[] = {"CUP_optic_Kobra","CUP_muzzle_PBS4"};
  opticChoices[] = {};
};
class potato_msv_sf_g: potato_msv_sf_rifleman {//Recon Grenadier
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class potato_msv_rifleman_04: potato_msv_sf_rifleman {//Recon Assistant Grenadier
  magazines[] += {AT_MAG};
};
class potato_msv_sf_sm: potato_msv_sf_rifleman {// Recon Medic
  vest[] = {"rhsgref_6b23_khaki_medic"};
  magazines[] = {RIFLE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_sf_marksman: potato_msv_sf_rifleman {// Recon Marksman
  weapons[] = {MARKSMAN};
  magazines[] = {MARKSMAN_MAG};
  items[] += {"ACE_RangeCard"}; // SF Marksman gets a rangecard for high speed
  attachments[] = {"rhs_acc_pso1m21"};
  opticChoices[] = {"rhs_acc_pso1m21","rhs_acc_1pn93_1"};
};
class potato_msv_sf_aar: potato_msv_sf_rifleman {//Recon AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class fallback: potato_msv_rifleman {}; // This means any faction member who doesn't match something will use this loadout
