// Edit the following line to represent the name of your script
#define SCRIPT template
// !!! DO NOT EDIT THE LINE BELOW !!!
#include "..\common.hpp"

// SETTINGS
// Add your script settings here in the form of a #define
// for ref https://community.bistudio.com/wiki/PreProcessor_Commands
// #define SETTING_NAME value
#define SETTING_TIME_MAX 10
#define SETTING_TIME_MIN 1

// VARIABLES
// Declare your mission namespace variables here
// You variables will be automatically created with to following name formatting:
// bwmf_scriptname_variablename
SET_MISSION_VAR(time_max, SETTING_TIME_MAX);
SET_MISSION_VAR(time_min, SETTING_TIME_MIN);
