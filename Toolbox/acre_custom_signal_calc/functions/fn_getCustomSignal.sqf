#include "\idi\acre\addons\sys_signal\script_component.hpp"
/*
 * Author: ACRE2Team
 * Core function for calling the signal calculation (extension) with support for multiple signal models.
 * Edited by diwako for custom signal strength
 *
 * Arguments:
 * 0: Frequency <NUMBER>
 * 1: Power <NUMBER>
 * 2: Receiving Radio ID <STRING>
 * 3: Transmitting Radio ID <STRING>
 *
 * Return Value:
 * Tuple of power and maximum signal strength <ARRAY>
 *
 * Example:
 * [2400, 100, "acre_prc343_id_1", "acre_prc343_id_2"] call diw_acre_fnc_getCustomSignal
 *
 * Public: No
 */
params ["_f", "_mW", "_receiverClass", "_transmitterClass"];
private _count = (missionNamespace getVariable [_transmitterClass + "_running_count", 0]) max 0;
if (_count == 0) then {
    private _rxAntennas = [_receiverClass] call EFUNC(sys_components,findAntenna);
    private _txAntennas = [_transmitterClass] call EFUNC(sys_components,findAntenna);
    _mW = [_mW, _txAntennas select 0 select 1, _f, _receiverClass, _transmitterClass] call diw_acre_fnc_calculateNewMW;
    {
        private _txAntenna = _x;
        {
            private _rxAntenna = _x;
            private _model = GVAR(signalModel); 
            if (_model > SIGNAL_MODEL_ITWOM || {_model < SIGNAL_MODEL_CASUAL}) then {
                _model = SIGNAL_MODEL_LOS_MULTIPATH;  
                GVAR(signalModel) = _model;           
            };
            _count = _count + 1;
            private _id = format ["%1_%2_%3_%4", _transmitterClass, (_txAntenna select 0), _receiverClass, (_rxAntenna select 0)];
            [
                "process_signal",
                [
                    _model,
                    _id,
                    (_txAntenna select 2),
                    (_txAntenna select 3),
                    (_txAntenna select 0),
                    (_rxAntenna select 2),
                    (_rxAntenna select 3),
                    (_rxAntenna select 0),
                    _f,
                    _mW,
                    GVAR(terrainScaling),
                    diag_tickTime,
                    ACRE_SIGNAL_DEBUGGING,
                    GVAR(omnidirectionalRadios)
                ],
                2,
                FUNC(handleSignalReturn),
                [_transmitterClass, _receiverClass]
            ] call EFUNC(sys_core,callExt);
        } forEach _rxAntennas;
    } forEach _txAntennas;
    missionNamespace setVariable [_transmitterClass + "_running_count", _count];
};
private _maxSignal = missionNamespace getVariable [_transmitterClass + "_best_signal", -992];
private _Px = missionNamespace getVariable [_transmitterClass + "_best_px", 0];
if (ACRE_SIGNAL_DEBUGGING > 0) then {
    private _signalTrace = missionNamespace getVariable [_transmitterClass + "_signal_trace", []];
    _signalTrace pushBack _maxSignal;
    missionNamespace setVariable [_transmitterClass + "_signal_trace", _signalTrace];
};
[_Px, _maxSignal]