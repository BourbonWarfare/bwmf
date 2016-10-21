// common defines

// FUNCTIONS
#define LAUNCHER_GEAR(BACKPACK, MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {"ACE_RangeTable_82mm"};

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// KEYS
#define KEY_WEST "ACE_key_west"
#define KEY_EAST "ACE_key_east"
#define KEY_IND "ACE_key_indp"

// GEAR
#define BASE_MEDICAL "ACE_elasticBandage:3","ACE_packingBandage:3","ACE_morphine","ACE_tourniquet:2"
#define MEDIC_MEDICAL "ACE_fieldDressing:15","ACE_elasticBandage:20","ACE_packingBandage:20","ACE_atropine:6","ACE_morphine:8","ACE_epinephrine:8","ACE_salineIV_500:4","ACE_personalAidKit","ACE_tourniquet:5"
#define BASE_TOOLS RADIO_SR,"ACE_MapTools"
#define LEADER_TOOLS "ACE_Flashlight_KSF1"
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

// SIDE SPECIFIC GEAR

// WEST GEAR
#define WEST_BASE_TOOLS BASE_TOOLS
#define WEST_LEADER_TOOLS LEADER_TOOLS,KEY_WEST
#define WEST_BASE_LINKED BASE_LINKED
#define WEST_LEADER_LINKED LEADER_LINKED

// WEST GRENADES
#define WEST_BASE_FRAG "rhs_mag_m67:2"
#define WEST_BASE_GRENADES WEST_BASE_FRAG,BASE_SMOKES
#define WEST_LEADER_GRENADES WEST_BASE_FRAG,LEADER_SMOKES,"Chemlight_blue:2"

// WEST MAT
#define WEST_MAT "rhs_weap_smaw_green"
#define WEST_MAT_MAG "rhs_mag_smaw_HEAA:2"
#define WEST_MAT_MAG2 "rhs_mag_smaw_HEAA:2"
#define WEST_MAT_OPTIC "rhs_weap_optic_smaw"

// WEST SAM
#define WEST_SAM "rhs_weap_fim92"
#define WEST_SAM_MAG "rhs_fim92_mag:3"
#define WEST_SAM_MAG2 "rhs_fim92_mag:2"

// IND GEAR
#define IND_BASE_TOOLS BASE_TOOLS
#define IND_LEADER_TOOLS LEADER_TOOLS,KEY_IND
#define IND_BASE_LINKED BASE_LINKED
#define IND_LEADER_LINKED LEADER_LINKED

// IND GRENADES
#define IND_BASE_FRAG "rhs_mag_rgd5:2"
#define IND_BASE_GRENADES IND_BASE_FRAG,BASE_SMOKES
#define IND_LEADER_GRENADES IND_BASE_FRAG,LEADER_SMOKES,"chemlight_green:2"

// EAST GEAR
#define EAST_BASE_TOOLS BASE_TOOLS
#define EAST_LEADER_TOOLS LEADER_TOOLS,KEY_EAST
#define EAST_BASE_LINKED BASE_LINKED
#define EAST_LEADER_LINKED LEADER_LINKED

// EAST GRENADES
#define EAST_BASE_FRAG "rhs_mag_rgd5:2"
#define EAST_BASE_GRENADES EAST_BASE_FRAG,BASE_SMOKES
#define EAST_LEADER_GRENADES EAST_BASE_FRAG,LEADER_SMOKES,"Chemlight_red:2"

// EAST MAT
#define EAST_MAT "rhs_weap_rpg7"
#define EAST_MAT_MAG "rhs_rpg7_PG7VR_mag:4"
#define EAST_MAT_MAG2 "rhs_rpg7_PG7VR_mag:3"
#define EAST_MAT_OPTIC "rhs_acc_pgo7v"

// EAST SAM
#define EAST_SAM "rhs_weap_igla"
#define EAST_SAM_MAG "rhs_mag_9k38_rocket:3"
#define EAST_SAM_MAG2 "rhs_mag_9k38_rocket:2"
