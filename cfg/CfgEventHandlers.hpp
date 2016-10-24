//Extended Event Handlers:
class Extended_InitPost_EventHandlers {
  class CAManBase {
    class SCMF_FixFriendlyFire { init = "if (local (_this select 0)) then {(_this select 0) addRating 100000;};";};
  };
  class Car {
    class SCMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Tank {
    class SCMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Helicopter {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Plane {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
  class Ship_F {
    class SCMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
  };
};
