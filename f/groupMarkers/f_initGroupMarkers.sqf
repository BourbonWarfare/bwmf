
// ====================================================================================

// MAKE SURE THE PLAYER INITIALIZES PROPERLY

if (!isDedicated && (isNull player)) then
{
    waitUntil {sleep 0.1; !isNull player};
};

// ====================================================================================

// DETECT PLAYER FACTION
// The following code detects what faction the player's slot belongs to, and stores
// it in the private variable _unitfaction
_unitfaction = "";
if(count _this == 0) then
{
	_unitfaction = toLower (faction player);

	// If the unitfaction is different from the 	group leader's faction, the latters faction is used
	if (_unitfaction != toLower (faction (leader group player))) then {_unitfaction = toLower (faction (leader group player))};
}
else
{
	_unitfaction = (_this select 0);
};

// ====================================================================================
// init

f_grpMkr_groups = [];
f_grpMkr_data = [];
f_grpMkr_id = 0;
// ====================================================================================
// add the handlers to catch the map.
[] spawn {
	if(isServer) then
	{
		waitUntil {!isNull (findDisplay 52)};
		 ((findDisplay 52) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];

	}
	else
	{
		waitUntil {!isNull (findDisplay 53)};
		 ((findDisplay 53) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];
	};
};
[] spawn {
	waitUntil {!isNull (findDisplay 12)};
	((findDisplay 12) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];
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
			[_x, _name,  _style select 0,_style select 1] call F_fnc_addGroupMarker;
		};
	};
} foreach allGroups;

// ====================================================================================
// Specialist Groups
switch (_unitfaction) do {
    case "blu_f": {
    	_units = [
    	["UnitNATO_COY_M","COM"],
    	["UnitNATO_1PLT_M","1PLTM"],
           ["UnitNATO_2PLT_M","2PLTM"],
    	["UnitNATO_ASL_M","AM"],
    	["UnitNATO_BSL_M","BM"],
    	["UnitNATO_CSL_M","CM"],
           ["UnitNATO_DSL_M","DM"],
           ["UnitNATO_ESL_M","EM"],
           ["UnitNATO_FSL_M","FM"]
    	];
    	{
    		_style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    		[_x select 0, _x select 1,  _style select 0,_style select 1] call F_fnc_addGroupMarker;
    	} foreach _units;
    };
    case "opf_f": {
    	_units = [
    	["UnitCSAT_CO_M","COM"],
    	["UnitCSAT_DC_M","DCM"],
    	["UnitCSAT_ASL_M","AM"],
    	["UnitCSAT_BSL_M","BM"],
    	["UnitCSAT_CSL_M","CM"]
    	];
    	{
    		_style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    		[_x select 0, _x select 1,  _style select 0,_style select 1] call F_fnc_addGroupMarker;
    	} foreach _units;
    };
    case "ind_f": {
    	_units = [
    	["UnitAAF_CO_M","COM"],
    	["UnitAAF_DC_M","DCM"],
    	["UnitAAF_ASL_M","AM"],
    	["UnitAAF_BSL_M","BM"],
    	["UnitAAF_CSL_M","CM"]
    	];
    	{
    		_style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    		[_x select 0, _x select 1,  _style select 0,_style select 1] call F_fnc_addGroupMarker;
    	} foreach _units;
    };
    case "blu_g_f": {
    	_units = [
    	["UnitFIA_CO_M","COM"],
    	["UnitFIA_DC_M","DCM"],
    	["UnitFIA_ASL_M","AM"],
    	["UnitFIA_BSL_M","BM"],
    	["UnitFIA_CSL_M","CM"]
    	];
    	{
    		_style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    		[_x select 0, _x select 1,  _style select 0,_style select 1] call F_fnc_addGroupMarker;
    	} foreach _units;
    };
};