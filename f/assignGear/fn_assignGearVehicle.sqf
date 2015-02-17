// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

//For Vehicles - Pabst Mirror

_theVehicle = _this select 0;
_defaultLoadout = _this select 1;

// _theVehicle setVariable ["F_gearAssigned", true, true];
_typeOf = typeOf _theVehicle;
_loadout = _theVehicle getVariable ["F_Gear", _typeOf];
_faction = tolower (faction _theVehicle);

//Leave default gear when "F_Gear" is "Default"
if (_loadout == "Default") exitWith {};

//Clean out starting inventory when "F_Gear" is "Empty"
if (_loadout == "Empty") exitWith {
    clearWeaponCargoGlobal _theVehicle;
    clearMagazineCargoGlobal _theVehicle;
    clearItemCargoGlobal _theVehicle;
    clearBackpackCargoGlobal _theVehicle;
};

_path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if (!isClass _path) then {
    //No CfgLoadouts for exact loadout, try default
    if (!isClass _path) then {
        _vehConfigSide = [_theVehicle, true] call BIS_fnc_objectSide;
        _vehConfigFaction = switch (_vehConfigSide) do {
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
};

if (!isClass _path) exitWith {
    // systemChat format ["No loadout found for %1 (typeOf %2) (kindOf %3)", _theVehicle, (typeof _theVehicle), _loadout];
};

//Clean out starting inventory (even if there is no class)
clearWeaponCargoGlobal _theVehicle;
clearMagazineCargoGlobal _theVehicle;
clearItemCargoGlobal _theVehicle;
clearBackpackCargoGlobal _theVehicle;

_transportMagazines = getArray(_path >> "TransportMagazines");
_transportItems = getArray(_path >> "TransportItems");
_transportWeapons = getArray(_path >> "TransportWeapons");

// ====================================================================================
// _transportMagazines
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addMagazineCargoGlobal [_classname,_amt];
} foreach _transportMagazines;
// ====================================================================================
// _transportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addItemCargoGlobal [_classname,_amt];
} foreach _transportItems;
// ====================================================================================
// _transportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _theVehicle addWeaponCargoGlobal [_classname,_amt];
} foreach _transportWeapons;
