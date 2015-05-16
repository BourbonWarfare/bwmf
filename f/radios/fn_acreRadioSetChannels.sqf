#define CHANNELS_ARRAYS	 [ \
    ["ASL","A1", "A2","A3"], \
    ["BSL","B1", "B2","B3"], \
    ["CSL","C1", "C2","C3"], \
    ["1PLT","MMG1","MMG2","MAT1","MAT2"], \
    ["COY","TH1", "TH2", "TH3", "TH4", "AH1"], \
    ["DSL","D1", "D2","D3"], \
    ["ESL","E1", "E2","E3"], \
    ["FSL","F1", "F2","F3"], \
    ["2PLT"] \
    ]

if (!hasInterface) exitWith {};

diag_log text format ["[BW] - Seting Channels for player"];

[] spawn {
    if (player != player) then {waitUntil {player == player};};
    if (!alive player) then {waitUntil {alive player};};
    waitUntil {[] call acre_api_fnc_isInitialized};
    systemChat "[ACRE] - init finished";

    _groupID = (group player) getVariable ["F3_GroupID", "-1"];
    _groupFreqIndex = -1;

    if (_groupID != "-1") then {
        _splitName = [_groupID, " "] call BIS_fnc_splitString;
        if ((count _splitName) > 2) then {
            _groupName = (_splitName select 1);
            {
                if (_groupName in _x) exitWith { _groupFreqIndex = _forEachIndex; };
            } forEach CHANNELS_ARRAYS;
        };
    };

    if (_groupFreqIndex == -1) then {
        systemChat format ["Unknown Group (Using Default) [%1]", _groupID];
        _groupFreqIndex = 0;
    };

    _radio343 = ["ACRE_PRC343"] call acre_api_fnc_getRadioByType;
    if ((!isNil "_radio343") && {_radio343 != ""}) then {
        systemChat format ["[%1] is set to CH [%2]", _radio343, (_groupFreqIndex + 1)];
        [_radio343, (_groupFreqIndex + 1)] call acre_api_fnc_setRadioChannel;
    };

    // {
    // (["ACRE_PRC117F"] call acre_api_fnc_getRadioByType), 4] call acre_api_fnc_setRadioChanne
    // [_x, _groupFreqIndex] call TFAR_fnc_setSwChannel;
    // systemChat format ["SR Radio [%1] is set to [CH %2]", _x, (_groupFreqIndex + 1)];
    // } forEach (player call TFAR_fnc_radiosListSorted);

    // _lrChannel = switch (_groupFreqIndex) do {
    // case (0): {3}; //Alpha
    // case (1): {3}; //Bravo
    // case (2): {3}; // Charlie
    // case (3): {4}; // 1PLT
    // case (4): {4}; // COY
    // case (5): {8}; // Delta
    // case (6): {8}; // Echo
    // case (7): {8}; // Foxtrot
    // case (8): {4}; // 2PLT
    // default {0};
    // };


    // _lrRadioArray = player call TFAR_fnc_backpackLR;
    // if ((count _lrRadioArray) == 2) then {
    // [(_lrRadioArray select 0), (_lrRadioArray select 1), _lrChannel] call TFAR_fnc_setLrChannel;
    // };
    systemChat "-Radio Setup Complete-";

};
