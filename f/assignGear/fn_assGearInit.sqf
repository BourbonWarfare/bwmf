//F_fnc_assGearInit

if (time < 0) then {
	{
		if (local _x) then {
			[_x] call F_fnc_assignGearTest;
		};
	} forEach allUnits;
};

if (isServer) then {
	[] spawn {
		while {true} do {
			sleep 5;
			{
				if (_x isKindOf "Man") then {
					if (!(_x getvariable ["PabstGearFixed", false])) then {
						[[_x], "F_fnc_assignGearTest", _x] call BIS_fnc_MP;
					};
				};
			} foreach allUnits;
			
		};
	};
};