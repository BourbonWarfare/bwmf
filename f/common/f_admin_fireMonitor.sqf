waitUntil {!isNull player};
waitUntil {!isNil "PABST_ADMIN_SAFESTART_public_isSafe" && {PABST_ADMIN_SAFESTART_public_isSafe}};

_player = player;

_bsm_fnc_notify = {
	params ["_firer"];
    _masterAdminList = ["76561197976319415","76561198005847836","76561198089674282","76561198015013044","76561197991686585"];
    _masterUnitList = [];
    {
    	if ((getPlayerUID _x) in _masterAdminList) then {
    		_masterUnitList pushBack _x;
    	};
    } forEach allPlayers;

    _toolText = format["%1 has fired/thrown a weapon.",name _firer];

    _toolText remoteExec ["hint",_masterUnitList];
	_toolText remoteExec ["systemChat",_masterUnitList];

};

_handle = _unit addEventHandler ["fired",_bsm_fnc_notify];
