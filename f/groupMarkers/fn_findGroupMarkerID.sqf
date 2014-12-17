private ["_value","_recursive","_ret","_type"];
// F3 - GroupMarkers
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
/*
	Find Group Marker id via group,unit or empty groups
	Paramaters
		0: GROUP OR OBJECT OR BOOLEAN
		1: look inside groups for object. (OPTIONAL)
	Returns
		Array of numbers.
*/
// ====================================================================================
_value = _this select 0;
_recursive = false;
if(count _this > 1) then {_recursive = _this select 1};
_ret = [];
_type = switch (typeName _value) do {
    case "BOOL": {0};
    case "GROUP": {1};
    case "OBJECT": {2};
    default {
    	-1;
    };
};
if(_type == -1) exitWith {};

// ====================================================================================

{
	_id = _forEachIndex;
	switch (_type) do {
	    case 0: {
	    	if( {!alive _x} count units _x == 0 ) then {_ret pushBack _id};
	    };
	    case 1: {
	    	if(_x == _value) then { _ret pushBack _id};
	    };
	    case 2: {
	    	if(typename _x == "OBJECT" && {_x == _value}) then { _ret pushBack _id};
	    	if(_recursive && !(_id in _ret)) then
	    	{
				{
					if(_x == _value) then { _ret pushBack _id};
				} forEach (units _x);
			};
	    };
	};
} forEach f_grpMkr_groups;

// return value
_ret