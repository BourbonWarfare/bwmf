#include "settings.hpp"
if (!isServer) exitWith {false};
private _objects = [];
private _min_time = GET_MISSION_VAR(time_min, 5);
private _max_time = GET_MISSION_VAR(time_max, 10);
private _hold_action_time = random [
    _min_time,
    (_max_time - _min_time)/2 + _min_time,
   _max_time
  ];
private _bwmf_all_triggers = [];
missionNamespace setVariable ["bwmf_inspect_counter", 0];
private _trigger_condition = "
  private _unit = thisList select 0;
  private _is_not_complete = thisTrigger getVariable ['inspect_is_not_complete', true];
  private _inspect_from_vic = thisTrigger getVariable ['inspect_from_vic', true];
  private _vic = thisTrigger getVariable ['vic', player];
  private _hold_action_added = thisTrigger getVariable ['hold_action_added', false];
  private _side = thisTrigger getVariable ['side', 'civilian'];
  if(_inspect_from_vic) then {
    (
      (typeof vehicle _unit == _vic)
      && (side _unit == _side)
      && _is_not_complete
      && !_hold_action_added
    )
  } else {
    (
      side _unit == _side
      && _is_not_complete
      && !_hold_action_added
    )
  };
";
private _trigger_activation = "
  private _radius = thisTrigger getVariable ['radius', 10];
  private _inspect_from_vic = thisTrigger getVariable ['inspect_from_vic', true];
  private _hold_action_time = thisTrigger getVariable ['hold_action_time', 5];
  private _hold_action_added = thisTrigger getVariable ['hold_action_added', false];
  private _hold_action = [
    nil,
    'Inspect',
    '\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
    '\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
    'true',
    'true',
    {
      params ['_target', '_caller', '_actionId', '_arguments'];
      _caller distance (_arguments select 0) < _arguments select 1;
    },
    {
      params ['_target', '_caller', '_actionId', '_arguments', '_progress', '_maxProgress'];
      'Inspecting, hold still' remoteExec ['hint', _caller];
    },
    {
      params ['_target', '_caller', '_actionId', '_arguments'];
      private _bwmf_investiage_counter = missionNamespace getVariable ['bwmf_inspect_counter', 0];
      _bwmf_investiage_counter = _bwmf_investiage_counter + 1;
      missionNamespace setVariable ['bwmf_inspect_counter', _bwmf_investiage_counter];
      publicVariable 'bwmf_inspect_counter';
      private _pos = getPos _target;
      private _time = str CBA_MissionTime;
      private _marker = createMarkerLocal [_time,_pos,1,_caller];
      _marker setMarkerShapeLocal 'ICON';
      _marker setMarkerTypeLocal 'hd_dot';
      _marker setMarkerColorLocal 'colorCivilian';
      _marker setMarkerText format ['%1', _bwmf_investiage_counter];
      private _trigger = _arguments select 0;
      _trigger setVariable ['inspect_is_not_complete', false];
    },
    {
      params ['_target', '_caller', '_actionId', '_arguments'];
      'Inspection interupted' remoteExec ['hint',  _caller]
    },
    [thisTrigger, _radius],
    _hold_action_time,
    0,
    true,
    false,
    true
  ];
  private _unit = thisList select 0;
  private _id = -1;
  if(_inspect_from_vic && !_hold_action_added) then {
    private _vic_obj = vehicle _unit;
    _hold_action set [0, _vic_obj];
    _id =  _hold_action call BIS_fnc_holdActionAdd;
    _vic_obj setVariable ['action_id', _id];
    thisTrigger setVariable ['vic_object', _vic_obj];
  } else {
    private _object = thisTrigger getVariable 'target_object';
    _hold_action set [0, _object];
    _id = _hold_action call BIS_fnc_holdActionAdd;
    _unit setVariable ['action_id', _id];
  };
";
private _trigger_deactivation = "
  private _unit = thisList select 0;
  private _hold_action_added = thisTrigger getVariable ['hold_action_added', false];
  private _inspect_from_vic = thisTrigger getVariable ['inspect_from_vic', true];
  private _id = -1;
  if(_inspect_from_vic) then {
    private _vic_obj = thisTrigger getVariable 'vic_object';
    _id = _vic_obj getVariable 'action_id';
    [_vic_obj, _id] call BIS_fnc_holdActionRemove;
  } else {
    private _object = thisTrigger getVariable 'target_object';
    _id = _unit getVariable 'action_id';
    [_object, _id] call BIS_fnc_holdActionRemove;
  };
";
LOG("Inspect all objects in the play area?", INSPECT_AREA);
LOG("Inspect from vic?", INSPECT_FROM_VIC);
if (INSPECT_AREA) then {
  private _all_logics = allMissionObjects "Logic";
  private _all_areas = _all_logics select {typeOf _x == "ModuleCoverMap_F"};
  {
    private _pos = position _x;
    private _area = _x getVariable "objectarea";
    private _radius = selectMax [_area#0,_area#1];
      _objects append (_pos nearObjects [INSPECT_OBJECT, _radius]);
  } forEach _all_areas;
} else {
  _objects = [INSPECT_OBJECT];
};
{
  private _pos = getPos _x;
  private _pos_trigger = [
    _pos#0 + INSPECT_OBJECT_OFFSET#0,
    _pos#1 + INSPECT_OBJECT_OFFSET#1,
    _pos#2 + INSPECT_OBJECT_OFFSET#2
  ];
  LOG("trigger pos", _pos_trigger);
  private _trigger = createTrigger ["EmptyDetector", _pos_trigger, true];
  _trigger setVariable ["hold_action_added", false];
  _trigger setVariable ["target_object", _x];
  _trigger setVariable ["inspect_is_not_complete", true];
  _trigger setVariable ["inspect_from_vic", INSPECT_FROM_VIC];
  _trigger setVariable ["vic", INSPECT_VIC];
  _trigger setVariable ["vic_object", objNull];
  _trigger setVariable ["side", INSPECT_SIDE];
  _trigger setVariable ["radius", INSPECT_RADIUS];
  _trigger setVariable ["hold_action_time", _hold_action_time];
  _trigger setTriggerActivation ["ANYPLAYER", "PRESENT", true];
  _trigger setTriggerArea [
    TRIGGER_RADIUS,
    TRIGGER_RADIUS,
    getDir _x,
    false,
    TRIGGER_RADIUS
  ];
  _trigger setTriggerStatements
  [
    _trigger_condition,
    _trigger_activation,
    _trigger_deactivation
  ];
  _bwmf_all_triggers pushBack _trigger;
  LOG("Trigger Created", _trigger);
} forEach _objects;
missionNamespace setVariable ["bwmf_all_triggers", _bwmf_all_triggers];
