// Edit the following line to represent the name of your script
#define SCRIPT set_unit_face
// !!! DO NOT EDIT THE LINE BELOW !!!
#include "..\common.hpp"

// SETTINGS
// Add your script settings here in the form of a #define
// for ref https://community.bistudio.com/wiki/PreProcessor_Commands
// #define SETTING_NAME value

#define FACE_LIST ["CamoHead_White_01_F"]
#define VOICE_LIST ["Male01FRE","Male02FRE","Male03FRE"]
#define TARGET_CLASSES ["potato_w_sl"]
#define INCLUDE_PLAYERS true
#define PLAYER_FACE_LIST ["CamoHead_White_01_F"]

// VARIABLES
// Declare your mission namespace variables here
// You variables will be automatically created with to following name formatting:
// bwmf_scriptname_variablename
SET_MISSION_VAR(face_list, FACE_LIST);
SET_MISSION_VAR(voice_list, VOICE_LIST);
SET_MISSION_VAR(target_classes, TARGET_CLASSES);
SET_MISSION_VAR(include_players, INCLUDE_PLAYERS);
SET_MISSION_VAR(player_face_list, PLAYER_FACE_LIST);
