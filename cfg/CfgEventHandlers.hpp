//Extended Event Handlers:
class Extended_InitPost_EventHandlers {
  class CAManBase {
    class BWMF_FixFriendlyFire { init = "if (local (_this select 0)) then {(_this select 0) addRating 100000;};";};
  };
  class Car {
    class BWMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Tank {
    class BWMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Helicopter {
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Plane {
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Ship_F {
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
};
