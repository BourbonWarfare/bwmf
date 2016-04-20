// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
//For Vehicles - Pabst Mirror

//Runs only on server

params ["_theVehicle", "_defaultLoadout"];

private _setVehicleLoadouts = if (isNumber (missionConfigFile >> "CfgLoadouts" >> "setVehicleLoadouts")) then {
  getNumber (missionConfigFile >> "CfgLoadouts" >> "setVehicleLoadouts");
} else {
  1
};

private _typeOf = typeOf _theVehicle;
private _loadout = _theVehicle getVariable ["F_Gear", _typeOf];
private _faction = toLower faction _theVehicle;

//Leave default gear when "F_Gear" is "Default" or _setVehicleLoadouts is 0
if ((_setVehicleLoadouts == 0) || {_loadout == "Default"}) exitWith {};

//Clean out starting inventory when "F_Gear" is "Empty" or _setVehicleLoadouts is -1
if ((_setVehicleLoadouts == -1) || {_loadout == "Empty"}) exitWith {
  clearWeaponCargoGlobal _theVehicle;
  clearMagazineCargoGlobal _theVehicle;
  clearItemCargoGlobal _theVehicle;
  clearBackpackCargoGlobal _theVehicle;
};

private _path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if (!isClass _path) then {
  //No CfgLoadouts for exact loadout, try default
  private _vehConfigSide = [_theVehicle, true] call BIS_fnc_objectSide;
  private _vehConfigFaction = switch (_vehConfigSide) do {
    case (west): {"blu_f"};
    case (east): {"rhs_faction_msv"};
    case (independent): {"ind_f"};
    default {"CIV_F"};
  };
  _path = missionConfigFile >> "CfgLoadouts" >> _vehConfigFaction >> _defaultLoadout;
  if (!isClass _path) then {
    if (_vehConfigSide == east) then {
      _vehConfigFaction = "OPF_F";
      _path = missionConfigFile >> "CfgLoadouts" >> _vehConfigFaction >> _defaultLoadout;
    };
  };
};

if (!isClass _path) exitWith {
  diag_log text format ["[BW] - No loadout found for %1 (typeOf %2) (kindOf %3)", _theVehicle, typeof _theVehicle, _loadout];
};

//Clean out starting inventory (even if there is no class)
clearWeaponCargoGlobal _theVehicle;
clearMagazineCargoGlobal _theVehicle;
clearItemCargoGlobal _theVehicle;
clearBackpackCargoGlobal _theVehicle;

private _transportMagazines = getArray(_path >> "TransportMagazines");
private _transportItems = getArray(_path >> "TransportItems");
private _transportWeapons = getArray(_path >> "TransportWeapons");
private _transportBackpacks = getArray(_path >> "TransportBackpacks");

// transportMagazines
{
  (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
  _theVehicle addMagazineCargoGlobal [_classname, parseNumber _amount];
  nil
} count _transportMagazines;

// transportItems
{
  (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
  _theVehicle addItemCargoGlobal [_classname, parseNumber _amount];
  nil
} count _transportItems;

// transportWeapons
{
  (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
  _theVehicle addWeaponCargoGlobal [_classname, parseNumber _amount];
  nil
} count _transportWeapons;

// transportBackpacks
{
  (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
  _theVehicle addBackpackCargoGlobal [_classname, parseNumber _amount];
  nil
} count _transportBackpacks;
