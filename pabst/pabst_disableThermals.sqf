//Pabst disable thermal weapons loop
[] spawn {
	while {true} do {
		{
			if !(_x getVariable ["thermalsDisabled", false])	then {
				_x setVariable ["thermalsDisabled", true];
				_x disableTIEquipment true;
			};
		} forEach vehicles;  sleep 3;
	};
};