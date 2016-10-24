#include "respawn_settings.sqf"
#include "respawn_gui_code.sqf";

if (isServer) then {
  //Counters to allow for unique IDs of respawned players and groups.
  f_serverRespawnPlayerCounter = 1;
  f_serverRespawnGroupCounter = 1;

  [] spawn {
    waitUntil {time > 0};
    //check if respawn marker exists, if it doesn't then create it
    if (getMarkerColor "respawn" == "") then {
      createMarker ["respawn",[0,0]];
    };
  };

  f_serverRespawnableUnits = [];
  publicVariable "f_serverRespawnableUnits";
  [] spawn {
    waitUntil {

      private _oldRespawnableUnits = f_serverRespawnableUnits;
      f_serverRespawnableUnits = [];

      { 
        if (_x getVariable ["f_spectator", false]) then {

          _uid = _x getVariable ["f_respawnUID", ""];

          if (_uid != "") then {
            _added = f_serverRespawnableUnits pushBackUnique _uid;
            if (_added != -1) then {
              _x setPos [0, 0, 5];
              _x enableSimulationGlobal false;
              _x hideObjectGlobal true;
            };
          };

        };
      } forEach allPlayers;

      if !(_oldRespawnableUnits isEqualTo f_serverRespawnableUnits) then {
        publicVariable "f_serverRespawnableUnits";
      };
      
      sleep 1;
      
      false
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
