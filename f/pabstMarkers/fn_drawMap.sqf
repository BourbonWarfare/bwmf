params ["_mapControl"];

//Map's height / Screen height:
_mapSize = ((ctrlPosition _mapControl) select 3) / (getResolution select 4);
_sizeFactor = (_mapSize + 1) / 2;

if ((player != player) || {!alive player}) exitWith {};

if ((diag_tickTime - F_Markers_lastUpdate) > 5) then {
  [] call F_Markers_fnc_setupDrawThings;
  F_Markers_lastUpdate = diag_tickTime;
};

{
  _data = _x getVariable ["f_var_drawSettings", []];
  if (_data isEqualTo []) then {
    diag_log format ["[BW] Bad f_var_drawSettings on %1", _x]
  } else {
    _data params ["_text", "_texture", "_color", "_size", "_pos", "_time"];
    _size params ["_sizeX", "_sizeY"];

    _sizeX = _sizeX * _sizeFactor;
    _sizeY = _sizeY * _sizeFactor;

    if(((time - _time) > F_Markers_delay) && {!isNull (_x)}) then {
      if(typeName _x == "GROUP") then {_pos = getpos leader _x};
      if(typeName _x == "OBJECT") then {_pos = getpos _x};
      _time = time;
      _data set [4,_pos];
      _data set [5,_time];
    };
    _textsize = 0.05;
    if(((ctrlMapScale _mapControl) * _mapSize) > 0.1) then {_textsize = 0};

    _mapControl drawIcon [_texture,_color,_pos,_sizeX,_sizeY,0,_text,1,(_textsize * _sizeFactor),'TahomaB',"right"];
  };
} foreach F_Markers_thingsToDraw;


#define TRI_MARKER "\A3\ui_f\data\map\markers\military\start_CA.paa"
if((ctrlMapScale _mapControl) < 0.5) then {
  {
    _color = switch (assignedTeam _x) do {
    case "RED": {[0.9,0,0,1]};
    case "YELLOW": {[0.9,0.9,0,1]};
    case "GREEN": {[0,0.8,0,1]};
    case "BLUE": {[0,0,1,1]};
        default {[1,1,1,1]}
    };
    _textsize = if (((ctrlMapScale _mapControl) * _mapSize) < 0.005) then {0.02} else {0};
    _pos = getPos _x;
    _dir = getDir _x;
    _text = if (alive _x) then {name _x} else {""};
    _mapControl drawIcon [TRI_MARKER, _color, _pos, (12 * _sizeFactor), (12 * _sizeFactor), _dir, _text, 1, (_textsize * _sizeFactor), 'TahomaB', "left"];

  } forEach (units (group player));
};
