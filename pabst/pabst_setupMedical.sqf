//Pabst: setup medical shit
//currently setup for AGM


_addToBackpack = {
	_theUnit = _this select 0;
	_theItem = _this select 1;
	_count = [_this, 2, 1, [0]] call BIS_fnc_param;

	if (!isClass (configFile >> "CfgWeapons" >> _theItem)) exitWith {};		//this won't try to add items that don't exist

	for "_index" from 1 to _count do {
		if (_theUnit canAddItemToBackpack _theItem) then {
			_theUnit addItemToBackpack _theItem;
		} else {
			_theUnit addItem _theItem;
		};
	};
};

_typeofUnit = _this select 0;
_unit		= _this select 1;

[_unit, "AGM_Bandage", 4] call _addToBackpack;
[_unit, "AGM_EarBuds", 1] call _addToBackpack;
[_unit, "AGM_Morphine", 1] call _addToBackpack;
[_unit, "AGM_IR_Strobe_Item", 1] call _addToBackpack;

switch (_typeofUnit) do {
case ("m"): {
		[_unit, "AGM_Morphine", 14] call _addToBackpack;
		[_unit, "AGM_Epipen", 	8] call _addToBackpack;
		[_unit, "AGM_Bloodbag", 2] call _addToBackpack;
		[_unit, "AGM_Bandage", 	31] call _addToBackpack;
	};

case ("ar"): {
		[_unit, "AGM_SpareBarrel", 1] call _addToBackpack;
	};

case ("aar"): {
		[_unit, "AGM_SpareBarrel", 1] call _addToBackpack;
	};

case ("co"): {
		[_unit, "AGM_Maptools", 1] call _addToBackpack;
	};

case ("dc"): {
		[_unit, "AGM_MapTools", 1] call _addToBackpack;
	};

case ("eng"): {
		[_unit, "AGM_Clacker", 1] call _addToBackpack;
		[_unit, "AGM_DefusalKit", 1] call _addToBackpack;
	};

case ("engm"): {
		[_unit, "AGM_Clacker", 1] call _addToBackpack;
		[_unit, "AGM_DefusalKit", 1] call _addToBackpack;
	};


case ("v_tr"): {

		_unit addItemCargoGlobal ["AGM_Bandage",24];
		_unit addItemCargoGlobal ["AGM_Morphine",4];
		_unit addItemCargoGlobal ["AGM_Epipen",2];

	};

case ("v_car"): {

		_unit addItemCargoGlobal ["AGM_Bandage",12];
		_unit addItemCargoGlobal ["AGM_Morphine",2];
		_unit addItemCargoGlobal ["AGM_Epipen",1];
	};
};