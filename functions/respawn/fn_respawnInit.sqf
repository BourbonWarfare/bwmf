#include "respawn_settings.sqf"
#include "respawn_gui_code.sqf"

if (isServer) then {
  //Counters to allow for unique IDs of respawned players and groups.
  f_serverRespawnPlayerCounter = 1;
  f_serverRespawnGroupCounter = 1;
};

if (hasInterface) then {
  isSpec = false;
  [] spawn { // wait until the player has loaded, set variables
    waitUntil {time > 0};
    player setVariable ["f_respawnName", name player, true];
  };
};
