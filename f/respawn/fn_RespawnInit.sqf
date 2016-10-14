#include "respawn_settings.sqf"
#include "respawn_gui_code.sqf";

if (isServer) then {
  //Counters to allow for unique IDs of respawned players and groups.
  f_serverRespawnPlayerCounter = 1;
  f_serverRespawnGroupCounter = 1;
  f_serverRespawnableUnits = [];
  publicVariable "f_serverRespawnableUnits";
  [] spawn {
    waitUntil {

      f_serverRespawnableUnits = [];

      { 
        if (isPlayer _x && {_x getVariable ["f_spectator", false]}) then {

          _uid = _x getVariable ["f_respawnUID", ""];

          if (_uid != "") then {
            f_serverRespawnableUnits pushBackUnique _uid;
          };

        };
      } forEach allUnits;

      publicVariable "f_serverRespawnableUnits";
      
      sleep 5;
      false;
    };
  };
};

if (hasInterface) then {
  [] spawn {
    waitUntil {time > 0};
    player setVariable ["f_respawnName", name player, true];
    player setVariable ["f_respawnUID", getPlayerUID player, true];
    player setVariable ["f_spectator", false, true];
  };
};
