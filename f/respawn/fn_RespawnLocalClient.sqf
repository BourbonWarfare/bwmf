params["_groupNum", "_position", "_faction", "_typeOfUnit", "_rank", "_number", "_leader", "_groupIndex"];
diag_log text format ["[BWMF] RespawnLocalClient: %1", _this];

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
if (_leader) then {
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

  // Create the unit
  private _newUnit = _newGroup createUnit [_class, _position, [], 5, "NONE"];
  _newUnit setRank _rankName;
  _newUnit addRating 10000;

  // Wait till the unit is created
  private _timeOut = time + 10;
  waitUntil {(!isNil "_newUnit" && {!isNull _newUnit && {alive _newUnit}}) || time > _timeOut};
  if (isNil "_newUnit" || {isNull _newUnit} || {!alive _newUnit}) exitWith { diag_log "[bwmf] - Respawn died"; };

  // Explicitly set leader
  _newGroup selectLeader _newUnit;
  
  // Exit Spectator
  [true] call F_fnc_ForceExit;

  // 'respawn'
  selectPlayer _newUnit;
  
  missionNameSpace setVariable [_groupVarName, _newGroup, true];
  
  diag_log text format ["[bwmf] - Respawned as leader [%1] GroupVar [%2:%3]", player, _groupVarName, missionNameSpace getVariable [_groupVarName, -1]];
}
else {
  _timeOut = time + 10;
  waitUntil{ !isNil _groupVarName || time > _timeOut };
  if (isNil _groupVarName) exitWith { 
    systemChat "Respawn Failed, No Leader Group!!!";
    diag_log "[bwmf] - Respawn Public group wasn't created!"; 
  };
  
  private _newGroup = missionNameSpace getVariable [_groupVarName, grpNull];
  if (isNull _newGroup) exitWith {diag_log "[bwmf] - Respawn Public group was null!";}; 

  // Create the unit
  private _newUnit = _newGroup createUnit [_class, _position, [], 5, "NONE"];
  _newUnit setRank _rankName;
  _newUnit addRating 10000;

  // Wait till the unit is created
  private _timeOut = time + 10;
  waitUntil {(!isNil "_newUnit" && {!isNull _newUnit && {alive _newUnit}}) || time > _timeOut};
  if (isNil "_newUnit" || {isNull _newUnit} || {!alive _newUnit}) exitWith { diag_log "[bwmf] - Respawn died, new unit wasn't created"; };

  // Exit Spectator
  [true] call F_fnc_ForceExit;

  // 'respawn'
  selectPlayer _newUnit;

  _timeOut = time + 10;
  waitUntil{ player == _newUnit || time > _timeOut };
  if (player != _newUnit) exitWith { diag_log "[bwmf] - Respawn died, player didn't transfer"; };

  diag_log text format ["[bwmf] - Respawned as non-leader [%1] GroupVar [%2:%3]", player, _groupVarName, missionNameSpace getVariable [_groupVarName, -1]];
};

player setVariable ["f_respawnName", name player, true];
player setVariable ["f_respawnUID", getPlayerUID player, true];

if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
  [false] call acre_api_fnc_setSpectator;
  [{[player] call acre_api_fnc_isInitialized}, potato_radios_fnc_configureRadios] call CBA_fnc_waitUntilAndExecute;
};
