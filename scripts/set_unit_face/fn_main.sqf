// !!! DO NOT EDIT THE LINE BELOW !!!
#include "settings.hpp"

LOG("Setting up set_unit_face EH", "");

[QVAR_NAME(set_unit_face), {
  params ["_unit", "_face", "_voice"];
  if !(hasInterface) then {
    _unit setSpeaker _voice;
  };
  _unit  setFace _face;
}] call CBA_fnc_addEventHandler;

if (!isServer) exitWith {false};

{
  [_x, "init", {
    params ["_unit"];
    private _face = nil;
    if (isPlayer _unit && GET_MISSION_VAR(include_players, false)) then {
      _face = selectRandom (GET_MISSION_VAR(player_face_list, PLAYER_FACE_LIST));
    } else {
      _face = selectRandom (GET_MISSION_VAR(face_list, FACE_LIST));
    };
    private _voice = selectRandom (GET_MISSION_VAR(voice_list, VOICE_LIST));
    [{
        [QVAR_NAME(set_unit_face), _this] call CBA_fnc_globalEventJIP;
    }, [_unit, _face, _voice], 1] call CBA_fnc_waitAndExecute;
  }, nil, nil, true] call CBA_fnc_addClassEventHandler;
} forEach (GET_MISSION_VAR(target_classes, TARGET_CLASSES));
