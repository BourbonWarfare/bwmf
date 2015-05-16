// ["ACRE_PRC148", "default", "148preset"] call acre_api_fnc_copyPreset;
// ["ACRE_PRC117F", "default", "117preset"] call acre_api_fnc_copyPreset;

// ["ACRE_PRC148", "148preset", 1, "label", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC148", "148preset", 2, "label", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC148", "148preset", 3, "label", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC148", "148preset", 4, "label", "COY"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC148", "148preset", 5, "label", "CAS"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC148", "148preset", 6, "label", "FIRES"] call acre_api_fnc_setPresetChannelField;

// ["ACRE_PRC117F", "117preset", 1, "name", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC117F", "117preset", 2, "name", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC117F", "117preset", 3, "name", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC117F", "117preset", 4, "name", "COY"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC117F", "117preset", 5, "name", "CAS"] call acre_api_fnc_setPresetChannelField;
// ["ACRE_PRC117F", "117preset", 6, "name", "FIRES"] call acre_api_fnc_setPresetChannelField;

// ["ACRE_PRC148", "148preset"] call acre_api_fnc_setPreset;
// ["ACRE_PRC117F", "117preset"] call acre_api_fnc_setPreset;

diag_log text format ["[BW] - ACRE Presets Setup"];

if (hasInterface) then {
    [] call F_Radios_fnc_acreRadioSetChannels;
};