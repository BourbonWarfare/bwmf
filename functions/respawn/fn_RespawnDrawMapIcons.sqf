disableSerialization;
_fullmapWindow = _this select 0;

if (isNil "f_cam_blufor_color") then {
  f_cam_blufor_color = [blufor] call bis_fnc_sideColor;
  f_cam_opfor_color = [opfor] call bis_fnc_sideColor;
  f_cam_indep_color = [independent] call bis_fnc_sideColor;
  f_cam_civ_color = [civilian] call bis_fnc_sideColor;
  f_cam_empty_color = [sideUnknown] call bis_fnc_sideColor;
};

{
  if (alive _x) then {
    _name = "";
    if (isPlayer _x) then { _name = name _x };
    if (leader _x == _x && { isPlayer _x } count units _x > 0) then { _name = format["%1 - %2",toString(toArray(groupID (group _x)) - [45]),_name] };
    if (vehicle _x != _x && crew (vehicle _x) select 0 == _x || vehicle _x == _x) then {
      _icon = (vehicle _x getVariable ["f_cam_icon", ""]);
      if(_icon == "") then {
        _icon = getText (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
        vehicle _x setVariable ["f_cam_icon", _icon];
      };
      _color = switch (side _x) do {
        case blufor: {f_cam_blufor_color};
        case opfor: {f_cam_opfor_color};
        case independent: {f_cam_indep_color};
        case civilian: {f_cam_civ_color};
        default {f_cam_empty_color};
      };
      _fullmapWindow drawIcon [_icon,_color,getpos _x,19,19,getDir (vehicle _x),_name,1];
    };
  };
  true;
} count allUnits;

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
  true;
} count allMapMarkers;

///f3_respawnPoint1
_mousePos = f3_respawnMousePos;
_i = 1;
_pos = markerPos (format["f3_respawnPoint%1", _i]);
while {!(_pos isEqualTo [0,0,0])} do {
  if (_i isEqualTo _mousePos) then {
    _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa", [1,0,0,0.5], _pos, 40, 40, 0];
  };
  _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa", [1,1,0,1], _pos, 32, 32, 0, format["Respawn point %1", _i], 1];

  _i = _i + 1;
  _pos = markerPos (format["f3_respawnPoint%1", _i]);
};

if (typeName _mousePos == "ARRAY") then {
  if (count _mousePos > 1) then {
    _text = "User selected respawn location";
    _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa", [1,0,0,1], _mousePos, 20, 20, 0, _text, 1];
  };
};
