// common defines

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// KEYS
#define KEY_WEST "ACE_key_west"
#define KEY_EAST "ACE_key_east"
#define KEY_IND "ACE_key_indp"

// GEAR
#define BASE_MEDICAL "ACE_elasticBandage:4","ACE_packingBandage:2","ACE_tourniquet","ACE_morphine"
#define MEDIC_MEDICAL "ACE_elasticBandage:25","ACE_packingBandage:15","ACE_epinephrine:10","ACE_salineIV:2","ACE_salineIV_500:4","ACE_salineIV_250:8","ACE_morphine:16","ACE_tourniquet:6"
#define COMMON_TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item","ACE_earplugs"
#define COMMON_LEADER_TOOLS "ACE_microDAGR","ACE_Flashlight_KSF1"
#define COMMON_LINKED "ItemMap","ItemCompass","ItemWatch"
#define COMMON_LEADER_LINKED "ItemGPS"
#define BASE_SMOKES "SmokeShell:2"
#define LEADER_SMOKES "SmokeShell:4","SmokeShellGreen:2"
#define MEDIC_GRENADES "SmokeShell:6","SmokeShellGreen:2"
#define CREW_GRENADES "SmokeShell:4"
#define BASE_ENG "ACE_DefusalKit","ACE_Clacker","MineDetector"
#define BASE_EXP "DemoCharge_Remote_Mag:3","SatchelCharge_Remote_Mag:2"
#define BASE_MINE "ATMine_Range_Mag:2","APERSBoundingMine_Range_Mag:2","APERSMine_Range_Mag:2"
#define BINOS "Binocular"
#define RANGE_FINDER "ACE_Vector"

// FUNCTIONS
#define SAM_GEAR(BACKPACK,MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {"ACE_RangeTable_82mm"};
