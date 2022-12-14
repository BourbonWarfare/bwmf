if !(hasInterface) exitWith {};
["diw_setUpJammer", {
    params [["_trg", objNull], "_radius"];
    if (isNull _trg) exitWith {};
    _trg setTriggerArea [_radius, _radius, 0, false, _radius];
    _trg setTriggerActivation ["ANY", "PRESENT", true];
    _trg setTriggerStatements ["this && {thisTrigger getVariable ['jammer_active', false] && {alive (thisTrigger getVariable ['jammer_object', objNull]) && {acre_player in thisList}}}", "[thisTrigger, acre_player, true] call diw_acre_fnc_addJammerToPlayer", "[thisTrigger, acre_player, false] call diw_acre_fnc_addJammerToPlayer"];
}] call CBA_fnc_addEventHandler;
