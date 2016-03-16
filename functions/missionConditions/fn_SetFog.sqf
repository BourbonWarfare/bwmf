// F3 - SetFog
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS

// ====================================================================================

// SET KEY VARIABLES
// We interpret the values parsed to the script. If the function was called from the parameters those values are used.

params ["_fog", ["_transition", 0, [0]]];
if (_fog == -1) exitWith {};

private _strength = 0;    // Value for fog at base level
private _decay = 0;     // Decay of fog density with altitude. If set to 0 fog strength is consistent throughout.
private _base = 0;         // Base altitude of fog (in meters). Up until this height fog does *not* loose density.

// ====================================================================================

// SELECT FOG VALUES
// Using the value of _fog, new fog values are set.

switch (_fog) do {
  //None
  case 0: {
    _strength = 0;
    _decay = 0;
    _base = 0;
  };

  //Light
  case 1: {
    _strength = 0.2;
    _decay = 0;
    _base = 0;
  };

  //Heavy
  case 2: {
    _strength = 0.4;
    _decay = 0;
    _base = 0;
  };
};

// ====================================================================================

// SET MISSION CONDITIONS
// Use the new values to set the transition across the network

_transition setFog [_strength, _decay, _base];

// ====================================================================================
