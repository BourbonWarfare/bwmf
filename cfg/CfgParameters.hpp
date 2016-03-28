// F3 - Start of Params code blocks.
// WARNING: DO NOT DELETE OR COMMENT OUT THIS CODE BLOCK
class Params {
  // F3 - Mission Conditions Selector
  // Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
  class f_param_weather {
    title = "Weather";
    values[] = {-1,0,1,2,3,4,5,6,7,8};
    texts[] = {"Leave it the fuck alone", "Clear (Calm)", "Cloudy (Light Winds)", "Cloudy (Strong Winds)", "Overcast (Calm)", "Overcast (Light Winds)", "Overcast (Strong Winds)", "Rain (Light Winds)", "Rain (Strong Winds)", "Storm"};
    default = -1;
    function = "f_fnc_setWeather";        // This function is called to apply the values
    isGlobal = 0;                        // Execute this only on the server
    code = "f_param_weather = %1";
  };
  class f_param_fog {
    title = "Fog";
    values[] = {-1,0,1,2};
    texts[] = {"Leave it the fuck alone", "None","Light","Heavy"};
    default = -1;
    function = "f_fnc_SetFog";            // This function is called to apply the values
    isGlobal = 0;                        // Execute this only on the server
    code = "f_param_fog = %1";
  };
  class f_param_timeOfDay {
    title = "Time of Day";
    values[] = {-1,0,1,2,3,4,5,6,7};
    texts[] = {"Leave it the fuck alone", "Dawn", "Early Morning", "Morning", "Noon", "Afternoon", "Evening", "Dusk", "Night"};
    default = -1;
    function = "f_fnc_setTime";            // This function is called to apply the values
    isGlobal = 0;                        // Execute this only on the server
    code = "f_param_timeOfDay = %1";
  };
};
