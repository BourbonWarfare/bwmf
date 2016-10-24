params ["_unit","_corpse"];

if (!isNull _corpse) then {
    // Tag  unit as a spectator
    _unit setVariable ["f_respawnName", name _unit, true];
    _unit setVariable ["f_respawnUID", getPlayerUID _unit, true];
    _unit setVariable ["f_spectator", true, true];

    [_unit] joinSilent grpNull;

    _unit allowDamage false;

    // Add unit to respawnable units temporarily until server sends new data
    _uid = _unit getVariable ["f_respawnUID", ""];
    if (_uid != "") then {
        f_serverRespawnableUnits pushBackUnique _uid;
    };
    
    [_unit,_corpse,3,3,true] call f_fnc_CamInit;
};