#include "defines_unitsAndGroups.hpp"

_unit = _this select 0;
_group = group _unit;

//If it has a groupID set, exit
if ((_group getVariable ["F3_GroupID", "-1"]) != "-1") exitWith {};

_groupNames = switch (side _group) do {
case (west): {WEST_GROUPS};
case (east): {EAST_GROUPS};
case (independent): {INDP_GROUPS};
    default {[]};
};

_splitName = [(vehicleVarName _unit), "_"] call BIS_fnc_splitString;
if ((count _splitName) < 2) exitWith {};
_nameToSearch = format ["%1_%2", (_splitName select 0), (_splitName select 1)];

{
    if (_nameToSearch == (_x select 0)) exitWith {
        _group setVariable ["F3_GroupID", (_x select 1), true];
    };
} forEach _groupNames;
