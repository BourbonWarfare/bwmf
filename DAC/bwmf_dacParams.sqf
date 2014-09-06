if ((!isNil "f_param_dacdebug") && {f_param_dacdebug == 1}) then {

  DAC_Com_Values    = [1,2,0,0];
  DAC_Marker = 2;
  }

  else {
  DAC_Com_Values    = [0,0,0,0];
  DAC_Marker = 0;
};