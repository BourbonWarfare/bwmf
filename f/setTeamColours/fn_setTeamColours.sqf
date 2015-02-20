// F3 - Buddy Team Colours
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

if (!hasInterface) exitWith {};

[] spawn {
    // MAKE SURE THE PLAYER INITIALIZES PROPERLY
    if (player != player) then {waitUntil {player == player};};
    if (!alive player) then {waitUntil {alive player};};

    // ====================================================================================
    // DECLARE PRIVATE VARIABLES
    private ["_unit","_isFireteam","_white","_red","_blue","_yellow","_green"];
    // ====================================================================================

    // SET CUSTOM VARIABLES
    // These variables govern the behaviour of the script

    // Colors will be set for groups of leaders with these suffixes
    _leaders = ["_FTL", "_SL"];

    // ====================================================================================
    sleep 10;	// WAIT UNTIL 10 SECONDS AFTER INITIALIZING

    _unit = player;
    _isFireteam = false;
    // ====================================================================================
    // CHECK GROUP SIZE
    // If the group isn't a full fireteam, leave teams as default.
    {
        if ([_x, format["%1",(leader (group _unit))]] call BIS_fnc_inString) exitWith {_isFireteam = true;}
    } forEach _leaders;

    if(!_isFireteam) exitWith {};

    // Set suffixes for each color
    _white = [];
    _red = [];
    _blue = [];
    _yellow = [];
    _green = [];

    if ((faction _unit) in ["rhs_faction_msv"]) then {
        _white = ["_SL","_FTL","_AR"];
        _red = ["_GR","_AGR"];
        _blue = ["_M","_R"];
        _yellow = ["_VG","_VD"];
        _green = [];
    } else {
        _white = ["_FTL","_AT"];
        _red = [];
        _blue = [];
        _yellow = [];
        _green = [];

        //Pabst: set ft color based on ftl number
        {
            if ([_x, (vehicleVarName _unit)] call BIS_fnc_inString) exitWith {_red = _red + ["_AR","_AAR"];};
        } forEach ["_A1_", "_B1_", "_C1_","_D1_", "_E1_", "_F1_"];

        {
            if ([_x, (vehicleVarName _unit)] call BIS_fnc_inString) exitWith {_blue = _blue + ["_AR","_AAR"];};
        } forEach ["_A2_", "_B2_", "_C2_","_D2_", "_E2_", "_F2_"];

        {
            if ([_x, (vehicleVarName _unit)] call BIS_fnc_inString) exitWith {_green = _green + ["_AR","_AAR"];};
        } forEach ["_A3_", "_B3_", "_C3_","_D3_", "_E3_", "_F3_"];
    };

    // SET TEAM COLOURS
    {
        private ["_unit"];
        _unit = _x;

        {
            if ([_x, format ["%1",_unit]] call BIS_fnc_inString) then {
                _unit assignTeam "RED";
            };
        } forEach _red;
        {
            if ([_x, format ["%1",_unit]] call BIS_fnc_inString) then {
                _unit assignTeam "blue";
            };
        } forEach _blue;
        {
            if ([_x, format ["%1",_unit]] call BIS_fnc_inString) then {
                _unit assignTeam "yellow";
            };
        } forEach _yellow;
        {
            if ([_x, format ["%1",_unit]] call BIS_fnc_inString) then {
                _unit assignTeam "green";
            };
        } forEach _green;
        {
            if ([_x, format ["%1",_unit]] call BIS_fnc_inString) then {
                _unit assignTeam "white";
            };
        } forEach _white;

    } foreach units (group _unit);
};
