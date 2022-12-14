// AI Identity script created by Pabst Mirror, ArgoChris and kORIN
// file created and modified by watermelon

/**
 *	To use this script, paste it in the init.sqf of a mission folder.
 *	Note that this scripts run for every AI soldier shortly after creation.
 */

// ArgoChris' set identity function
["argo_fnc_setId", {
    params ["_unit", "_face", "_voice"];
    _unit setSpeaker _voice;
    _unit setFace  _face;
}] call CBA_fnc_addEventHandler;

// check if running on server
if (isServer) then {
	/**
	 *	Change the _facelist and _voicelist arrays.
	 *	List of identities can be found on the cfgIdentity page on the BIS forums: https://community.bistudio.com/wiki/Arma_3:_CfgIdentities
	 */
	
	// this portion sets the unit identity of all OPFOR soldiers
    ["SoldierEB", "Init", {
        params ["_unit"];
        private _facelist = ["PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03"];
        private _face = selectRandom _facelist;
        private _voicelist = ["Male01PER","Male02PER","Male03PER"];
        private _voice = selectRandom _voicelist;

        [{
            ["argo_fnc_setId", _this] call CBA_fnc_globalEventJIP;
        }, [_unit, _face, _voice], 1] call CBA_fnc_waitAndExecute;
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
	
	// this portion sets the unit identity of all BLUFOR soldiers
    ["SoldierWB", "Init", {
        params ["_unit"];
        private _facelist = ["WhiteHead_01","WhiteHead_02","WhiteHead_03"];
        private _face = selectRandom _facelist;
        private _voicelist = ["Male01ENG","Male02ENG","Male03ENG"];
        private _voice = selectRandom _voicelist;

        [{
            ["argo_fnc_setId", _this] call CBA_fnc_globalEventJIP;
        }, [_unit, _face, _voice], 1] call CBA_fnc_waitAndExecute;
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
	
	// this portion sets the unit identity of all INDFOR soldiers
    ["SoldierGB", "Init", {
        params ["_unit"];
        private _facelist = ["GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03"];
        private _face = selectRandom _facelist;
        private _voicelist = ["Male01GRE","Male02GRE","Male03GRE"];
        private _voice = selectRandom _voicelist;

        [{
            ["argo_fnc_setId", _this] call CBA_fnc_globalEventJIP;
        }, [_unit, _face, _voice], 1] call CBA_fnc_waitAndExecute;
    }, nil, nil, true] call CBA_fnc_addClassEventHandler;
};