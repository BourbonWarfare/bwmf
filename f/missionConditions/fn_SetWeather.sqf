// F3 - SetWeather
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// DECLARE VARIABLES AND FUNCTIONS

// ====================================================================================

// SET KEY VARIABLES
// We interpret the values parsed to the script. If the function was called from the parameters those values are used.

params ["_weather", ["_transition", false]];
if (_weather == -1) exitWith {};

private _MissionOvercast = 0;
private _MissionRain = 0;
private _MissionRainbow = 0;
private _MissionLightnings = 0;
private _MissionWindStr = 0;
private _MissionWindGusts = 0;
private _MissionWaves = 0;
private _MissionHumidity = 0;

// ====================================================================================

// SELECT MISSION WEATHER
// Using the value of _weather, new weather conditions are set.

switch (_weather) do {
  // Clear (Calm)
  case 0: {
    _MissionOvercast = 0.15;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0;
    _MissionWindGusts = 0;
    _MissionWaves = 0;
    _MissionHumidity = 0;
  };
  // Clear (Cloudy & Light Winds)
  case 1: {
    _MissionOvercast = 0.35;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.25;
    _MissionWindGusts = 0.5;
    _MissionWaves = 0.25;
    _MissionHumidity = 0.2;
  };
  // Clear (Cloudy & Strong Winds)
  case 2: {
    _MissionOvercast = 0.35;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.75;
    _MissionWindGusts = 1;
    _MissionWaves = 0.75;
    _MissionHumidity = 0.2;
  };
  // Overcast (Calm)
  case 3: {
    _MissionOvercast = 0.49;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0;
    _MissionWindGusts = 0;
    _MissionWaves = 0.1;
    _MissionHumidity = 0.2;
  };
  // Overcast (Light Winds)
  case 4: {
    _MissionOvercast = 0.49;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.25;
    _MissionWindGusts = 0.5;
    _MissionWaves = 0.25;
    _MissionHumidity = 0.2;
  };
  // Overcast (Strong Winds)
  case 5: {
    _MissionOvercast = 0.49;
    _MissionRain = 0;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.75;
    _MissionWindGusts = 1;
    _MissionWaves = 0.75;
    _MissionHumidity = 0.2;
  };
  // Rain (Light Winds)
  case 6: {
    _MissionOvercast = 1;
    _MissionRain = 1;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.25;
    _MissionWindGusts = 0.5;
    _MissionWaves = 0.75;
    _MissionHumidity = 0.9;
  };
  // Rain (Strong Winds)
  case 7: {
    _MissionOvercast = 1;
    _MissionRain = 1;
    _MissionRainbow = 0;
    _MissionLightnings = 0;
    _MissionWindStr = 0.75;
    _MissionWindGusts = 1;
    _MissionWaves = 0.75;
    _MissionHumidity = 0.9;
  };
  // Storm
  case 8: {
    _MissionOvercast = 1;
    _MissionRain = 1;
    _MissionRainbow = 0;
    _MissionLightnings = 1;
    _MissionWindStr = 1;
    _MissionWindGusts = 1;
    _MissionWaves = 1;
    _MissionHumidity = 1;
  };
};

// ====================================================================================

// SET MISSION WEATHER
// Use new values to set
// mission conditions on server and all clients (including JIP clients).

if (typeName _transition == typeName 0) then {
  _transition setOvercast  _MissionOvercast;
  _transition setRain _MissionRain;
  _transition setRainbow _MissionRainbow;
  _transition setWindStr  _MissionWindStr;
  _transition setWindForce _MissionWindGusts;
  _transition setWaves _MissionWaves;
  _transition setLightnings _MissionLightnings;
} else {
  0 setOvercast _MissionOvercast;
  0 setRain _MissionRain;
  0 setRainbow _MissionRainbow;
  0 setWindStr _MissionWindStr;
  0 setWindForce _MissionWindGusts;
  0 setWaves _MissionWaves;
  0 setLightnings _MissionLightnings;
  forceWeatherChange;
};

// ====================================================================================
