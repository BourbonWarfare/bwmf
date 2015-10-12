params [["_faction", "", [""]]];

if (_faction == "") exitWith {systemChat "bad input"};

_loadOuts = [];
//If it's a unit name just use it, otherwise get the factions
if (_faction isKindOf "CaManBase") then {
    _loadOuts = [_faction];
} else {
    _loadOuts = configProperties [(missionConfigFile >> "CfgLoadouts" >> _faction), "(configName _x) isKindOf 'CaManBase'"];
};

[{
    params ["_args", "_pfID"];
    _args params ["_faction", "_loadOuts", "_created", "_stable", "_startTime", "_startFrame"];

    if (!_created) then {
        //Cleanup
        removeAllWeapons player;
        {if (_x != player) then {deleteVehicle _x}} forEach allUnits;
        {deleteVehicle _x} forEach vehicles;
        {if (_x != (group player)) then {deleteGroup _x}} forEach allGroups;

        player setPos [-3, -3, 0];
        player setDir 45;


        setViewDistance 1000;
        setObjectViewDistance 1000;

        startLoadingScreen ["Making Units"];
        _startTime = diag_tickTime;

        PBR_benchmarkUnits = [];
        _group = createGroup west;
        for "_index" from 0 to 119 do {
            _classname = configName (_loadOuts call BIS_fnc_selectRandom);
            systemChat format ["%1 - %2", _index, _classname];

            _xIndex = _index % 10;
            _yIndex = floor (_index / 10);
            _pos = [2.5 * _xIndex, 2.5 * _yIndex, 0];
            _unit = _group createUnit [_classname, _pos, [], 0, "FORM"];
            _unit setPos _pos;
            _unit setDir (random 360);
            PBR_benchmarkUnits pushBack _unit;
            _unit enableSimulation false;
        };

        _endTime = diag_tickTime;
        endLoadingScreen;

        hint format ["%1 units Created\nin %2ms\n allUnits %3", count PBR_benchmarkUnits, floor 1000 * (_endTime - _startTime), count allUnits];
        _created = true;
        _startTime = diag_tickTime;
        _args set [2, _created];
        _args set [4, _startTime];
    } else {
        if (!_stable) then {
            systemChat format ["[%1/15] Waiting for stability... (%2 FPS)", floor (diag_tickTime - _startTime), diag_fps];
            if (diag_tickTime > (_startTime + 15)) then {
                systemChat format ["starting (%1)", diag_fps];
                _stable = true;
                _startTime = diag_tickTime;
                _startFrame = diag_frameno;
                _args set [3, _stable];
                _args set [4, _startTime];
                _args set [5, _startFrame];
            };
        } else {
            if (diag_tickTime < (_startTime + 20)) then {
                systemChat format ["[%1/20] Running Test... (%2 FPS)", floor (diag_tickTime - _startTime), diag_fps];
            } else {
                [_pfID] call CBA_fnc_removePerFrameHandler;

                _endTime = diag_tickTime;
                _endFrame = diag_frameno;
                _time = _endTime - _startTime;
                _frames = _endFrame - _startFrame;

                copyToClipboard format ["Done %1 - FPS %2 on %3 units", _faction, (_frames / _time), count PBR_benchmarkUnits];
                systemChat format ["Done %1 - FPS %2 on %3 units", _faction, (_frames / _time), count PBR_benchmarkUnits];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
                diag_log text format ["Done %1 - FPS %2 on %3 units", _faction, (_frames / _time), count PBR_benchmarkUnits];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
                diag_log text format ["~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"];
            };
        };
    };
}, 1, [_faction, _loadOuts, false, false, -1, -1]] call CBA_fnc_addPerFrameHandler;
