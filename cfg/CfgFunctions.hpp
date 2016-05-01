class CfgFunctions {
  class F_Markers {
    class F_Markers {
      file = "f\pabstMarkers";
      class drawMap {};
      class getGroupMarkerStyle {};
      class playerInit {};
      class serverSetupGroupID {};
      class setupDrawThings {};
      class setupGpsMiniMap {};
    };
  };
  class F_Radios {
    class F_Radios {
      file = "f\radios";
      class reinitRadio {};
      class acreRadioSetup {};
      class acreRadioSetPlayerChannels {};
    };
  };
  class F {  // Defines the "owner"
    class common {  // category
      file = "f\common";
      // Defines the function to preInit (the paramArray dosent seem to be constructed at preInit stage).
      class processParamsArray {
        preInit = 1;
        postInit = 1;
      };
    };
    class assignGear {
      // Defines the functions to preInit the compling of the assignGear function used by units.
      file = "f\assignGear";
      class assignGearMan {};
      class assignGearVehicle {};
      class gearErrorLogger {};
    };
    class missionConditions {
      file = "f\missionConditions";
      class SetTime {};
      class SetFog {};
      class SetWeather {};
    };
    class setTeamColours {
      file = "f\setTeamColours";
      class setTeamColours {};
    };
    #include "..\f\spect\functions.hpp"
    #include "..\f\respawn\functions.hpp"
  };
};
