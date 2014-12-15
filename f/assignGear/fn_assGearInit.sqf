//F_fnc_assGearInit

xx1 = time;

if (time < 10) then {
	{
		if (local _x) then {
			[_x] call F_fnc_assignGearTest;
		};
	} forEach allUnits;
};

if (isServer) then {
	[] spawn {
		sleep 10;  //Let everything finish init before looping
		while {true} do {
			sleep 5;
			{
				if (_x isKindOf "Man") then {
					if (!(_x getvariable ["F_gearAssigned", false])) then {
						[[_x], "F_fnc_assignGearTest", _x] call BIS_fnc_MP;
					};
				};
			} foreach allUnits;
			
		};
	};
};