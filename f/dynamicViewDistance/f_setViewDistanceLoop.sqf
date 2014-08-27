// F3 - Dynamic View Distance
// Credits: Modified by Zerith -  Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// PLAYER-ONLY COMPONENT
// No need to run this on the server

if (isDedicated) exitWith {};

// ====================================================================================

// MAKE SURE THE PLAYER INITIALIZES PROPERLY

if (!isDedicated && (isNull player)) then
{
    waitUntil {sleep 0.1; !isNull player};
};

// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS

private ["_sleep"];

// ====================================================================================

// SETUP KEY VARIABLES
// The sleep governs how often the scripts checks if the player has changed the vehicle

_sleep = 30;

// ====================================================================================

// SET VIEW DISTANCE


	setViewDistance f_var_viewDistance_default;


	sleep _sleep;


