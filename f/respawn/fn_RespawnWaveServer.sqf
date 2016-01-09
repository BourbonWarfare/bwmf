// RESPAWN WAVE SERVER FUNCTION
//
// This function initiates the group respawn, sending the data to each client to start the respawn
// The actual group will be created on the leader's client and then broadcast to everyone.
// This code will then wait for that group to return before then notifying all clients of the new group marker.
//

params ["_groupName", "_position", "_faction", "_selectedRespawnGroup","_sr","_lr"];

// Loop through each proposed client for respawn.
{
  _position = _position vectorAdd [1,0,0]; // do position transofmration

  _x params ["_rank", "_client", "_typeOfUnit"];
  _leader = _forEachIndex == 0;
  diag_log format ["_sr: %1, _lr: %2", _sr, _lr];
  [[f_serverRespawnGroupCounter,
    _position,
    _faction,
    _typeOfUnit,
    _rank,
    f_serverRespawnPlayerCounter,
    _leader,
    _groupName,
    _sr,
    _lr],
    "F_fnc_RespawnLocalClient", _client] call BIS_fnc_MP;

  //Setup respawned player to die if he disconnects?
  [f_serverRespawnPlayerCounter] spawn {
    private["_unitName", "_unit"];
    sleep 5;
    _unitName = format["respawnedUnit%1",(_this select 0)];
    waitUntil{sleep 3;!isNil _unitName};
    _unit = missionNamespace getVariable[_unitName,objNull];
    while{!isNull _unit} do {
      if (!isPlayer _unit) exitWith {
        _unit setDamage 1;
        [_unit] join grpNull;
      };
      sleep 5;
    };
  };
  f_serverRespawnPlayerCounter = f_serverRespawnPlayerCounter + 1;
} forEach _selectedRespawnGroup;

f_serverRespawnGroupCounter = f_serverRespawnGroupCounter + 1;
