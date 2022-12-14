params["_trigger", ["_unit", acre_player], ["_add", false]];
private _jammers = _unit getVariable ["jammers", []];
if (_add) then {
    _jammers pushBack _trigger;
} else {
    _jammers = _jammers - [_trigger];
};
_unit setVariable ["jammers", _jammers, true];