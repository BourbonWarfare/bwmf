#include "settings.hpp"

// VEHICLE INIT
//
// Only init the vic if selection enabled and on the server
if (ENABLE_VIC_INIT && isServer) then {
  [GET_MISSION_VAR(vic_class, VIC_CLASS), "init", {
    [
      _this select 0,
      GET_MISSION_VAR(vic_variant, VIC_VARIANT),
      GET_MISSION_VAR(vic_animation, VIC_ANIMATION),
      GET_MISSION_VAR(vic_mass, VIC_MASS)
    ] call BIS_fnc_initVehicle;
  }, nil, nil, true] call CBA_fnc_addClassEventHandler;
};

// HANDLE DAMAGE
//
// Only handle damage if selection enabled and on the server
if (ENABLE_HANDLE_VIC_DAMAGE && isServer) then {
  [GET_MISSION_VAR(damage_target_class, DAMAGE_TARGET_CLASS), "init", {
    [
      _this select 0,
      "dammaged",
      {
        _this params ["_unit", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];
        _thisArgs params [];
        // TODO: Expand this out to handle hashmap with part for key and value for damage value
        if (_hitPoint in GET_MISSION_VAR(damage_target_part, DAMAGE_TARGET_PART)) then {
          _unit setHitPointDamage [_hitPoint, GET_MISSION_VAR(damage_value, DAMAGE_VALUE)];
        };
      },
      []
    ] call CBA_fnc_addBISEventHandler;
  }, nil, nil, true] call CBA_fnc_addClassEventHandler;
};
