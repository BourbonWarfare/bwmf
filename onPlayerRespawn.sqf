params ["_unit","_corpse"];
if (!isNull _corpse) then {
    _unit setVariable ["f_spectator", true, true];
    _uid = _unit getVariable ["f_respawnUID", ""];
    if (_uid != "") then {
        f_serverRespawnableUnits pushBackUnique _uid;
    };
    
    [_unit,_corpse,3,3,true] call f_fnc_CamInit;
};