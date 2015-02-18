_mapControl = _this select 0;

if ((diag_tickTime - F_Markers_lastUpdate) > 5) then {
    [] call F_Markers_fnc_setupDrawThings;
    F_Markers_lastUpdate = diag_tickTime;
};

{
    _data = _x getVariable ["f_var_drawSettings", []];
    if (_data isEqualTo []) then {
        diag_log format ["Bad f_var_drawSettings on %1", _x]
    } else {
        _text = _data select 0;
        _texture = _data select 1;
        _color = _data select 2;
        _size = _data select 3;
        _pos = _data select 4;
        _time = _data select 5;

        if(((time - _time) > F_Markers_delay) && {!isNull (_x)}) then {
            if(typeName _x == "GROUP") then {_pos = getpos leader _x};
            if(typeName _x == "OBJECT") then {_pos = getpos _x};
            _time = time;
            _data set [4,_pos];
            _data set [5,_time];
        };
        _sizeX = _size select 0;
        _sizeY = _size select 1;
        _textsize = 0.05;
        if((ctrlMapScale _mapControl) > 0.1) then {_textsize = 0};

        _mapControl drawIcon [_texture,_color,_pos,_sizeX,_sizeY,0,_text,1,_textsize,'TahomaB',"right"];
    };
} foreach F_Markers_thingsToDraw;
