respawn = "BASE";
respawndelay = 3;
respawnButton = 1;
respawnOnStart = 0;
respawnTemplates[] = {"f_spectator"};

class CfgRespawnTemplates {
  class f_Spectator {
    onPlayerRespawn = "f_fnc_CamInit";
  };
};

#include "..\f\spect\config.hpp"
#include "..\f\respawn\defines.hpp"
#include "..\f\respawn\dialogs.hpp"
