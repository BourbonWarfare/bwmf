//START: TFR Settings (PabstMirror) [2014/06/14] [Updated for F3 1.0 RC5]
#define SIDE_ARRAY 				["GrpNATO", "GrpCSAT", "GrpAAF", "GrpFIA"]
#define CHANNELS_ARRAYS			[["ASL","A1", "A2","A3"], ["BSL","B1", "B2","B3"], ["CSL","C1", "C2","C3"], ["CO", "DC"], ["TH1", "TH", "TH3", "TH4", "AH1", "AH2"], ["IFV1", "IFV2", "IFV3", "IFV4", "IFV5", "IFV6", "TNK1"]]

	[] spawn {
		if (!hasInterface) exitWith {};
		waitUntil {player == player};
		
		_setupFreqs = {
			sleep 0.25;
			
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
				systemChat format ["PabstRadioSetup: Can't detect group"];
				_groupFreqIndex = 0;
			};

			_swRadioList = player call TFAR_fnc_radiosListSorted;
			
			{ 
				if ((_forEachIndex == 0) || (_forEachIndex < ((count _swRadioList) - 1))) then {	//First Or No Last)
					[_x, _groupFreqIndex] call TFAR_fnc_setSwChannel;
					systemChat format ["SR Radio [%1] is set to [CH %2]", _x, (_groupFreqIndex + 1)];
				} else {
					[_x, 3] call TFAR_fnc_setSwChannel;	//Don't really use this way anymore, but will leave it in
					systemChat format ["Last SR Radio [%1] is set to Command [CH 4]", _x];
				};
			} forEach _swRadioList;
			
		};
		
		["PabstRadioSetup", "OnRadiosReceived", _setupFreqs, player] call TFAR_fnc_addEventHandler;
	};
//END: TFR Settings (PabstMirror)
