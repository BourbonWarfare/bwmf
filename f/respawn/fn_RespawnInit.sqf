#include "respawn_settings.sqf"
#include "respawn_gui_code.sqf";

if (isServer) then {
  //Counters to allow for unique IDs of respawned players and groups.
  f_serverRespawnPlayerCounter = 1;
  f_serverRespawnGroupCounter = 1;
};

if (hasInterface) then {
  [] spawn {
    private _timeOut = time + 30;
    waitUntil {(time > 0 && alive player) || time > _timeOut};
    player setVariable ["f_respawnName", name player, true];
    player setVariable ["f_respawnUID", getPlayerUID player, true];
  };
};
