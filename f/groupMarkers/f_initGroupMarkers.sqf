private ["_unitfaction","_style"];

// ====================================================================================

// MAKE SURE THE PLAYER INITIALIZES PROPERLY

if (!isDedicated && (isNull player)) then
{
    waitUntil {sleep 0.1; !isNull player};
};

// ====================================================================================

// DETECT PLAYER FACTION
// The following code detects what faction the player's slot belongs to, and stores
// it in the private variable _unitfaction
_unitfaction = "";
if(count _this == 0) then
{
	_unitfaction = toLower (faction player);

	// If the unitfaction is different from the 	group leader's faction, the latters faction is used
	if (_unitfaction != toLower (faction (leader group player))) then {_unitfaction = toLower (faction (leader group player))};
}
else
{
	_unitfaction = (_this select 0);
};

// ====================================================================================
// init

f_grpMkr_groups = [];
f_grpMkr_data = [];
f_grpMkr_id = 0;
f_grpMkr_delay = 3;
// ====================================================================================
// add the handlers to catch the map.
// Briefing
[] spawn {
	if(isServer) then
	{
		waitUntil {!isNull (findDisplay 52)};
		 ((findDisplay 52) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];

	}
	else
	{
		waitUntil {!isNull (findDisplay 53)};
		 ((findDisplay 53) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];
	};
};

// Ingame Map
[] spawn {
	waitUntil {!isNull (findDisplay 12)};
	((findDisplay 12) displayctrl 51) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];
	waitUntil {sleep 1;!isNull (uiNamespace getVariable "RscMiniMap")};
	((uiNamespace getVariable "RscMiniMap") displayctrl 101) ctrlAddEventHandler ["draw",{_this call F_fnc_drawGroupMarkers}];
	systemChat "attached gps";
};

[_unitfaction] call f_fnc_setupGroupMarkers;