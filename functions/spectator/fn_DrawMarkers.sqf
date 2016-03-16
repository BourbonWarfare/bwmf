if (f_cam_mapMode == 0) exitWith {};
disableSerialization;
params ["_fullmapWindow"];
private _camera = ([] call f_cam_GetCurrentCam);
_fullmapWindow drawIcon ["\A3\ui_f\data\GUI\Rsc\RscDisplayMissionEditor\iconCamera_ca.paa", [0,0,0,1],getpos _camera ,20,20,getDir _camera,"",0];

{
  if (alive _x) then {
    private _name = "";
    private _color = switch (side _x) do {
      case blufor: { f_cam_blufor_color };
      case opfor: { f_cam_opfor_color };
      case independent: { f_cam_indep_color };
      case civilian: { f_cam_civ_color };
      default { f_cam_empty_color };
    };
    if (isPlayer _x) then { _name = name _x };
    if (leader _x == _x && {isPlayer _x} count units _x > 0) then { _name = format["%1 - %2",toString(toArray(groupID (group _x)) - [45]),_name] };
    if (vehicle _x != _x && crew (vehicle _x) select 0 == _x || vehicle _x == _x) then {
      private _icon = (vehicle _x getVariable ["f_cam_icon",""]);
      if (_icon == "") then {
        _icon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
        vehicle _x setVariable ["f_cam_icon", _icon];
      };
      _fullmapWindow drawIcon [_icon,_color,getpos _x,19,19,getDir (vehicle _x),_name,1];
    };
  };
  nil
} count allunits;

f_cam_fired = f_cam_fired - [objNull];
if (f_cam_tracerOn) then {
  {
    if(!isNull  _x) then {
      private _pos = getpos _x;
      private _newPos = [(_pos select 0) + (3 * sin(getdir _x)), (_pos select 1) + (3 * cos(getdir _x)), _pos select 2];
      _fullmapWindow drawLine [_pos,_newPos,[1,0,0,1]];
    };
    nil
  } count f_cam_fired;
};

{
  private _cachedMarker = _x getVariable ["markerCache", objNull];
  if (isNull _cachedMarker) then {
    private _markerType = getMarkerType _x;
    private _markerShape = markerShape _x;
    private _markerPos = getMarkerPos _x;
    private _markerSize = getMarkerSize _x;
    private _markerDir = markerDir _x;
    private _markerColorString = getMarkerColor _x;
    private _markerColor = "";
    if (_markerColorString == "Default") then {
      _markerColor = (configfile >> "CfgMarkers" >> _markerType >> "color") call BIS_fnc_colorConfigToRGBA;
    }
    else {
      _markerColor = (configfile >> "CfgMarkerColors" >> getMarkerColor _x >> "color") call BIS_fnc_colorConfigToRGBA;
    };

    switch (_markerShape) do {
      case "RECTANGLE": {
        private _markerTexture = getText (configfile >> "cfgMarkerBrushes" >> markerBrush _x >> "texture");
        _x setVariable ["markerCache", [_markerShape, _markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture]];
        _fullmapWindow drawRectangle [_markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture];
      };
      case "ELLIPSE": {
        private _markerTexture = getText (configfile >> "cfgMarkerBrushes" >> markerBrush _x >> "texture");
        _x setVariable ["markerCache", [_markerShape, _markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture]];
        _fullmapWindow drawEllipse [_markerPos, _markerSize select 0, _markerSize select 1, _markerDir, _markerColor, _markerTexture];
      };
      case "ICON": {
        if (_markerType != "Empty") then {
          private _multiplier = 20;
          private _markerText = markerText _x;
          private _markerIcon = getText (configfile >> "CfgMarkers" >> _markerType >> "icon");
          _x setVariable ["markerCache", [_markerShape, _markerType, _markerIcon, _markerColor, _markerPos, (_markerSize select 0) * _multiplier, (_markerSize select 1) * _multiplier, _markerDir, _markerText, 1]];
          _fullmapWindow drawIcon [_markerIcon, _markerColor, _markerPos, (_markerSize select 0) * _multiplier, (_markerSize select 1) * _multiplier, _markerDir, _markerText, 1];
        };
      };
    };
  } else {
    switch (_cachedMarker select 0) do {
      case "RECTANGLE": {
        _fullmapWindow drawRectangle [_cachedMarker select 1, _cachedMarker select 2, _cachedMarker select 3, _cachedMarker select 4, _cachedMarker select 5, _cachedMarker select 6];
      };
      case "ELLIPSE": {
        _fullmapWindow drawEllipse [_cachedMarker select 1, _cachedMarker select 2, _cachedMarker select 3, _cachedMarker select 4, _cachedMarker select 5, _cachedMarker select 6];
      };
      case "ICON": {
        if (_cachedMarker select 1 != "Empty") then {
          _fullmapWindow drawIcon [_cachedMarker select 2, _cachedMarker select 3, _cachedMarker select 4, _cachedMarker select 5, _cachedMarker select 6, _cachedMarker select 7, _cachedMarker select 8, _cachedMarker select 9];
        };
      };
    };
  };

  nil;
} count allMapMarkers;
