// Respawn Settings
respawn = "BIRD";
respawndelay = 3;
respawnButton = 1;
respawnTemplates[] = {"f_spectator"};

class CfgRespawnTemplates {
  // F3 Spectator Script
  class f_Spectator {
    onPlayerRespawn = "f_fnc_CamInit";
  };
};

#include "functions\spect\config.hpp"
#include "functions\respawn\dialogs.hpp"
