// Edit the following line to represent the name of your script
#define SCRIPT vic_init
// !!! DO NOT EDIT THE LINE BELOW !!!
#include "..\common.hpp"

// SETTINGS
//
// Setup init of vic of given class
// Enable or disable vic init script
#define ENABLE_VIC_INIT true
// Seetings for helicopter apperance
// See https://community.bistudio.com/wiki/BIS_fnc_initVehicle
#define VIC_CLASS "I_C_Heli_Light_01_civil_F"
#define VIC_VARIANT ["BlueLine",1]
#define VIC_ANIMATION ["AddTread",0,"AddTread_Short",1,"AddDoors",0]
#define VIC_MASS false
// VARIABLES
SET_MISSION_VAR(vic_class, VIC_CLASS);
SET_MISSION_VAR(vic_variant, VIC_VARIANT);
SET_MISSION_VAR(vic_animation, VIC_ANIMATION);
SET_MISSION_VAR(vic_mass, VIC_MASS);

// SETTINGS
//
// Setup handle damage to vic part
// Enable or disable vic damage script
#define ENABLE_HANDLE_VIC_DAMAGE true
#define DAMAGE_TARGET_CLASS "I_C_Heli_Light_01_civil_F"
#define DAMAGE_SHOOTER_CLASS ["potato_e_sniper"]
#define DAMAGE_TARGET_DETECT_LOCATIONS ["hitvrotor", "hitvstabilizer1"]
#define DAMAGE_TARGET_PART "HitVRotor"
#define DAMAGE_VALUE 0.75
#define DAMAGE_DAMAGE_DEPENDANT_PARTS false
// VARIABLES
SET_MISSION_VAR(damage_target_class, DAMAGE_TARGET_CLASS);
SET_MISSION_VAR(damage_shooter_class, DAMAGE_SHOOTER_CLASS);
SET_MISSION_VAR(damage_target_detect_locations, DAMAGE_TARGET_DETECT_LOCATIONS);
SET_MISSION_VAR(damage_target_part, DAMAGE_TARGET_PART);
SET_MISSION_VAR(damage_value, DAMAGE_VALUE);
SET_MISSION_VAR(damage_damage_dependant_parts, DAMAGE_DAMAGE_DEPENDANT_PARTS);
