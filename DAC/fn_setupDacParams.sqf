//Check HC for 1.36 Headless Client
if (isNil "ws_param_hc") then {ws_param_hc = "ws_param_hc" call BIS_fnc_getParamValue;};  //ws_param_hc from description.ext/Params
isAIcontroller = if ((!isMultiplayer) || (isNil "HC_SLOT_1")) then {
    isServer;
} else {
    switch (ws_param_hc) do {
    case (0): {isServer}; 								//param == "off"
    case (1): {(!isServer) && {player == HC_SLOT_1}};	//param == "auto"
    };
};


if ((!isNil "f_param_dacdebug") && {f_param_dacdebug == 1}) then {
    DAC_Com_Values    = [1,2,0,0];
    DAC_Marker = 2;
} else {
    DAC_Com_Values    = [0,0,0,0];
    DAC_Marker = 0;
};
