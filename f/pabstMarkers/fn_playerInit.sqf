F_Markers_lastUpdate = -1000;
F_Markers_thingsToDraw = [];
F_Markers_delay = 3;

if (!hasInterface) exitWith {};

[] spawn {
    if (player != player) then {waitUntil {player == player};};
    if (!alive player) then {waitUntil {alive player};};

    _fnc_installMapEvents = {
        _d = _this select 0;
        // systemChat format ["Installing Draw EH on %1", _d];
        ((finddisplay _d) displayctrl 51) ctrlAddEventHandler ["Draw", {_this call F_Markers_fnc_drawMap;}];
    };

    // Wait until the briefing map is detected
    // display = 12 for ingame mp
    // display = 37 for SP
    // display = 52 for host server on MP;
    // display = 53 for MP clients)

    waitUntil {(!isNull findDisplay 37) || (!isNull findDisplay 52) || (!isNull findDisplay 53) || (!isNull findDisplay 12)};

    if (isNull findDisplay 12) then {
        // Install event handlers on the map control of the briefing screen (control = 51)
        if (!isNull findDisplay 52) then {
            [52] call _fnc_installMapEvents;
        } else {
            if (!isNull findDisplay 53) then {
                [53] call _fnc_installMapEvents;
            } else {
                [37] call _fnc_installMapEvents;
            };
        };
    };

    // Wait until the main map display is detected (display = 12)
    waitUntil { !isNull findDisplay 12 };

    [12] call _fnc_installMapEvents;

    waitUntil {sleep 1;!isNull (uiNamespace getVariable "RscMiniMap")};
    ((uiNamespace getVariable "RscMiniMap") displayctrl 101) ctrlAddEventHandler ["draw", {_this call F_fnc_drawMap}];
    // systemChat "GPS Added";
};
