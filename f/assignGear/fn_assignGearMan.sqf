
// F3 - F3 Folk ARPS Assign Gear
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================
_unit = _this select 0;

if (!local _unit) exitWith {};

_faction = tolower faction _unit;
//Check variable f_gear, otherwise default to typeof
_loadout = _unit getVariable ["F_Gear", typeOf _unit];

_path = missionConfigFile >> "CfgLoadouts" >> _faction >> _loadout;

if(!isClass _path) exitWith {
    systemChat format ["No loadout found for %1 (typeOf %2)", _unit, (typeof _unit)];
};

#define gtArr(a,b) a = getArray(_path >> b);

gtArr(_uniforms,"uniform")
gtArr(_vests,"vest")
gtArr(_headgears,"headgear")
gtArr(_backpack,"backpack")
gtArr(_backpackItems,"backpackItems")
gtArr(_weapons,"weapons")
gtArr(_launchers,"launchers")
gtArr(_handguns,"handguns")
gtArr(_magazines,"magazines")
gtArr(_items,"items")
gtArr(_linkedItems,"linkedItems")
gtArr(_attachments,"attachments")

removeAllWeapons _unit;
removeAllAssignedItems _unit;
removeHeadgear _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeAllItemsWithMagazines _unit;

#define selRnd(a,b) if (count a > 0) then {_unit b (a call BIS_fnc_selectRandom)};

// ====================================================================================
// Clothes
selRnd(_uniforms,forceAddUniform)
selRnd(_vests,addVest)
selRnd(_headgears,addHeadgear)
selRnd(_backpack,addBackpack)

//Clear backpack
clearAllItemsFromBackpack _unit;

// Backpack Items
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if (count _arr > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then [{parseNumber (_arr select 1)},{1}];
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            if (_unit canAddItemToBackpack _classname) then [{
                _unit addItemToBackpack _classname;
            },{
                _unit addItem _classname;
            }];
        };
    };
} count _backpackItems;

// ====================================================================================
// Items
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if (count _arr > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then [{parseNumber (_arr select 1)},{1}];
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            _unit additem _classname;
        };
    };
} count _items;
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if (count _arr > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then [{parseNumber (_arr select 1)},{1}];
        if ("Binocular" in ([(configFile >> "CfgWeapons" >> _classname), true] call BIS_fnc_returnParents)) then [{
            _unit addWeapon _classname;
        },{
            for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
                _unit linkItem _classname;
            };
        }];
    };
} count _linkedItems;

// Magazines
_magazinesNotAdded = [];
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if (count _arr > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then [{parseNumber (_arr select 1)},{1}];
        _unit addMagazines [_classname, _amt];
        _notAdded = _amt - ({_x == _classname} count (magazines _unit));
        for "_index" from 0 to (_notAdded - 1) do {
            _magazinesNotAdded pushBack _classname;
        };
    };
	false
} count _magazines;

// ====================================================================================
// Weapons
selRnd(_weapons,addWeapon)
selRnd(_launchers,addWeapon)
selRnd(_handguns,addWeapon)

// ====================================================================================
// attachments
{
    _arr = [_x,":"] call BIS_fnc_splitString;
    if (count _arr > 0) then {
        _classname = _arr select 0;
        _amt = if (count _arr > 1) then [{parseNumber (_arr select 1);},{1}];
        for [{_i=1},{_i<=_amt},{_i=_i+1}] do {
            _unit addPrimaryWeaponItem _classname;
            _unit addSecondaryWeaponItem _classname;
            _unit addHandgunItem _classname;
        };
    };
} count _attachments;

//Try to add missing magazines:
{
    if (_unit canAdd _x) then [{
        _unit addMagazines [_x, 1];
    },{
        systemChat format ["Failed To add Magazine %1 to %2", _x, _unit];
    }];
} count _magazinesNotAdded;

_a = _path >> "init";
if (isText _a) then {
	_unit call compile ("this = _this;"+ getText _a);
};
