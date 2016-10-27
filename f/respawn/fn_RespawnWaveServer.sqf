// RESPAWN WAVE SERVER FUNCTION
//
// This function initiates the group respawn, sending the data to each client to start the respawn
// The actual group will be created on the leader's client and then broadcast to everyone.
// This code will then wait for that group to return before then notifying all clients of the new group marker.
//

params ["_groupIndex", "_position", "_faction", "_selectedRespawnGroup"];
diag_log text format ["[BWMF] RespawnWaveServer: %1", _this];

// Loop through each proposed client for respawn.
{
  _position = _position vectorAdd [1,0,0]; // do position transofmration

  _x params ["_rank", "_client", "_typeOfUnit"];
  diag_log text format ["[BWMF] RespawnWaveServer: client %1, type %2", _client, _typeOfUnit];
  _leader = _forEachIndex == 0;
  [f_serverRespawnGroupCounter,
    _position,
    _faction,
    _typeOfUnit,
    _rank,
    f_serverRespawnPlayerCounter,
    _leader,
    _groupIndex] remoteExec ["F_fnc_RespawnLocalClient", _client, false];

  f_serverRespawnPlayerCounter = f_serverRespawnPlayerCounter + 1;
} forEach _selectedRespawnGroup;

f_serverRespawnGroupCounter = f_serverRespawnGroupCounter + 1;
