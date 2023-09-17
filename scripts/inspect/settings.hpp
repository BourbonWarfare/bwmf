#define SCRIPT inspect
#include "..\common.hpp"

// SETTINGS
#define INSPECT_TIME_MAX 10                       		// Max inspect time in seconds
#define INSPECT_TIME_MIN 1                        		// Min inspect time in seconds
#define INSPECT_FROM_VIC FALSE                    		// Insepect from a vehicle?
#define INSPECT_VIC "B_Heli_Light_01_armed_F"     		// Vehicle to inspect from
#define INSPECT_OBJECT "Land_Laptop_unfolded_F"   		// Object to inspect
#define INSPECT_SIDE west                         		// Inspecting side
#define INSPECTOR_UNITS ["C_IDAP_Man_AidWorker_01_F"]	// Inspector class
#define INSPECT_OBJECT_OFFSET [0,0,0]             		// Inspect offset from center of object
#define INSPECT_AREA TRUE                         		// Multiple objects in given area?
#define INSPECT_RADIUS 10                         		// Required inspect radius
#define TRIGGER_RADIUS 30                         		// Radius at which inspect is available

// VARIABLES
SET_MISSION_VAR(time_max, INSPECT_TIME_MAX);
SET_MISSION_VAR(time_min, INSPECT_TIME_MIN);
SET_MISSION_VAR(vic, INSPECT_VIC);
