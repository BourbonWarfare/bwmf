// Author: Raeth
// Description: Russian: AKM - Soviet Uniforms

#include "undef.hpp" // Reset defines

// Rifle
#define RIFLE "rhs_weap_akm"
#define RIFLE_MAG "30Rnd_762x39_Mag_F:8","30Rnd_762x39_Mag_Tracer_Green_F:2"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1l"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
// GL Rifle
#define GLRIFLE "rhs_weap_akm_gp25","rhs_weap_akms_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "rhs_GRD40_White:2","rhs_GRD40_Red:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
// Carbine
#define CARBINE "rhs_weap_akms"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "potato_arifle_RPK"
#define AR_MAG "potato_75Rnd_762x39mm_tracer:6"
// Recon Rifle Attachments
#define RECON_RIFLE_ATTACHMENTS "rhs_acc_pbs1"
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
#define MAT_OPTIC "rhs_acc_pgo7v3"
// SAM
#define SAM "rhs_weap_igla"
#define SAM_MAG "rhs_mag_9k38_rocket:3"
#define SAM_MAG2 "rhs_mag_9k38_rocket:2"
// Marksman Rifle
#define MARKSMAN "rhs_weap_svds"
#define MARKSMAN_MAG "rhs_10Rnd_762x54mmR_7N1:8"
#define MARKSMAN_ATTACHMENTS "rhs_acc_pso1m21"
#define MARKSMAN_ALT_OPTICS "rhs_acc_1pn93_1"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "rhs_30Rnd_545x39_AK:6"
// Pistol
#define PISTOL "rhs_weap_pya"
#define PISTOL_MAG "rhs_mag_9x19_17:3"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,CHEM_LIGHT
// Gear
#define BASE_TOOLS COMMON_TOOLS
#define LEADER_TOOLS COMMON_LEADER_TOOLS,KEY
#define BASE_LINKED COMMON_LINKED,"rhs_1PN138" // To be moved to tools if loadout bug is fixed
#define LEADER_LINKED COMMON_LEADER_LINKED
#define MSV_EXP "DemoCharge_Remote_Mag:2"

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,BASE_MINE,BASE_EXP,AT_MAG};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class potato_msv_rifleman { // rifleman
  uniform[] = {"rhsgref_uniform_ttsko_forest","rhsgref_uniform_vsr","rhsgref_uniform_ttsko_mountain"};
  vest[] = {"rhsgref_6b23_khaki_rifleman","rhsgref_6b23_ttsko_mountain_rifleman"};
  headgear[] = {"rhsgref_6b27m_ttsko_forest","rhsgref_6b27m_ttsko_mountain"};
  backpack[] = {"rhs_assault_umbts"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {BASE_TOOLS}; // rhs_1PN138 russian single tube NVG
  linkedItems[] = {BASE_LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class potato_msv_sr: potato_msv_rifleman {// FTL
  vest[] = {"rhsgref_6b23_khaki_nco","rhsgref_6b23_ttsko_mountain_nco"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class potato_msv_sl: potato_msv_sr { // SL
  headgear[] = {"rhs_tsh4"};
  backpack[] = {"B_FieldPack_khk"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {BASE_LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR,"rhsgref_6b27m_ttsko_forest"};
};
class potato_msv_plt: potato_msv_sl { // PLT
  headgear[] = {"rhsgref_fieldcap_ttsko_mountain","rhsgref_fieldcap_ttsko_forest","rhs_fieldcap_khk"};
  items[] += {RADIO_LR};
};
class potato_msv_aplt: potato_msv_plt {}; // PLT Assistant
class potato_msv_coy: potato_msv_plt { // COY
  headgear[] = {"rhs_tsh4"};
};
class potato_msv_acoy: potato_msv_plt{}; // COY Assistant
class potato_msv_pol: potato_msv_rifleman { // Political Officer
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
};
class potato_msv_g: potato_msv_rifleman {// Grenadier
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class potato_msv_ag: potato_msv_rifleman {// Assistant Grenadier
  magazines[] += {AT_MAG};
};
class potato_msv_sm: potato_msv_rifleman {// Medic
  vest[] = {"rhsgref_6b23_khaki_medic","rhsgref_6b23_ttsko_mountain_medic"};
  magazines[] = {RIFLE_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_marksman: potato_msv_rifleman {// Squad Marksman
  weapons[] = {MARKSMAN};
  magazines[] = {MARKSMAN_MAG,BASE_GRENADES};
  attachments[] = {MARKSMAN_ATTACHMENTS};
  opticChoices[] = {MARKSMAN_ALT_OPTICS};
};
class Fic_Spotter: potato_msv_rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class potato_msv_mmgg: potato_msv_AR {// MMG
  backpack[] = {"rhs_assault_umbts"};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
};
class potato_msv_mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {"rhs_assault_umbts"};
  backpackItems[] += {MMG_MAG};
};
class potato_msv_matg: potato_msv_rifleman {// MAT Gunner
  backpack[] = {"rhs_rpg_empty"};
  backpackItems[] = {"rhs_acc_1pn93_2"};
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
  SAM_GEAR("B_Carryall_oli", SAM_MAG2)
};
class potato_msv_msaml: potato_msv_msamag {// SAM Leader
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,RADIO_MR};
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
class potato_msv_pilot {// Pilot
  uniform[] = {"rhs_uniform_df15"};
  vest[] = {"V_TacVest_blk"};
  headgear[] = {"rhs_zsh7a_mike"};
  backpack[] = {"B_AssaultPack_rgr"};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {RADIO_LR};
  items[] = {BASE_MEDICAL,COMMON_TOOLS,LEADER_TOOLS,RADIO_MR,"rhsusf_ANPVS_15"}; // Theres no double tube NVGs for pilots in RHS yet
  linkedItems[] = {COMMON_LINKED,LEADER_LINKED,"rhsusf_ANPVS_15"};
  attachments[] = {"rhs_acc_dtk"};
};
class potato_msv_cc: potato_msv_pilot {};// Crew Chief
class fic_vehicle_crewman: potato_msv_rifleman {// Vehicle crew base
  headgear[] = {"rhs_tsh4","rhs_tsh4_bala","rhs_tsh4_ess","rhs_tsh4_ess_bala"};
  magazines[] = {RIFLE_MAG,CREW_GRENADES};
  backpackItems[] = {KEY};
  linkedItems[] += {BASE_LINKED,LEADER_LINKED};
  items[] += {BASE_MEDICAL};
};
class potato_msv_vicc: fic_vehicle_crewman {// Vehicle Crewman (non-repair)
  backpackItems[] += {RADIO_MR};
  linkedItems[] += {BINOS};
};
class potato_msv_vicl: potato_msv_vicc {// Vehicle Leader
  backpackItems[] += {RADIO_LR};
};
class potato_msv_vicd: fic_vehicle_crewman {// Vehicle Crewman (repair)
  backpackItems[] += {"toolkit"};
};
class potato_msv_eng: potato_msv_rifleman {// Demoman
  backpack[] = {"rhs_assault_umbts_engineer_empty"};
  items[] += {BASE_ENG,BASE_MEDICAL};
  backpackItems[] = {"Toolkit"};
  magazines[] += {MSV_EXP};
};
class potato_msv_engl: potato_msv_eng {// Demoman Leader
  backpackItems[] += {RADIO_MR,KEY};
  linkedItems[] += {LEADER_LINKED};
};
class potato_msv_sf_rifleman: potato_msv_rifleman {// Recon Rifleman
  uniform[] = {"rhs_uniform_gorka_r_g","rhs_uniform_gorka_r_y"};
  vest[] = {"rhs_6b23_6sh116_od","rhsgref_6b23_khaki_rifleman","rhsgref_6b23_khaki"};
  headgear[] = {"rhs_6b27m_green","rhs_6b27m_green_bala","rhs_6b27m_green_ess","rhs_6b27m_green_ess_bala","rhs_6b28_green","rhs_6b28_green_bala","rhs_6b28_green_ess","rhs_6b28_green_ess_bala","rhs_beanie_green","rhs_beret_milp","rhsusf_Bowman","rhsusf_bowman_cap"};
  backpack[] = {"rhs_sidor"};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  attachments[] = {RECON_RIFLE_ATTACHMENTS};
};
class potato_msv_sf_ftl: potato_msv_sf_rifleman {// Recon Senior Rifleman
  vest[] = {"rhs_6b23_6sh116_vog_od"};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,PISTOL_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
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
  attachments[] = {"CUP_muzzle_PBS4"};
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
  magazines[] = {RIFLE_MAG,PISTOL_MAG,MEDIC_GRENADES};
  backpackItems[] = {MEDIC_MEDICAL};
};
class potato_msv_sf_marksman: potato_msv_sf_rifleman {// Recon Marksman
  weapons[] = {MARKSMAN};
  magazines[] = {MARKSMAN_MAG,PISTOL_MAG};
  items[] += {"ACE_RangeCard"}; // SF Marksman gets a rangecard for high speed
  attachments[] = {MARKSMAN_ATTACHMENTS};
  opticChoices[] = {MARKSMAN_ALT_OPTICS};
};
class potato_msv_sf_aar: potato_msv_sf_rifleman {//Recon AAR
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class fallback: potato_msv_rifleman {}; // This means any faction member who doesn't match something will use this loadout
