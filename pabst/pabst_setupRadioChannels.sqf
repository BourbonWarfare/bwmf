//START: TFR Settings (PabstMirror) [2014/06/14] [Updated for F3 1.0 RC5]
#define SIDE_ARRAY 				["GrpNATO", "GrpCSAT", "GrpAAF", "GrpFIA"]
#define CHANNELS_ARRAYS			[["ASL","A1", "A2","A3"], ["BSL","B1", "B2","B3"], ["CSL","C1", "C2","C3"], ["CO", "DC"], ["TH1", "TH", "TH3", "TH4", "AH1", "AH2"], ["IFV1", "IFV2", "IFV3", "IFV4", "IFV5", "IFV6", "TNK1"]]

[] spawn {
	if (isDedicated) exitWith {};
	waitUntil {player == player};

	_groupFreqIndex = -1;//Figure out what channel the player's group uses
	{
		_theSide = _x;
		{
			_theGroupArrayIndex = _forEachIndex;
			{
				if ((group player) == (missionNameSpace getVariable [(format ["%1_%2", _theSide, _x]), grpNull])) then {
					_groupFreqIndex = _theGroupArrayIndex;
				};
			} forEach _x;
		} forEach CHANNELS_ARRAYS;
		if (_groupFreqIndex != -1) exitWith {};
	} forEach SIDE_ARRAY;

	if (_groupFreqIndex == -1) then {
		systemChat format ["I have no idea what group you are in"];
		_groupFreqIndex = 0;
	};
	waitUntil {time > 5};

	waitUntil {
		sleep 1;
		_swRadioList = [] call TFAR_fnc_radiosListSorted;
		(!isNil "_swRadioList") && {(count _swRadioList) > 0}
	};
	sleep 1;
	_swRadioList = [] call TFAR_fnc_radiosListSorted;

	{
		[_x, _groupFreqIndex] call TFAR_fnc_setSwChannel;
		systemChat format ["SR Radio [%1] is set to [CH %2]", _x, (_groupFreqIndex + 1)];

	} forEach _swRadioList;
	systemChat "-Radio Setup Complete-";
};
//END: TFR Settings (PabstMirror)
