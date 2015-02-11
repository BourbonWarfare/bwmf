// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

//For Vehicles - Pabst Mirror

_unit = _this select 0;

_loadout = (typeOf _unit);
_faction = tolower (faction _unit);

_path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if(!isClass(_path)) then {
    _loadout = switch (true) do {
    case (_unit isKindOf "Car"): {"Car";};
    case (_unit isKindOf "Tank"): {"Tank";};
    case (_unit isKindOf "Helicopter"): {"Helicopter";};
    case (_unit isKindOf "Plane"): {"Plane";};
    case (_unit isKindOf "Ship"): {"Ship";};
        default {"Vehicle"};
    };
    _path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;
};


if(!isClass(_path)) exitWith {
    systemChat format ["No loadout found for %1 (typeOf %2) (kindOf %3)", _unit, (typeof _unit), _loadout];
};

_TransportMagazines = getArray(_path >> "TransportMagazines");
_TransportItems = getArray(_path >> "TransportItems");
_TransportWeapons = getArray(_path >> "TransportWeapons");

clearWeaponCargoGlobal _unit;
clearMagazineCargoGlobal _unit;
clearItemCargoGlobal _unit;
clearBackpackCargoGlobal _unit;

// ====================================================================================
// _TransportMagazines
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    _unit addMagazineCargoGlobal [_classname,_amt];
} foreach _TransportMagazines;
// ====================================================================================
// _TransportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
        _unit addItemCargoGlobal [_classname,_amt];;
    };
} foreach _TransportItems;
// ====================================================================================
// _TransportItems
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    _classname = _arr select 0;
    _amt = 1;
    if(count _arr > 1) then
    {
        _amt = parseNumber (_arr select 1);
    };
    for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
        _unit addWeaponCargoGlobal [_classname,_amt];
    };
} foreach _TransportWeapons;