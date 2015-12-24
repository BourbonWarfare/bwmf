// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)

params ["_unit"];

if (!(local _unit)) exitWith {};

private _startTime = diag_tickTime;

private _faction = toLower faction _unit;
private _unitClassname = typeOf _unit;
//Check variable f_gear, otherwise default to typeof
private _loadout = _unit getVariable ["F_Gear", _unitClassname];
private _path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if ((!isClass(_path)) && {(getNumber (missionConfigFile >> "CfgLoadouts" >> "useFallback")) == 1}) then {
    // [_unitClassname, "No loadout found, attempting fallback"] call F_fnc_gearErrorLogger;
    _path = missionConfigFile >> "CfgLoadouts" >> _faction >> "fallback";
};

if (!isClass(_path)) exitWith {
    [_unitClassname, "No loadout found, using default gear"] call F_fnc_gearErrorLogger;
    _unit setVariable ["F_Gear_Setup", true, true];
};

private _allowMagnifiedOptics = (isNumber (missionConfigFile >> "CfgLoadouts" >> "allowMagnifiedOptics") && (getNumber (missionConfigFile >> "CfgLoadouts" >> "allowMagnifiedOptics") == 1));

private _uniforms = getArray (_path >> "uniform");
private _vests = getArray (_path >> "vest");
private _headgears = getArray (_path >> "headgear");
private _backpack = getArray (_path >> "backpack");
private _backpackItems = getArray (_path >> "backpackItems");
private _weapons = getArray (_path >> "weapons");
private _launchers = getArray (_path >> "launchers");
private _handguns = getArray (_path >> "handguns");
private _magazines = getArray (_path >> "magazines");
private _items = getArray (_path >> "items");
private _linkedItems = getArray (_path >> "linkedItems");
private _attachments = getArray (_path >> "attachments");
private _secondaryAttachments = getArray (_path >> "secondaryAttachments");

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeAllItemsWithMagazines _unit;

// Clothes
//Random Uniform:
if ((count _uniforms) == 0) then {
    removeUniform _unit;
} else {
    private _toAdd = _uniforms call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        if (_unit isUniformAllowed _toAdd) then {
            _unit addUniform _toAdd;
        } else {
            _unit forceAddUniform _toAdd;
        };
    } else {
        [_unitClassname, format ["%1 Uniform (%2) not found using default (%3)", _loadout, _toAdd, (uniform _unit)]] call F_fnc_gearErrorLogger;
    };
};
//Random Vest:
if ((count _vests) == 0) then {
    removeVest _unit;
} else {
    private _toAdd = _vests call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        removeVest _unit;
        _unit addVest _toAdd;
    } else {
        [_unitClassname, format ["%1 Vest (%2) not found using default (%3)", _loadout, _toAdd, (vest _unit)]] call F_fnc_gearErrorLogger;
    };
};
//Random Backpack:
if ((count _backpack) == 0) then {
    removeBackpack _unit;
} else {
    _toAdd = _backpack call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgVehicles" >> _toAdd)}) then {
        removeBackpack _unit;
        _unit addBackpack _toAdd;
    } else {
        [_unitClassname, format ["%1 Backpack (%2) not found using default (%3)", _loadout, _toAdd, (backpack _unit)]] call F_fnc_gearErrorLogger;
    };
};
//Random Headgear:
if ((count _headgears) == 0) then {
    removeHeadgear _unit;
} else {
    private _toAdd = _headgears call BIS_fnc_selectRandom;
    if ((!isNil "_toAdd") && {isClass (configFile >> "CfgWeapons" >> _toAdd)}) then {
        removeHeadgear _unit;
        _unit addHeadgear _toAdd;
    } else {
        [_unitClassname, format ["%1 Headgear (%2) not found using default (%3)", _loadout, _toAdd, (headgear _unit)]] call F_fnc_gearErrorLogger;
    };
};

//Clear backpack
clearAllItemsFromBackpack _unit;

// Backpack Items
{
    (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
    for "_i" from 0 to ((parseNumber _amount) - 1) do {
        if (_unit canAddItemToBackpack _classname) then {
            _unit addItemToBackpack _classname;
        } else {
            _unit addItem _classname;
        };
    };
    nil
} count _backpackItems;

// Items
{
    (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
    for "_i" from 0 to ((parseNumber _amount) - 1) do {
        _unit addItem _classname;
    };
    nil
} count _items;

// Linked Items
{
    (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
    if ("Binocular" in ([configFile >> "CfgWeapons" >> _classname, true] call BIS_fnc_returnParents)) then {
        _unit addWeapon _classname;
    } else {
        for "_i" from 0 to ((parseNumber _amount) - 1) do {
            _unit linkItem _classname;
        };
    };
    nil
} count _linkedItems;

// Magazines
private _magazinesNotAdded = [];
{
    (_x splitString ":") params ["_classname", ["_amount", "1", [""]]];
    _amount = parseNumber _amount;
    
    _unit addMagazines [_classname, _amount];
    _notAdded = _amount - ({_x == _classname} count (magazines _unit));

    for "_i" from 0 to (_notAdded - 1) do {
        _magazinesNotAdded pushBack _classname;
    };
    nil
} count _magazines;

// Weapons
if ((count _weapons) > 0) then {_unit addWeapon (_weapons call BIS_fnc_selectRandom);};
if ((count _launchers) > 0) then {_unit addWeapon (_launchers call BIS_fnc_selectRandom);};
if ((count _handguns) > 0) then {_unit addWeapon (_handguns call BIS_fnc_selectRandom);};

// attachments
if (!(_attachments isEqualTo [])) then {
    //Prevents error from adding incompatible attachments
    private _primaryWeaponAttachables = [primaryWeapon _unit] call CBA_fnc_compatibleItems;
    private _handgunWeaponAttachables = [handgunWeapon _unit] call CBA_fnc_compatibleItems;
    {
        (_x splitString ":") params [["_classname", ""]]; //count makes no sense for attachments, ignore
        _config = configFile >> "CfgWeapons" >> _classname;
        if (isClass _config) then {
            private _addAttachment = true;
            if (!_allowMagnifiedOptics) then {
                private _minZoom = 999; //FOV, so smaller is more zoomed in
                {
                    if (isNumber (_x >> "opticsZoomMin")) then {_minZoom = _minZoom min (getNumber (_x >> "opticsZoomMin"));};
                    if (isText (_x >> "opticsZoomMin")) then {_minZoom = _minZoom min (call compile getText (_x >> "opticsZoomMin"));};
                    nil
                } count configProperties [_config >> "ItemInfo" >> "OpticsModes"];
                if (_minZoom < 0.25) then {
                    _addAttachment = false;
                    [_unitClassname, format ["allowMagnifiedOptics is false, not adding %1 (opticsZoomMin %2)", _classname, _minZoom]] call F_fnc_gearErrorLogger;
                };
            };
            if (_addAttachment) then {
                switch (true) do {
                    case (({_x == _classname} count _primaryWeaponAttachables) > 0): {_unit addPrimaryWeaponItem _classname;};
                    case (({_x == _classname} count _handgunWeaponAttachables) > 0): {_unit addHandgunItem _classname;};
                    default {
                        [_unitClassname, format ["Attachment %1 not compatible with weapons %2", _classname, (weapons _unit)]] call F_fnc_gearErrorLogger;
                    };
                };
            };
        } else {
            [_unitClassname, format ["Attachment %1 does not exist", _classname]] call F_fnc_gearErrorLogger;
        };
        nil
    } count _attachments;
};

// Secondary (Launchers) Attachements
if (!(_secondaryAttachments isEqualTo [])) then {
    //Prevents error from adding incompatible attachments
    private _secondaryWeaponAttachables = [secondaryWeapon _unit] call CBA_fnc_compatibleItems;
    {
        (_x splitString ":") params [["_classname", ""]];
        if (isClass (configFile >> "CfgWeapons" >> _classname)) then {
            if (({_x == _classname} count _secondaryWeaponAttachables) > 0) then {
                _unit addSecondaryWeaponItem _classname;
            } else {
                [_unitClassname, format ["Secondary attachment %1 not compatible with weapons %2", _classname, (weapons _unit)]] call F_fnc_gearErrorLogger;
            };
        } else {
            [_unitClassname, format ["Secondary attachment %1 does not exist", _classname]] call F_fnc_gearErrorLogger;
        };
        nil
    } count _secondaryAttachments;
};

//Try to add missing magazines:
{
    if (_unit canAdd _x) then {
        _unit addMagazines [_x, 1];
    } else {
        [_unitClassname, format ["No room for magazine %1", _x]] call F_fnc_gearErrorLogger;
    };
    nil
} count _magazinesNotAdded;

//Run loadout's init code
private _loadoutInit = _path >> "init";
if (isText _loadoutInit) then {
    _unit call compile ("this = _this;"+ getText _loadoutInit);
};

[_unitClassname, "Done", (diag_tickTime - _startTime)] call F_fnc_gearErrorLogger;
_unit setVariable ["F_Gear_Setup", true, true];
