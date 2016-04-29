class Params {
  // F3 - Mission Conditions Selector
  class f_param_weather {
    title = "Weather";
    values[] = {-1,0,1,2,3,4,5,6,7,8};
    texts[] = {"Leave it the fuck alone", "Clear (Calm)", "Cloudy (Light Winds)", "Cloudy (Strong Winds)", "Overcast (Calm)", "Overcast (Light Winds)", "Overcast (Strong Winds)", "Rain (Light Winds)", "Rain (Strong Winds)", "Storm"};
    default = -1;
    function = "f_fnc_setWeather";
    isGlobal = 0;
    code = "f_param_weather = %1";
  };
  class f_param_fog {
    title = "Fog";
    values[] = {-1,0,1,2};
    texts[] = {"Leave it the fuck alone", "None","Light","Heavy"};
    default = -1;
    function = "f_fnc_SetFog";
    isGlobal = 0;
    code = "f_param_fog = %1";
  };
  class f_param_timeOfDay {
    title = "Time of Day";
    values[] = {-1,0,1,2,3,4,5,6,7};
    texts[] = {"Leave it the fuck alone", "Dawn", "Early Morning", "Morning", "Noon", "Afternoon", "Evening", "Dusk", "Night"};
    default = -1;
    function = "f_fnc_setTime";
    isGlobal = 0;
    code = "f_param_timeOfDay = %1";
  };
};
