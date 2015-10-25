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
	if(alive _x) then {
		_name = "";
		if(isPlayer _x) then {_name = name _x};
		if(leader _x == _x && {isPlayer _x} count units _x > 0) then {_name = format["%1 - %2",toString(toArray(groupID (group _x)) - [45]),_name]};
		if(vehicle _x != _x && crew (vehicle _x) select 0 == _x || vehicle _x == _x) then
		{
			_icon = (vehicle _x getVariable ["f_cam_icon",""]);
			if(_icon == "") then {_icon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");vehicle _x setVariable ["f_cam_icon",_icon]};
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

} forEach allUnits;

///f3_respawnPoint1
_mousePos = f3_respawnMousePos;
_i = 1;
while {true} do {
    _var = missionNamespace getVariable[format["f3_respawnPoint%1",_i],objNull];
    if (isNull _var) exitWith {};
    _pos = (position _var);
    
    if (_i isEqualTo _mousePos) then {
        _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa",[1,0,0,0.5],_pos,40,40,0];   
    };
    _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa",[1,1,0,1],_pos,32,32,0,format["Respawn point %1",_i],1];
    
    _i = _i + 1;
};

if (typeName _mousePos == "ARRAY") then {
    if (count _mousePos > 1) then {
        _text = "User selected respawn location";
        if (f3_respawnHalo) then {
          _text = "User selected respawn location (HALO)";
        };
        _fullmapWindow drawIcon ["\A3\ui_f\data\map\markers\military\start_CA.paa",[1,0,0,1],_mousePos,20,20,0,_text,1];
    };
};