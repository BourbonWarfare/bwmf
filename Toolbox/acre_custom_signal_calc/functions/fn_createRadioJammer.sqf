if !(isServer) exitWith {};
params[["_obj", objNull], ["_power", 1000], ["_frequencies", [[0, 999999]]], ["_effectiveRange", 1000], ["_falloffArea", 500]];
if (isNull _obj) exitWith {};
if !(isNull (_obj getVariable ["jammer_zone", objNull])) exitWith {hintC "Jammer cannot be created ontop of another jammer!"};
private _pos = getPosATL _obj;
private _trg = createTrigger ["EmptyDetector", _pos];
_trg setPosATL _pos;
_trg setVariable ["jammer_active", true, true];
_trg setVariable ["jammer_object", _obj, true];
_trg setVariable ["jammer_effective_radius", _effectiveRange, true];
_trg setVariable ["jammer_falloff_radius", _falloffArea, true];
_trg setVariable ["jammer_power", _power, true];
_trg setVariable ["jammer_frequencies", _frequencies, true];
private _radius = _effectiveRange + _falloffArea;
["diw_setUpJammer", [_trg, _radius]] call CBA_fnc_globalEventJIP;
_obj setVariable ["jammer_zone", _trg, true];
_obj addEventHandler ["Killed", {
    params ["_obj"];
    deleteVehicle (_obj getVariable ["jammer_zone", objNull]);
}];
_trg attachTo [_obj, [0, 0, 0]];
_trg