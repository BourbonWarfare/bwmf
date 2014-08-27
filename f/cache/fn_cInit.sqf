// F3 - Caching Script Init
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// Check whether the paramater is defined (or caching switched off)) - if not, just exit
if (isNil "f_param_caching" || {f_param_caching == 0}) exitWith {};

// ====================================================================================

// Wait for the mission to have launched before starting to cache.
sleep 0.1;

// Wait up to the desired time into the mission to give AI and players time to settle
waitUntil {time > (_this select 0)};

// ====================================================================================

// Player and the headless client's (if present) groups are always excluded from being cached
if (!isDedicated && !(group player getVariable ["f_cacheExcl", false])) then {
        (group player) setVariable ["f_cacheExcl", true, true];
};

// ====================================================================================

// Rest of the Script is only run server-side
if !(isServer) exitWith {};

// ====================================================================================

// Make sure script is only run once
if (missionNameSpace getVariable ["f_cInit", false]) exitWith {};
f_cInit = true;

// ====================================================================================

// All groups with playable units are set to be ignored as well
{
	if ({_x in playableUnits} count units _x > 0) then {_x setVariable ["f_cacheExcl",true,true];};
} forEach allGroups;

// Define parameters
_range = f_param_caching;	// The range outside of which to cache units
_sleep = 6; 				// The time to sleep between checking

[_range, _sleep] spawn f_fnc_cTracker;

true