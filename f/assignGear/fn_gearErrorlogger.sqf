//PabstMirror:
//["b_soldier_f", "shit sux"] call F_fnc_gearErrorLogger

//Don't waste time on dedicated.  This only runs personaly hosted
if ((!hasInterface) || {!isServer}) exitWith {};

params ["_classname", "_error", "_timeTaken"];

// diag_log text format ["[BW] %1", _this];

if (isNil "F_gearHash") then {F_gearHash = [[], [], []]};

_index = (F_gearHash select 0) find _classname;
_classErrrorArray = [];
_classTimeTaken = [];

if (_index != -1) then {
    _classErrrorArray = (F_gearHash select 1) select _index;
    _classTimeTaken = (F_gearHash select 2) select _index;
} else {
    (F_gearHash select 0) pushBack _classname;
    (F_gearHash select 1) pushBack _classErrrorArray;
    (F_gearHash select 2) pushBack _classTimeTaken;
};


if (_error == "Done") then {
    _classTimeTaken pushBack _timeTaken;
} else {
    //don't add errors we already have
    if (!(_error in _classErrrorArray)) then {
        _classErrrorArray pushBack _error;
    };
};

if (isNil "F_gearPEFH") then {
    diag_log text format ["[BW] - Starting Logger @ %1", diag_tickTime];
    F_gearPEFH = [{
        params ["_args"];
        _args params ["_startTime"];
        if (diag_tickTime < (_startTime + 6)) exitWith {};

        diag_log text format ["[BW] - Logger Dumping @ %1", diag_tickTime];

        [_this select 1] call CBA_fnc_removePerFrameHandler;
        F_gearPEFH = nil;

        if (isNil "F_loggedClasses") then {F_loggedClasses = []};

        _realErrors = 0;
        {
            _classname = _x;
            if (!(_classname in F_loggedClasses)) then {
                F_loggedClasses pushBack _classname;
                _faction = getText (configFile >> "CfgVehicles" >> _classname >> "faction");
                _displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");

                _classErrrorArray = (F_gearHash select 1) select _forEachIndex;
                _classTimeTaken = (F_gearHash select 2) select _forEachIndex;

                _diaryText = format ["%1 (%2)<br/>%3<br/><br/><br/>", _classname, _faction, _displayName];

                //Add Errors
                {
                    _realErrors = _realErrors + 1;
                    _diaryText = _diaryText + format ["* %1<br/><br/>", _x];
                } forEach _classErrrorArray;

                //Add Time Taken
                _sumTime = 0;
                {_sumTime = _sumTime + _x;} forEach _classTimeTaken;
                _avgTime = (floor (10000 * (_sumTime / ((count _classTimeTaken) max 1)))) / 10;
                _diaryText = _diaryText + format ["<br/>AssignGearMan took %1 ms avg<br/>%2", _avgTime, _classTimeTaken];

                //Add To Diary
                _reportName = format ["%1 problems: %2", (count _classErrrorArray), _classname];
                player createDiarySubject ["Loadout Problems", "Loadout Problems"];
                player createDiaryRecord ["Loadout Problems", [_reportName, _diaryText]];
            };
        } forEach (F_gearHash select 0);

        [_realErrors] spawn {
            waitUntil {time > 5};
            hint format ["Check 'Loadout Problems' on breifing\n\n%1 Errors", (_this select 0)];
            systemChat format ["Check 'Loadout Problems' on breifing - %1 Errors", (_this select 0)];
        };
    }, 1, [diag_tickTime]] call CBA_fnc_addPerFrameHandler;
};
