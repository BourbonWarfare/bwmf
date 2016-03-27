disableSerialization;

params ["_gpsDisplay"];
diag_log text format ["[BW] - MiniMap Init [%1]", _gpsDisplay];

//For some reason this is doubled called when opened
if (_gpsDisplay getVariable ["BWMF_mimiMap_added", false]) exitWith {};
_gpsDisplay setVariable ["BWMF_mimiMap_added", true];

(_gpsDisplay displayctrl 101) ctrlAddEventHandler ["draw", {_this call F_Markers_fnc_drawMap}];
