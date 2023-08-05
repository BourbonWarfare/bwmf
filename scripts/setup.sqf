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
// SET_MISSION_FUNC(main, _func);
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

#if __has_include("vic_part_kill\fn_main.sqf")
#define SCRIPT vic_part_kill
private _func = compileScript["scripts\vic_part_kill\fn_main.sqf"];
SET_MISSION_FUNC(_func);
LOG("Function found", FUNC);
#endif
