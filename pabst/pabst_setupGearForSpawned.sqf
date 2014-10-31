//pabst_setupGear.sqf
//This will loop endlessly looking for units that don't have their gear set by F3 (eg: DAC AI)

if (!isServer) exitWith {};

_getUnitGearConfig = {
	_theUnit = _this select 0;
	_unitType = typeOf _theUnit;
	_unitType = [_unitType, 1] call BIS_fnc_trimString;	//trim off 1st charactor (side prefix like [b, o, i])
	_configName = switch (true) do {
	case (_unitType == "_officer_F"): 			{"co"		};//		co			- commander
	case (_unitType == "_Soldier_SL_F"): 		{"dc"		};//		dc 			- deputy commander / squad leader
	case (_unitType == "_Soldier_TL_F"): 		{"ftl"		};//		ftl			- fire team leader
	case (_unitType == "_Soldier_F"): 			{"r"		};//		r 			- rifleman
	case (_unitType == "_soldier_lite_F"): 		{"car"		};//		car			- carabineer
	case (_unitType == "_Soldier_AR_F"): 		{"ar"		};//		ar 			- automatic rifleman
	case (_unitType == "_soldier_AAR_F"): 		{"aar"		};//		aar			- assistant automatic rifleman
	case (_unitType == "_Soldier_LAT_F"): 		{"rat"		};//		rat			- rifleman (AT)
	case (_unitType == "_medic_F"): 			{"m"		};//		m 			- medic
	case (_unitType == "_Soldier_GL_F"): 		{"gren"		};//		gren		- grenadier
	case (_unitType == "_soldier_exp_F"): 		{"gren"		};//		eng			- engineer (demo)
	case (_unitType == "_crew_F"): 				{"vd"		};//		vd			- vehicle driver (repair)
	case (_unitType == "_Helipilot_F"): 		{"pcc"		};//		pcc			- air vehicle co-pilot (repair) / crew chief (repair)
	case (_unitType == "_Soldier_AT_F"): 		{"matg"		};//		matg		- medium AT gunner
	case (_unitType == "_Soldier_AAT_F"): 		{"matag"	};//		matag		- medium AT assistant
	case (_unitType == "_Soldier_AA_F"): 		{"msamg"	};//		msamg		- medium SAM gunner
	case (_unitType == "_Soldier_AAA_F"): 		{"msamag"	};//		msamag		- medium SAM assistant gunner
	case (_unitType == "_soldier_UAV_F"):		{"uav"		};//		uav			- UAV operator
	case (_unitType == "_soldier_M_F"):			{"sn"		};//		sn			- sniper	??? not sure???
	case (_unitType == "_soldier_repair_F"):	{"vd"		};//		vd			- vehicle driver (repair)
	case (_unitType == "_support_MG_F"):		{"mmgg"		};//		mmgg		- medium mg gunner
	case (_unitType == "_support_AMG_F"):		{"mmgag"	};//		mmgag		- medium mg assistant
		default {
			systemChat format ["DEBUG: _unitType %1 - unkown type", _unitType];
			"r"			//default to rifleman
		};
	};
	_configName
};

while {true} do {
	sleep 5;
	{
		if (_x isKindOf "Man") then {
			if (!(_x getvariable ["f_var_assignGear_done", false])) then {
				_faction = toLower (faction _x);
				if (_faction in ["blu_f", "opf_f", "ind_f"]) then {
					_unitConfig = ([_x] call _getUnitGearConfig);
					[[_unitConfig, _x], "f_fnc_assignGear", _x] call BIS_fnc_MP;
				} else {
					//probably a civilian or a custom faction unit
				};
			};					
		};					
	} foreach allUnits;
};