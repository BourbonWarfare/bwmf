// common defines

// FUNCTIONS
#define LAUNCHER_GEAR(BACKPACK, MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {BASE_MEDICAL,"ACE_RangeTable_82mm"};
#define BASE_GRENADES(FRAG) FRAG,BASE_SMOKES
#define LEADER_GRENADES(FRAG,CHEM) WEST_BASE_FRAG,LEADER_SMOKES,CHEM

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// KEYS
#define KEY_WEST "ACE_key_west"
#define KEY_EAST "ACE_key_east"
#define KEY_IND "ACE_key_indp"

// GEAR
#define BASE_MEDICAL "ACE_fieldDressing:3","ACE_morphine"
#define MEDIC_MEDICAL "ACE_fieldDressing:31","ACE_epinephrine:8","ACE_bloodIV:2","ACE_morphine:14"
#define BASE_TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
#define LEADER_TOOLS "ACE_microDAGR","ACE_Flashlight_KSF1"
#define BASE_LINKED "ItemMap","ItemCompass","ItemWatch"
#define LEADER_LINKED "ItemGPS"
#define BASE_SMOKES "SmokeShell:2"
#define LEADER_SMOKES "SmokeShell:4","SmokeShellGreen:2"
#define MEDIC_GRENADES "SmokeShell:6","SmokeShellGreen:2"
#define CREW_GRENADES "SmokeShell:4"
#define BASE_ENG "ACE_DefusalKit","ACE_Clacker","MineDetector"
#define BASE_EXP "DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"
#define BASE_MINE "ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"
#define BINOS "Binocular"
#define RANGE_FINDER "ACE_Vector"

// MAT Setups
// Carl Gustav MAT
#define CG_MAT "sam_grg_m86"
#define CG_MAT_MAG "sam_grg_heat:3","sam_grg_he:2"
#define CG_MAT_MAG2 "sam_grg_heat:2","sam_grg_he:2"
#define CG_MAT_OPTIC "sam_acco_m86"

// RPG7 MAT
#define RPG7_MAT "rhs_weap_rpg7"
#define RPG7_MAT_MAG "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_PG7VL_mag:1","rhs_rpg7_OG7V_mag:1"
#define RPG7_MAT_MAG2 "rhs_rpg7_PG7VR_mag:2","rhs_rpg7_OG7V_mag:1"
#define RPG7_MAT_OPTIC "rhs_acc_pgo7v"

// SMAW MAT
#define SMAW_MAT "rhs_weap_smaw_green"
#define SMAW_MAT_MAG "rhs_mag_smaw_SR:3","rhs_mag_smaw_HEAA:1","rhs_mag_smaw_HEDP:1"
#define SMAW_MAT_MAG2 "rhs_mag_smaw_HEAA:2"
#define SMAW_MAT_OPTIC "rhs_weap_optic_smaw_10"

// RPG32 MAT
#define RPG32_MAT "launch_RPG32_F"
#define RPG32_MAT_MAG "RPG32_F:3","RPG32_HE_F:2"
#define RPG32_MAT_MAG2 "RPG32_F:3","RPG32_HE_F:1"

// SAM Setups
// STINGER SAM
#define STINGER_SAM "rhs_weap_fim92"
#define STINGER_SAM_MAG "rhs_fim92_mag:3"
#define STINGER_SAM_MAG2 "rhs_fim92_mag:2"

// IGLA SAM
#define IGLA_SAM "rhs_weap_igla"
#define IGLA_SAM_MAG "rhs_mag_9k38_rocket:3"
#define IGLA_SAM_MAG2 "rhs_mag_9k38_rocket:2"

// SIDE SPECIFIC GEAR
// WEST GEAR
#define WEST_BASE_TOOLS BASE_TOOLS
#define WEST_LEADER_TOOLS LEADER_TOOLS,KEY_WEST
#define WEST_BASE_LINKED BASE_LINKED
#define WEST_LEADER_LINKED LEADER_LINKED

// WEST GRENADES
#define WEST_CHEM "Chemlight_blue:2"

// IND GEAR
#define IND_BASE_TOOLS BASE_TOOLS
#define IND_LEADER_TOOLS LEADER_TOOLS,KEY_IND
#define IND_BASE_LINKED BASE_LINKED
#define IND_LEADER_LINKED LEADER_LINKED

// IND GRENADES
#define IND_CHEM "chemlight_green:2"

// EAST GEAR
#define EAST_BASE_TOOLS BASE_TOOLS
#define EAST_LEADER_TOOLS LEADER_TOOLS,KEY_EAST
#define EAST_BASE_LINKED BASE_LINKED
#define EAST_LEADER_LINKED LEADER_LINKED

// EAST GRENADES
#define EAST_CHEM "Chemlight_red:2"
