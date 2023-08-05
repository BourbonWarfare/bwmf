#define SCRIPT inspect
#include "..\common.hpp"
#define INSPECT_TIME_MAX 10
#define INSPECT_TIME_MIN 1
#define INSPECT_FROM_VIC FALSE
#define INSPECT_VIC "B_Heli_Light_01_armed_F"
#define INSPECT_OBJECT "Land_Laptop_unfolded_F"
#define INSPECT_SIDE west
#define INSPECT_UNIT "B_Soldier_F"
#define INSPECT_OBJECT_OFFSET [0,0,0]
#define INSPECT_AREA TRUE
#define INSPECT_RADIUS 10
#define TRIGGER_RADIUS 30
SET_MISSION_VAR(time_max, INSPECT_TIME_MAX);
SET_MISSION_VAR(time_min, INSPECT_TIME_MIN);
SET_MISSION_VAR(vic, INSPECT_VIC);
