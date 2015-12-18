#include "respawn_settings.sqf"
#include "respawn_gui_code.sqf";

if (isServer) then {
    //Counters to allow for unique IDs of respawned players and groups.
    f_serverRespawnPlayerCounter = 1;
    f_serverRespawnGroupCounter = 1;
};

isSpec = false;
