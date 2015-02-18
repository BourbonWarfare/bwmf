#include "defines_unitsAndGroups.hpp"

_factionMap = [
["blu_f"],
["ind_f"],
["opf_f"],
["rhs_faction_msv", "rhs_faction_vvs"]
];

_drawNonPlayerGroups = true;

F_Markers_thingsToDraw = [];

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
            _x setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [0,0,0], -1000]];
        };
    };

    _groupFaction = toLower (faction (leader _x));
    if (_groupFaction in _showTheseFactions) then {
        if (_drawNonPlayerGroups || {({isPlayer _x} count (units _x)) > 0}) then {
            F_Markers_thingsToDraw pushBack _x;
        };
    };
} foreach allGroups;


{
    _unit = missionNameSpace getVariable [(_x select 0), objNull];
    if (!isNull _unit) then {
        _unitFaction = toLower (faction _unit);
        if (_unitFaction in _showTheseFactions) then {

            _settings = _unit getVariable ["f_var_drawSettings", []];
            if ((count _settings) == 0) then {
                _shortName = (_x select 1);
                _style = [_shortName] call F_fnc_getGroupMarkerStyle;
                _unit setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [], -1000]];
            };
            f_var_drawSettings pushBack _unit;
        };
    };
} foreach UNIT_MARKERS;
