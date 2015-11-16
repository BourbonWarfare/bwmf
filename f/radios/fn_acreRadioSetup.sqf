params ["_srFreqIndex", "_lrFreqIndex"];

if (isNil "_srFreqIndex") then {
    _srFreqIndex = -1
};
if (isNil "_lrFreqIndex") then {
    _lrFreqIndex = -1
};

//Set Radio Difficulty:
[false] call acre_api_fnc_setInterference;
[0.5] call acre_api_fnc_setLossModelScale;

//Setup babble languages:
F_available_languages = [
    ["en", "English"],
    ["ru", "Russian"],
    ["ar", "Arabic"],
    ["de", "German"],
    ["fr", "French"]
];

{
    _x call acre_api_fnc_babelAddLanguageType;
} forEach F_available_languages;

//Setup radio presets:
["ACRE_PRC148", "default3", "west148"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default3", "west117"] call acre_api_fnc_copyPreset;
["ACRE_PRC343", "default3", "west343"] call acre_api_fnc_copyPreset;

["ACRE_PRC148", "west148", 1, "label", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "west148", 2, "label", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "west148", 3, "label", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "west148", 4, "label", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "west148", 5, "label", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "west148", 6, "label", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "west117", 1, "name", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "west117", 2, "name", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "west117", 3, "name", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "west117", 4, "name", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "west117", 5, "name", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "west117", 6, "name", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC148", "default2", "east148"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default2", "east117"] call acre_api_fnc_copyPreset;
["ACRE_PRC343", "default2", "east343"] call acre_api_fnc_copyPreset;

["ACRE_PRC148", "east148", 1, "label", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "east148", 2, "label", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "east148", 3, "label", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "east148", 4, "label", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "east148", 5, "label", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "east148", 6, "label", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "east117", 1, "name", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "east117", 2, "name", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "east117", 3, "name", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "east117", 4, "name", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "east117", 5, "name", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "east117", 6, "name", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC148", "default4", "indp148"] call acre_api_fnc_copyPreset;
["ACRE_PRC117F", "default4", "indp117"] call acre_api_fnc_copyPreset;
["ACRE_PRC343", "default4", "indp343"] call acre_api_fnc_copyPreset;

["ACRE_PRC148", "indp148", 1, "label", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "indp148", 2, "label", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "indp148", 3, "label", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "indp148", 4, "label", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "indp148", 5, "label", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC148", "indp148", 6, "label", "FIRES"] call acre_api_fnc_setPresetChannelField;

["ACRE_PRC117F", "indp117", 1, "name", "PLTNET 1"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "indp117", 2, "name", "PLTNET 2"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "indp117", 3, "name", "PLTNET 3"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "indp117", 4, "name", "COY"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "indp117", 5, "name", "CAS"] call acre_api_fnc_setPresetChannelField;
["ACRE_PRC117F", "indp117", 6, "name", "FIRES"] call acre_api_fnc_setPresetChannelField;

diag_log text format ["[BW] - ACRE Presets Setup"];

if (hasInterface) then {
    [_srFreqIndex, _lrFreqIndex] call F_Radios_fnc_acreRadioSetPlayerChannels;
};
