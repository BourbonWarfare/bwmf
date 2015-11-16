// Include the file settings.
#include "respawn_settings.sqf"

// Include the GUI code with all the GUI control event handlers.
#include "respawn_gui_code.sqf";

// SERVER INIT

if (isServer) then {
    //Counters to allow for unique IDs of respawned players and groups.
    f_serverRespawnPlayerCounter = 1;
    f_serverRespawnGroupCounter = 1;
};

isSpec = false;
