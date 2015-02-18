#include "defines_unitsAndGroups.hpp"


F_Markers_thingsToDraw = [];

_playerFaction = toLower (faction player);
_showTheseFactions = [];
{
    if (_playerFaction in _x) exitWith {
        _showTheseFactions = _x;
    };
} forEach F_Markers_factionMap;


{
    //Pull groupID from server
    if (!(_x getVariable ["f_var_localIDSet", false])) then {
        _groupIDName = _x getVariable ["F3_GroupID", "-1"];
        if (_groupIDName != "-1") then {
            _x setVariable ["f_var_localIDSet", true];
            _x setGroupId [_groupIDName];

            _splitName = [_groupIDName," "] call BIS_fnc_splitString;
            if ((count _splitName) >= 2) then {
                _shortName = _splitName select 1;
                _style = [_shortName] call F_Markers_fnc_getGroupMarkerStyle;
                if((_style select 0) != "") then {
                    _x setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [0,0,0], -1000]];
                };
            };
        };
    };

    _groupFaction = toLower (faction (leader _x));
    if (_groupFaction in _showTheseFactions) then {
        if (F_Markers_drawNonPlayerGroups || {({isPlayer _x} count (units _x)) > 0}) then {
            F_Markers_thingsToDraw pushBack _x;
            //If it doesn't have settings, just give a default:
            if ((_x getVariable ["f_var_drawSettings", []]) isEqualTo []) then {
                _x setVariable ["f_var_drawSettings", [(groupID _x), "\A3\ui_f\data\map\markers\nato\b_unknown.paa", [1,1,1,1], [20,20], [0,0,0], -1000]];
            };
        };
    };
} foreach allGroups;


{
    _unit = missionNameSpace getVariable [(_x select 0), objNull];
    if (!isNull _unit) then {
        _unitFaction = toLower (faction _unit);
        if (_unitFaction in _showTheseFactions) then {
            if ((_unit getVariable ["f_var_drawSettings", []]) isEqualTo []) then {
                _shortName = (_x select 1);
                _style = [_shortName] call F_Markers_fnc_getGroupMarkerStyle;
                _unit setVariable ["f_var_drawSettings", [_shortName, _style select 0, _style select 1, _style select 2, [], -1000]];
            };
            F_Markers_thingsToDraw pushBack _unit;
        };
    };
} foreach UNIT_MARKERS;
