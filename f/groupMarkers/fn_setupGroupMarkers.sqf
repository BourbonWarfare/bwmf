// F3 - GroupMarkers
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
/*
	Setup the default groups for a faction
	Paramaters
		0: Side
		1: Bool : Reset ( resets the data )
	Returns
		Nothing
*/
_unitfaction = toLower ([_this, 0, "",[""]] call BIS_fnc_param);
_reset = [_this, 1, false,[false]] call BIS_fnc_param;

if(_reset) then
{
	f_grpMkr_groups = [];
	f_grpMkr_data = [];
	f_grpMkr_id = 0;
};

// ====================================================================================
// run for each team

// Automatic Markers requires the groupID function
{
	if(faction (leader _x) == _unitfaction && _x getVariable ["f_var_grpIdSet",false]) then
	{
		_name = ([groupID _x," "] call BIS_fnc_splitString) select 1;
		_style = [_name] call F_fnc_getGroupMarkerStyle;
		if((_style select 0) != "") then
		{
			[_x, _name,  _style select 0,_style select 1,_style select 2] call F_fnc_addGroupMarker;
		};
	};
} foreach allGroups;

// ====================================================================================
// Specialist Groups
_units = [];

switch (_unitfaction) do {
    case "blu_f": {
        _units = [
        ["UnitNATO_CO_M","COM"],
        ["UnitNATO_DC_M","DCM"],
        ["UnitNATO_ASL_M","AM"],
        ["UnitNATO_BSL_M","BM"],
        ["UnitNATO_CSL_M","CM"],
        ["UnitNATO_DSL_M","DM"],
        ["UnitNATO_ESL_M","EM"],
        ["UnitNATO_FSL_M","FM"]
        ];

    };
    case "opf_f": {
        _units = [
        ["UnitCSAT_CO_M","COM"],
        ["UnitCSAT_DC_M","DCM"],
        ["UnitCSAT_ASL_M","AM"],
        ["UnitCSAT_BSL_M","BM"],
        ["UnitCSAT_CSL_M","CM"]
        ];
    };
    case "ind_f": {
        _units = [
        ["UnitAAF_CO_M","COM"],
        ["UnitAAF_DC_M","DCM"],
        ["UnitAAF_ASL_M","AM"],
        ["UnitAAF_BSL_M","BM"],
        ["UnitAAF_CSL_M","CM"]
        ];
    };
    case "blu_g_f": {
        _units = [
        ["UnitFIA_CO_M","COM"],
        ["UnitFIA_DC_M","DCM"],
        ["UnitFIA_ASL_M","AM"],
        ["UnitFIA_BSL_M","BM"],
        ["UnitFIA_CSL_M","CM"]
        ];
    };
};

{
    _style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    [_x select 0, _x select 1,  _style select 0,_style select 1,_style select 2] call F_fnc_addGroupMarker;
} foreach _units;