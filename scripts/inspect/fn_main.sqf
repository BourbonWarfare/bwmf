#include "settings.hpp"

["bwmf_inspect_trigger_activation", {
    params ["_thisList", "_thisTrigger"];
    private _radius = _thisTrigger getVariable ['radius', 10];
    private _inspect_from_vic = _thisTrigger getVariable ['inspect_from_vic', true];
    private _hold_action_time = _thisTrigger getVariable ['hold_action_time', 5];
    private _hold_action_added = _thisTrigger getVariable ['hold_action_added', false];
    private _inspector_units = _thisTrigger getVariable ['inspector_units', ['CAManBase']];
    private _inspector_side = _thisTrigger getVariable ['inspector_side', [west, civilian]];
    private _vic_object = _thisTrigger getVariable ['vic_object'];
    private _hold_action = [
        nil,
        'Inspect',
        '\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa',
        '\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa',
        'true',
        '
            _caller distance (_arguments select 0) < (_arguments select 1)
            && (typeOf _caller) in (_arguments select 2)
        ',
        {},
        {
            params ['_target', '_caller', '_actionId', '_arguments', '_progress', '_maxProgress'];
            'Inspecting, hold still' remoteExec ['hint', _caller];
        },
        {
            params ['_target', '_caller', '_actionId', '_arguments'];
            private _bwmf_investiage_counter = missionNamespace getVariable ['bwmf_inspect_counter', 0];
            _bwmf_investiage_counter = _bwmf_investiage_counter + 1;
            missionNamespace setVariable ['bwmf_inspect_counter', _bwmf_investiage_counter, true];
            publicVariable 'bwmf_inspect_counter';
            private _pos = getPos _target;
            private _time = str CBA_MissionTime;
            private _marker = createMarkerLocal [_time,_pos,1,_caller];
            _marker setMarkerShapeLocal 'ICON';
            _marker setMarkerTypeLocal 'hd_dot';
            _marker setMarkerColorLocal 'colorCivilian';
            _marker setMarkerText format ['%1', _bwmf_investiage_counter];
            private _trigger = _arguments select 0;
            _trigger setVariable ['inspect_is_not_complete', false, true];
            'Successfully inspected' remoteExec ['hint',  _caller]
        },
        {
            params ['_target', '_caller', '_actionId', '_arguments'];
            if ((typeOf _caller) in (_arguments select 2)) then {
                'Inspection interupted \n You might need to get closer to the target.' remoteExec ['hint',  _caller]
            } else {
                'You are not authorized to inspect' remoteExec ['hint',  _caller]
            };
        },
        [_thisTrigger, _radius, _inspector_units],
        _hold_action_time,
        0,
        true,
        false,
        true
    ];
    private _unit = _thisList select 0;
    if (
            !(typeOf _unit in _inspector_units) 
            || side _unit != _inspector_side
            || typeOf Vehicle _unit != typeOf _vic_object
        ) exitWith {false};

    _thisTrigger setVariable ['activating_unit', _unit, true];
    private _id = -1;
    if(_inspect_from_vic && !_hold_action_added) then {
        private _vic_obj = vehicle _unit;
        _hold_action set [0, _vic_obj];
        _id =  _hold_action call BIS_fnc_holdActionAdd;
        _vic_obj setVariable ['action_id', _id];
        _thisTrigger setVariable ['vic_object', _vic_obj];
    } else {
        private _object = _thisTrigger getVariable 'target_object';
        _hold_action set [0, _object];
        _id = [_hold_action] remoteExecCall ['BIS_fnc_holdActionAdd', _unit];
        _unit setVariable ['action_id', _id];
    };
}] call CBA_fnc_addEventHandler;

["bwmf_inspect_trigger_deactivation", {
    params ["_thisList", "_thisTrigger"];
    private _unit = _thisList select 0;
    private _hold_action_added = _thisTrigger getVariable ['hold_action_added', false];
    private _inspect_from_vic = _thisTrigger getVariable ['inspect_from_vic', true];
    private _id = -1;
    if(_inspect_from_vic) then {
        private _vic_obj = _thisTrigger getVariable 'vic_object';
        _id = _vic_obj getVariable 'action_id';
        [_vic_obj, _id] call BIS_fnc_holdActionRemove;
    } else {
        private _object = _thisTrigger getVariable 'target_object';
        _id = _unit getVariable 'action_id';
        [_object, _id] call BIS_fnc_holdActionRemove;
    };
}] call CBA_fnc_addEventHandler;

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
missionNamespace setVariable ["bwmf_inspect_counter", 0, true];
private _trigger_condition = "
  private _unit = thisList select 0;
  private _is_not_complete = thisTrigger getVariable ['inspect_is_not_complete', true];
  private _inspect_from_vic = thisTrigger getVariable ['inspect_from_vic', true];
  private _vic = thisTrigger getVariable ['vic', player];
  private _hold_action_added = thisTrigger getVariable ['hold_action_added', false];
  private _inspector_side = thisTrigger getVariable ['inspector_side', [west, civilian]];
  if(_inspect_from_vic) then {
    (
      (typeof vehicle _unit == _vic)
      && (side _unit in _inspector_side)
      && _is_not_complete
      && !_hold_action_added
    )
  } else {
    (
      side _unit in _inspector_side
      && _is_not_complete
      && !_hold_action_added
    )
  };
";
private _trigger_activation = "['bwmf_inspect_trigger_activation', [thisList, thisTrigger]] call CBA_fnc_globalEventJIP";
private _trigger_deactivation = "['bwmf_inspect_trigger_deactivation', [thisList, thisTrigger]] call CBA_fnc_globalEventJIP";
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
  LOG("init trigger pos", _pos);
  private _trigger = createTrigger ["EmptyDetector", _pos, true];
  _trigger setPos _pos_trigger;
  LOG("final trigger pos", getPos _trigger);
  _trigger setVariable ["hold_action_added", false, true];
  _trigger setVariable ["target_object", _x, true];
  _trigger setVariable ["inspect_is_not_complete", true, true];
  _trigger setVariable ["inspect_from_vic", INSPECT_FROM_VIC, true];
  _trigger setVariable ["vic", INSPECT_VIC, true];
  _trigger setVariable ["vic_object", objNull, true];
  _trigger setVariable ["inspector_side", INSPECT_SIDE, true];
  _trigger setVariable ["radius", INSPECT_RADIUS, true];
  _trigger setVariable ["hold_action_time", _hold_action_time, true];
  _trigger setVariable ["inspector_units", INSPECTOR_UNITS, true];
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
missionNamespace setVariable ["bwmf_all_triggers", _bwmf_all_triggers, true];
