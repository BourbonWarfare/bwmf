if (time < 1) exitWith {
  hint "Please wait until the mission has started to reinitialize your radios";
};

if (isNil "F_Radios_fnc_acreRadioSetup") exitWith {
  hint "The function to reinitialize your radios could not be found";
}
else {
  [] call F_Radios_fnc_acreRadioSetup;
};
