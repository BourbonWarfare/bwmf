//Extended Event Handlers:
class Extended_InitPost_EventHandlers {
  class Car {
    class BWMF_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class BWMF_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; exclude = "LSV_01_AT_base_F"; };
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
