params["_groupNum", "_position", "_faction", "_typeOfUnit", "_rank", "_number", "_leader", "_groupName","_sr","_lr"];

_faction = (respawnMenuFactions select _faction) select 0;
_typeOfUnit = (respawnMenuRoles select _typeOfUnit) select 0;
_class = [_faction, _typeOfUnit] call fn_respawnSelectClass;

_factionName = switch (_faction) do {
  case "blu_f": {"UnitNATO"};
  case "opf_f": {"UnitOPFOR"};
  case "ind_f": {"UnitIND"};
  case "rhs_faction_msv": {"UnitMSV"};
  default {"UnitCiv"};
};

_sideNum = getNumber (configfile >> "CfgFactionClasses" >> _faction >> "side");
_side = switch (_sideNum) do {
  case 0: {east};
  case 1: {west};
  case 2: {resistance};
  case 3: {civilian};
  default {civilian};
};

_rankName  = switch (_rank) do {
  case 0: {"PRIVATE"};
  case 1: {"CORPORAL"};
  case 2: {"SERGEANT"};
  case 3: {"LIEUTENANT"};
  case 4: {"CAPTAIN"};
  case 5: {"MAJOR"};
  case 6: {"COLONEL"};
  default {"PRIVATE"};
};

//Dummy group is required
_dummyGroup = createGroup _side;
// Create the unit
_unitName = format["respawnedUnit%1_%2_%3", _number, _groupName, _typeOfUnit];
_editorName = format["%1_%2_%3", _factionName, _groupName, _typeOfUnit];
_init = format ["%1 = this; this setName '%1'; this setVehicleVarName '%2';", _unitName, _editorName];
_oldUnit = player;
_class createUnit [_position, _dummyGroup, _init, 0.5, _rankName];

// Wait till the unit is created
waitUntil{!isNil _unitName};

_localRespawnedUnit = missionNamespace getVariable [_unitName, objNull];

// Exit Spectator
[true] call F_fnc_ForceExit;

_name = (name player);
selectPlayer _localRespawnedUnit;

 _groupVarName = format ["GrpRespawn_%1", _groupNum];
if (_leader) then {
  //Broadcast group var to everyone so people can join.
  missionNamespace setVariable[_groupVarName, _dummyGroup];
  _groupPrefix = switch (_faction) do {
    case "blu_f": {"NATO "};
    case "opf_f":{"OPFOR "};
    case "ind_f": {"IND "};
    case "rhs_faction_msv": {"MSV "};
    default {""};
  };
  _dummyGroup setVariable ["F3_GroupID", _groupPrefix + _groupName, true];
  publicVariable _groupVarName;
}
else {
  //Wait for group be created by the group leader before joining it.
  [_groupVarName] spawn {
    params["_groupVarName"];
    // Wait for group exist.
    sleep 1; // Ensure that everything is in Sync.
    waitUntil{ !isNil _groupVarName };
    [player] joinSilent (missionNamespace getVariable[_groupVarName, grpNull]);
 };
};

// Re-run briefing script for our new unit.
[] call F_fnc_showBriefing;
[] call F_fnc_showOrbatNotes;
[] call F_fnc_setTeamColours;

player setVariable ["f_respawnName", name player, true];
player setVariable ["f_respawnUID", getPlayerUID player, true];

// Spawn to avoid blocking with waitUntil for assignGear to finish.
if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
  [false] call acre_api_fnc_setSpectator;
  player setVariable ["F_Radio_LR", _lr, false];
  player setVariable ["F_Radio_SR", _sr, false];
  [] spawn {
    [] call F_Radios_fnc_acreRadioSetup;
  };
};
