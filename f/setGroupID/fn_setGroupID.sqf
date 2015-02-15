// F3 - Set Group ID Function
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// DECLARE VARIABLES
private ["_groupVarName", "_groupIDName", "_grp"];

_groupVarName = _this select 0;
_groupIDName = _this select 1;

_grp = missionNameSpace getVariable [_groupVarName, grpNull];
if (!isNull _grp) then {
    _grp setVariable ["f_var_grpIdSet",true];
    _grp setGroupId [_groupIDName, "GroupColor0"];
};
