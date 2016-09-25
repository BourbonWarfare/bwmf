params["_groupNum", "_position", "_faction", "_typeOfUnit", "_rank", "_number", "_leader", "_groupIndex"];

diag_log format ["[bwmf] - Can Suspend: %1", canSuspend];

_faction = (respawnMenuFactions select _faction) select 0;
_typeOfUnit = (respawnMenuRoles select _typeOfUnit) select 0;
private _class = [_faction, _typeOfUnit] call fn_respawnSelectClass;

(respawnMenuGroupNames select _groupIndex) params ["_groupName","_sr","_lr","_texture","_color"];

private _groupPrefix = switch (_faction) do {
  case "blu_f": {"BluFor"};
  case "opf_f":{"OpFor"};
  case "ind_f": {"Indy"};
  default {""};
};

private _groupId = format ["%1 %2, RG:%3", _groupPrefix, _groupName, _groupNum];

private _side = switch (getNumber (configfile >> "CfgFactionClasses" >> _faction >> "side")) do {
  case 0: {east};
  case 1: {west};
  case 2: {resistance};
  default {civilian};
};

private _rankName  = switch (_rank) do {
  case 1: {"CORPORAL"};
  case 2: {"SERGEANT"};
  case 3: {"LIEUTENANT"};
  case 4: {"CAPTAIN"};
  case 5: {"MAJOR"};
  case 6: {"COLONEL"};
  default {"PRIVATE"};
};

private _groupVarName = format ["GrpRespawn_%1", _groupNum];
private _group = if (_leader) then {
  private _newGroup = createGroup _side;
  _newGroup setGroupIdGlobal [_groupId];

  _newGroup setVariable ["potato_radios_srChannel", _sr, true];
  _newGroup setVariable ["potato_radios_mrChannel", _lr, true];
  _newGroup setVariable ["potato_radios_lrChannel", _lr, true];

  _newGroup setVariable ["potato_markers_addMarker", true, true];
  _newGroup setVariable ["potato_markers_markerText", _groupName, true];
  _newGroup setVariable ["potato_markers_markerTexture", _texture, true];
  _newGroup setVariable ["potato_markers_markerColor", _color, true];
  _newGroup setVariable ["potato_markers_markerSize", 24, true];

  publicVariable _groupVarName;
  _newGroup
}
else {
  waitUntil{ !isNil _groupVarName };

  private _newGroup = grpNull;
  {
    if (groupId _x == _groupId) exitWith { _newGroup = _x; };
  } forEach allGroups;

  if (isNull _newGroup) then {
    _newGroup = createGroup _side;
  };

  _newGroup
};

// Create the unit
private _oldUnit = player;
private _newUnit = _group createUnit [_class, _position, [], 5, "NONE"];
_newUnit setRank _rankName;
_newUnit addRating 10000;

// Wait till the unit is created
private _timeOut = time + 10;
waitUntil {(!isNil "_newUnit" && {!isNull _newUnit && {alive _newUnit}}) || time > _timeOut};
if (isNil "_newUnit" && {isNull _newUnit && {!alive _newUnit}}) exitWith { diag_log "[bwmf] - Respawn died"; };

// Exit Spectator
[true] call F_fnc_ForceExit;

selectPlayer _newUnit;

player setVariable ["f_respawnName", name player, true];
player setVariable ["f_respawnUID", getPlayerUID player, true];

if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
  [false] call acre_api_fnc_setSpectator;
  [{[player] call acre_api_fnc_isInitialized}, potato_radios_fnc_configureRadios] call CBA_fnc_waitUntilAndExecute;
};
