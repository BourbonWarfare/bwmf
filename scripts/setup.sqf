#include "common.hpp"
#define FUNC PREFIX##_##SCRIPT##_##fnc_main
#define SET_MISSION_FUNC(VAL) missionNamespace setVariable [#FUNC, VAL]
LOG("Starting script setup", __FILE__);

// SCRIPT TEMPLATE
//
//
// #if __has_include("template\fn_main.sqf")
// #define SCRIPT template
// private _func = compileScript["scripts\template\fn_main.sqf"];
// SET_MISSION_FUNC(_func);
// LOG("Function found", FUNC);
// call FUNC;
// #endif

#if __has_include("inspect\fn_main.sqf")
#define SCRIPT inspect
private _func = compileScript["scripts\inspect\fn_main.sqf"];
SET_MISSION_FUNC(_func);
LOG("Function found", FUNC);
call FUNC;
#endif

#if __has_include("kilo_hq\fn_main.sqf")
#define SCRIPT kilo_hq
private _func = compileScript["scripts\kilo_hq\fn_main.sqf"];
SET_MISSION_FUNC(_func);
LOG("Function found", FUNC);
call FUNC;
#endif

#if __has_include("set_unit_face\fn_main.sqf")
#define SCRIPT set_unit_face
private _func = compileScript["scripts\set_unit_face\fn_main.sqf"];
SET_MISSION_FUNC(_func);
LOG("Function found", FUNC);
call FUNC;
#endif

#if __has_include("vic_part_kill\fn_main.sqf")
#define SCRIPT vic_part_kill
private _func = compileScript["scripts\vic_part_kill\fn_main.sqf"];
SET_MISSION_FUNC(_func);
LOG("Function found", FUNC);
call FUNC;
#endif
