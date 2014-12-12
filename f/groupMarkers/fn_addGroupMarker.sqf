_entity = _this select 0;
_text = _this select 1;
_texture = _this select 2;
_color = _this select 3;
_time = 0;
if(typeName _entity == "STRING") then
{
	_entity = call compile format ["%1",_entity];
};
if(isNil "_entity") exitWith {};
_myId = f_grpMkr_id;

_pos = [0,0,0];
if(typeName _entity == "GROUP") then {_pos = getpos leader _entity};
if(typeName _entity == "OBJECT") then {_pos = getpos _entity};
_data = [_entity,_text,_texture,_color,_pos,_time];
_entity setVariable ["f_grpMkr_id",_myId];

f_grpMkr_groups set [_myId,_entity];
f_grpMkr_data set [_myId,_data];
f_grpMkr_id = f_grpMkr_id +1;
