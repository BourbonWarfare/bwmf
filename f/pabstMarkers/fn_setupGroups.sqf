_factionMap = [
["blu_f"],
["ind_f"],
["opf_f"],
["rhs_faction_msv", "rhs_faction_vvs"]
];

_drawNonPlayerGroups = true;

_units = [
["UnitNATO_CO_M","COM"],
["UnitNATO_DC_M","DCM"],
["UnitNATO_ASL_M","AM"],
["UnitNATO_BSL_M","BM"],
["UnitNATO_CSL_M","CM"],
["UnitNATO_DSL_M","DM"],
["UnitNATO_ESL_M","EM"],
["UnitNATO_FSL_M","FM"],

["UnitCSAT_CO_M","COM"],
["UnitCSAT_DC_M","DCM"],
["UnitCSAT_ASL_M","AM"],
["UnitCSAT_BSL_M","BM"],
["UnitCSAT_CSL_M","CM"],

["UnitAAF_CO_M","COM"],
["UnitAAF_DC_M","DCM"],
["UnitAAF_ASL_M","AM"],
["UnitAAF_BSL_M","BM"],
["UnitAAF_CSL_M","CM"],

["UnitMSV_ASL_VD","AV"],
["UnitMSV_B1_VD","BV"],
["UnitMSV_C1_VD","CV"],
["UnitMSV_D1_VD","DV"],
["UnitMSV_E1_VD","EV"],
["UnitMSV_F1_VD","FV"]
];

F_marker_thingsToDraw = [];

if ((player != player) || {!alive player}) exitWith {};


_playerFaction = toLower (faction player);
_showTheseFactions = [];
{
    if (_playerFaction in _x) exitWith {
        _showTheseFactions = _x;
    };
} forEach _factionMap;


{
    //Pull groupID from server
    if (!(_x getVariable ["f_var_localIDSet", false])) then {
        _groupIDName = _x getVariable ["F3_GroupID", "-1"];
        if (_groupIDName != "-1") then {
            _x setVariable ["f_var_localIDSet", true];
            _x setGroupId [_groupIDName];
        };

        _shortName = ([groupID _x," "] call BIS_fnc_splitString) select 1;
        _style = [_name] call F_fnc_getGroupMarkerStyle;

        if((_style select 0) != "") then {
            _x setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [], -1000]];
        };
    };

    _groupFaction = toLower (faction (leader _x));
    if (_groupFaction in _showTheseFactions) then {
        if (_drawNonPlayerGroups || {({isPlayer _x} count (units _x)) > 0}) then {
            F_marker_thingsToDraw pushBack _x;
        };
    };
} foreach allGroups;

{
    _unit = missionNameSpace getVariable [_x, objNull];
    if (!isNull _unit) then {
        _unitFaction = toLower (faction _unit);
        if (_unitFaction in _showTheseFactions) then {

            _settings = _unit getVariable ["f_var_drawSettings", []];
            if ((count _settings) == 0) then {
                _shortName = _x select 1;
                _style = [_shortName] call F_fnc_getGroupMarkerStyle;
                _unit setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [], -1000]];
            };
            f_var_drawSettings pushBack _unit;
        };
    };
} foreach _units;
