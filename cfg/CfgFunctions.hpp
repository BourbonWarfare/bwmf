// F3 - Functions
class CfgFunctions {
  class Pabst {
    class pabstMarkers {
      class drawMap {};
      class getGroupMarkerStyle {};
      class playerInit {};
      class serverSetupGroupID {};
      class setupDrawThings {};
    };
  };
  class F {
    class assignGear {
      // Defines the functions to preInit the compling of the assignGear function used by units.
      class assignGearMan {};
      class assignGearVehicle {};
      class gearErrorLogger {};
    };
    class briefing {
      class showBriefing;
      class showOrbatNotes;
    };
    class common {  // category
      // Defines the function to preInit (the paramArray dosent seem to be constructed at preInit stage).
      class processParamsArray {
        preInit = 1;
        postInit = 1;
      };
    };
    class missionConditions {
      class SetTime {};
      class SetFog {};
      class SetWeather {};
      class missionTimer {};
    };
    class radios {
      class reinitRadio {};
      class acreRadioSetup {};
      class acreRadioSetPlayerChannels {};
    };
    class setTeamColours {
      class setTeamColours {};
    };
    #include "functions\spect\functions.hpp"
    #include "functions\respawn\functions.hpp"
  };
};
