#include "common.hpp"
#define FUNC_NAME(VAR) PREFIX##_##SCRIPT##_##fnc_##VAR
#define SET_MISSION_FUNC(VAR, VAL) missionNamespace setVariable [#FUNC_NAME(VAR), VAL]
LOG("Starting script setup", __FILE__);
#if __has_include("inspect\fn_main.sqf")
#define SCRIPT inspect
private _func = compileScript["scripts\inspect\fn_main.sqf"];
SET_MISSION_FUNC(main, _func);
LOG("Function found", _func);
call BAD_inspect_fnc_main;
#endif
#if __has_include("vic_part_kill\fn_main.sqf")
#define SCRIPT vic_part_kill
private _func = compileScript["scripts\vic_part_kill\fn_main.sqf"];
SET_MISSION_FUNC(main, _func);
LOG("Function found", _func);
#endif
