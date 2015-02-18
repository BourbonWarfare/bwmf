if (F_marker_updateTicks > 100) then {
    [] call F_fnc_setupDrawThings;
    PABST_MARKERS_updateTicks = 0;
} else {
    PABST_MARKERS_updateTicks = PABST_MARKERS_updateTicks + 1;
};



_mapControl = _this select 0;
{
    _data = _x getVariable ["f_var_drawSettings", ["", "tex", [1,1,1,1], [24,24]]];
    _text = _data select 0;
    _texture = _data select 1;
    _color = _data select 2;
    _size = _data select 3;
    _pos = _data select 4;
    _time = _data select 5;


    if((time - _time) > f_grpMkr_delay && !isNull (_entity)) then {
        if(typeName _entity == "GROUP") then {_pos = getpos leader _entity};
        if(typeName _entity == "OBJECT") then {_pos = getpos _entity};
        _time = time;
        _data set [5,_pos];
        _data set [6,_time];
    };
    _sizeX = _size select 0;
    _sizeY = _size select 1;
    _textsize = 0.05;
    if((ctrlMapScale _mapControl) > 0.1) then {_textsize = 0};
    _mapControl drawIcon [_texture,_color,_pos,_sizeX,_sizeY,0,_text,1,_textsize,'TahomaB',"right"];
};
} foreach F_marker_thingsToDraw;