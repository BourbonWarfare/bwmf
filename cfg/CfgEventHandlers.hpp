//Extended Event Handlers:

class Extended_InitPost_EventHandlers {
  class CAManBase {
    class F_AssignGear { init = "[F_fnc_assignGearMan, _this] call ace_common_fnc_runAfterSettingsInit;"; };
    class F_ServerGroupID { serverinit = "_this call Pabst_fnc_serverSetupGroupID;"; };
    class F_FixFriendlyFire { init = "if (local (_this select 0)) then {(_this select 0) addRating 100000;};";};
  };
  class Car {
    class F_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class F_AssignVehicleGear { serverInit  = "[(_this select 0), 'Car'] call F_fnc_assignGearVehicle;"; };
  };
  class Tank {
    class F_NoBitchZone { init = "(_this select 0) allowCrewInImmobile true;"; };
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class F_AssignVehicleGear { serverInit  = "[(_this select 0), 'Tank'] call F_fnc_assignGearVehicle;"; };
  };
  class Helicopter {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class F_AssignVehicleGear { serverInit  = "[(_this select 0), 'Helicopter'] call F_fnc_assignGearVehicle;"; };
  };
  class Plane {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class F_AssignVehicleGear { serverInit  = "[(_this select 0), 'Plane'] call F_fnc_assignGearVehicle;"; };
  };
  class Ship_F {
    class F_DisableThermals { init = "(_this select 0) disableTIEquipment true;"; };
    class F_AssignVehicleGear { serverInit  = "[(_this select 0), 'Ship_F'] call F_fnc_assignGearVehicle;"; };
  };
};
