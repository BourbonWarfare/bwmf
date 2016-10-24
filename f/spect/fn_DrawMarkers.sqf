if (f_cam_mapMode == 0) exitWith {};
disableSerialization;
params ["_fullmapWindow"];
_camera = ([] call f_cam_GetCurrentCam);
_fullmapWindow drawIcon ["\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa", [0,0,0,1],getpos _camera ,20,20,getDir _camera,"",0];
{
  if (alive _x && {!((_x getVariable ["f_respawnUID", ""]) in f_serverRespawnableUnits)}) then {
    _name = "";
    _color = switch (side _x) do {
      case blufor: { f_cam_blufor_color };
      case opfor: { f_cam_opfor_color };
      case independent: { f_cam_indep_color };
      case civilian: { f_cam_civ_color };
      default { f_cam_empty_color };
    };
    if (isPlayer _x) then { _name = name _x };
    if (leader _x == _x && {isPlayer _x} count units _x > 0) then { _name = format["%1 - %2",toString(toArray(groupID (group _x)) - [45]),_name] };
    if (vehicle _x != _x && crew (vehicle _x) select 0 == _x || vehicle _x == _x) then {
      _icon = (vehicle _x getVariable ["f_cam_icon",""]);
      if(_icon == "") then {_icon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");vehicle _x setVariable ["f_cam_icon",_icon]};
      _fullmapWindow drawIcon [_icon,_color,getpos _x,19,19,getDir (vehicle _x),_name,1];
    };
  };
  nil
} count allunits;

f_cam_fired = f_cam_fired - [objNull];
if (f_cam_tracerOn) then {
  {
    if(!isNull  _x) then {
      _pos = getpos _x;
      _newPos = [(_pos select 0) + (3 * sin(getdir _x)), (_pos select 1) + (3 * cos(getdir _x)), _pos select 2];
      _fullmapWindow drawLine [_pos,_newPos,[1,0,0,1]];
    };
    nil
  } count f_cam_fired;
};

{
  _markerType = getMarkerType _x;
  _markerShape = markerShape _x;
  _markerPos = getMarkerPos _x;
  _markerSize = getMarkerSize _x;
  _markerDir = markerDir _x;
  _markerColorString = getMarkerColor _x;
  _markerColor = "";
  if (_markerColorString == "Default") then {
    _markerColor = (configfile >> "CfgMarkers" >> _markerType >> "color") call BIS_fnc_colorConfigToRGBA;
  }
  else {
    _markerColor = (configfile >> "CfgMarkerColors" >> getMarkerColor _x >> "color") call BIS_fnc_colorConfigToRGBA;
  };

  switch (_markerShape) do {
    case "RECTANGLE": {
      _markerTexture = getText (configfile >> "cfgMarkerBrushes" >> markerBrush _x >> "texture");
      _fullmapWindow drawRectangle [_markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture];
    };
    case "ELLIPSE": {
      _markerTexture = getText (configfile >> "cfgMarkerBrushes" >> markerBrush _x >> "texture");
      _fullmapWindow drawEllipse  [_markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture];
    };
    case "ICON": {
      if (_markerType != "Empty") then {
        _multiplier = 20;
        _markerText = markerText _x;
        _markerIcon = getText (configfile >> "CfgMarkers" >> _markerType >> "icon");
        _fullmapWindow drawIcon [_markerIcon, _markerColor, _markerPos, (_markerSize select 0) * _multiplier, (_markerSize select 1) * _multiplier, _markerDir, _markerText, 1];
      };
    };
  };
  nil;
} count allMapMarkers;
