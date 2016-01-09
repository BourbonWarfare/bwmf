// F3 - SetTime
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// RUN ONLY ON THE SERVER
// This function does never need to run on a client
if !(isServer) exitWith {};

// DECLARE VARIABLES AND FUNCTIONS

// ====================================================================================

// SET KEY VARIABLES
// We interpret the values parsed to the script. If the function was called from the parameters those values are used.

params ["_timeOfDay"];
if (_timeOfDay == -1) exitWith {};
// ====================================================================================

// SET DEFAULT VALUES
// The default values that together form the in-game date are set.

private _year = 2030;
private _month = 6;
private _day = 16;
private _hour = 0;
private _minute = 0;

// ====================================================================================

// SELECT MISSION TIME OF DAY
// Using the value of _timeOfDay, we define new values for _hour and _minute.

switch (_timeOfDay) do {
  // Dawn
  case 0: {
    _hour = 4;
    _minute = 50;
  };
  // Early Morning
  case 1: {
    _hour = 5;
    _minute = 20;
  };
  // Morning
  case 2: {
    _hour = 9;
    _minute = 20;
  };
  // Noon
  case 3: {
    _hour = 12;
    _minute = 00;
  };
  // Afternoon
  case 4: {
    _hour = 15;
    _minute = 30;
  };
  // Evening
  case 5: {
    _hour = 18;
    _minute = 40;
  };
  // Dusk
  case 6: {
    _hour = 19;
    _minute = 10;
  };
  // Night
  case 7: {
    _hour = 0;
    _minute = 0;
  };
};

// ====================================================================================

// CHECK IF TRANSITION IS NEEDED
// If we're changing the date in-mission, set the BIS function to display a smooth transition
// We check the varios dates to make sure we stick with a smart value

private _transition = false;
if (time > 0) then {
  _transition = true;
  date params ["_year", "_month", "_day"];

  if (date select 3 > _hour) then {_day = _day + 1};
  if (_day > 31) then {_day = 1; _month = _month + 1};
  if (_month > 12) then {_month = 1; _year = _year + 1};
};

// ====================================================================================

// SET DATE VARIABLE
// Using the single variables, we construct a new variable _date
_date = [_year, _month, _day, _hour, _minute];

// ====================================================================================

// SET DATE FOR ALL CLIENTS
// Using a BIS function we share the new date across the network
[_date, true, _transition] call BIS_fnc_setDate;

// ====================================================================================
