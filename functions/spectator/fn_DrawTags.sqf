// F3 - Spectator Script
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

// draw tags
if (!f_cam_toggleTags || f_cam_mapMode == 2) exitWith{};
{
  private _drawUnits = [];
  private _drawGroup = false;
  private _isPlayerGroup = false;
  private _groupLeader = leader _x;

  if (!isNull _groupLeader) then {
    private _distToCam = (call f_cam_GetCurrentCam) distance _groupLeader;
    if (isPlayer _groupLeader) then {_isPlayerGroup = true};
    if (_distToCam < 200) then {
      {_drawUnits pushBack _x; nil} count _x
    }
    else {
      _drawGroup = true;
    };
  };


  private _color = switch (side _x) do {
      case blufor: {f_cam_blufor_color};
      case opfor: {f_cam_opfor_color};
      case independent: {f_cam_indep_color};
      case civilian: {f_cam_civ_color};
      default {f_cam_empty_color};
  };

  if (_drawGroup) then {
    private _visPos = getPosATLVisual _groupLeader;
    if (surfaceIsWater _visPos) then  { _visPos = getPosASLVisual _groupLeader; };
    if (_isPlayerGroup) then {
      _color set [3,0.7];
    }
    else {
      _color set [3,0.4];
    };
    private _str = _x getVariable ["f_cam_nicename",""];
    if (_str == "") then {
      _str = (_x getVariable ["F3_GroupID", ""]);
      if (_str == "") then {
        _str = (toString(toArray(groupID (_x)) - [45]));
      };
      _x setVariable ["f_cam_nicename", _str];
    };
    drawIcon3D ["\A3\ui_f\data\map\markers\nato\b_inf.paa", _color, [_visPos select 0, _visPos select 1, (_visPos select 2) + 30], 1, 1, 0, _str, 2, 0.02];
  };

  {
    if (vehicle _x == _x && alive _x || vehicle _x != _x && (crew vehicle _x) select 0 == _x && alive _x) then {
        private _visPos = getPosATLVisual _x;
        if (surfaceIsWater _visPos) then  { _visPos = getPosASLVisual _x; };
        _color set [3,0.6];
        private _name = "";
        private _cachedIcon = _x getVariable ["f_cam_cached_icon", objNull];

        if (isNull _cachedIcon) {
          _cachedIcon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
          _x setVariable ["f_cam_cached_icon", _cachedIcon];
        };

        private _crewCount = count (crew (vehicle _x));
        private _directionToCamera = ([(call f_cam_GetCurrentCam), _x] call BIS_fnc_dirTo) - (getDir _x);

        if (isPlayer _x) then {
          _name = (name _x);
        }
        else {
          _name = _x getVariable ["f_cam_cached_name", objNull];
          if (isNull _name) {
            _name = format ["AI - %1", gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "displayName")];
            _x setVariable ["f_cam_cached_name", _name];
          };
        };

        if (_crewCount > 1) then {
          _name = format ["%1 (+%2)", _name, ((count (crew (vehicle _x))) - 1)];
        };

        drawIcon3D [_cachedIcon, _color, [_visPos select 0, _visPos select 1, (_visPos select 2) + 3], 0.7, 0.7, _directionToCamera, _name, 1, 0.04];
    };
    nil
  } count _drawUnits;

  nil
} count allGroups;
