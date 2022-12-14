params["_unit", "_power", "_frequency"];
if (_power <= 0.01) exitWith {0.01};
private _pwr = 0;
{
    private _jammer = _x;
    private _affected = false;
    {
        if (_x isEqualType []) then {
            _affected = _frequency >= (_x # 0) && {_frequency <= (_x # 1)};
        } else {
            _affected = (_x == _frequency);
        };
        if (_affected) then {
            break;
        };
    } forEach (_jammer getVariable ["jammer_frequencies",[]]);
    if (_affected) then {
        private _loopPwr = _jammer getVariable ["jammer_power", 0];
        private _dist = _unit distance2D _jammer;
        private _effectiveRadius = _jammer getVariable ["jammer_effective_radius", 0];
        if (_dist > _effectiveRadius) then {
            private _fallOffRadius = _jammer getVariable ["jammer_falloff_radius", 0];
            private _m = (_loopPwr/ -_fallOffRadius);
            _loopPwr = _m * _dist + ((_effectiveRadius + _fallOffRadius) * -_m);
        };
        if (_loopPwr > _pwr) then {
            _pwr = _loopPwr;
        };
    };
} forEach (_unit getVariable ["jammers", []]);
_power = _power - _pwr;
_power max 0.01
