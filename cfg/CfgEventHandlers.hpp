//Extended Event Handlers:

class Extended_InitPost_EventHandlers {
  class CAManBase {
    class F_FixFriendlyFire { init = "if (local (_this select 0)) then {(_this select 0) addRating 100000;};";};
  };
  class Car {
    class F_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Tank {
    class F_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Helicopter {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Plane {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Ship_F {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
};
