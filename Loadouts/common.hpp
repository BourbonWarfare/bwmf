// common defines

// FUNCTIONS
#define LAUNCHER_GEAR(BACKPACK, MAG) backpack[] = {BACKPACK}; backpackItems[] = {MAG}; items[] += {BASE_MEDICAL};

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

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

// SIDE SPECIFIC GEAR

// WEST GEAR
#define WEST_LEADER_TOOLS LEADER_TOOLS,"ACE_key_west"
#define WEST_BASE_LINKED BASE_LINKED,"rhsusf_ANPVS_14"

// WEST GRENADES
#define WEST_BASE_FRAG "rhs_mag_m67:2"
#define WEST_BASE_GRENADES WEST_BASE_FRAG,BASE_SMOKES
#define WEST_LEADER_GRENADES WEST_BASE_FRAG,LEADER_SMOKES,"Chemlight_blue:2"

// IND GEAR
#define IND_LEADER_TOOLS LEADER_TOOLS,"ACE_key_indp"
#define IND_BASE_LINKED BASE_LINKED,"rhsusf_ANPVS_14"

// IND GRENADES
#define IND_BASE_FRAG "rhs_mag_rgd5:2"
#define IND_BASE_GRENADES IND_BASE_FRAG,BASE_SMOKES
#define IND_LEADER_GRENADES IND_BASE_FRAG,LEADER_SMOKES,"chemlight_green:2"

// EAST GEAR
#define EAST_LEADER_TOOLS "ACE_microDAGR","ACE_key_EAST","ACE_Flashlight_KSF1"
#define EAST_BASE_LINKED "ItemMap","ItemCompass","ItemWatch","nvgoggles"
#define EAST_LEADER_LINKED "ItemGPS"

// EAST GRENADES
#define EAST_BASE_FRAG "rhs_mag_rgd5:2"
#define EAST_BASE_GRENADES EAST_BASE_FRAG,BASE_SMOKES
#define EAST_LEADER_GRENADES EAST_BASE_FRAG,LEADER_SMOKES,"Chemlight_red:2"
