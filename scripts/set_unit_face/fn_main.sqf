// !!! DO NOT EDIT THE LINE BELOW !!!
#include "settings.hpp"

LOG("Setting up set_unit_face EH", _scriptName);

[QVAR_NAME(set_unit_face), {
  params ["_unit", "_face", "_voice"];
  if !(hasInterface) then {
    _unit setSpeaker _voice;
  };
  _unit setFace _face;
}] call CBA_fnc_addEventHandler;

if (!isServer) exitWith {false};

{
  [_x, "init", {
    params ["_unit"];
    private _face = nil;
    if (isPlayer _unit && QVAR_NAME(include_players)) then {
      _face = selectRandom QVAR_NAME(player_face_list);
    } else {
      private _face = selectRandom QVAR_NAME(face_list);
    };
    private _voice = selectRandom QVAR_NAME(voice_list);
    LOG("Setting [ _unit, _face, _voice ]:", [_unit, _face, _voice]);
    [
      [{
          [QVAR_NAME(set_unit_face), _this] call CBA_fnc_globalEventJIP;
      }, [_unit, _face, _voice], 1] call CBA_fnc_waitAndExecute;
  }, nil, nil, true] call CBA_fnc_addClassEventHandler;
} forEach QVAR_NAME(target_classes);
