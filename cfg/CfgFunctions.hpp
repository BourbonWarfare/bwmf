class CfgFunctions {
  class F {
    class common {
      file = "f\common";
      class processParamsArray {
        preInit = 1;
        postInit = 1;
      };
    };
    class missionConditions {
      file = "f\missionConditions";
      class SetTime {};
      class SetFog {};
      class SetWeather {};
    };
    #include "..\f\spect\functions.hpp"
    #include "..\f\respawn\functions.hpp"
  };
};
