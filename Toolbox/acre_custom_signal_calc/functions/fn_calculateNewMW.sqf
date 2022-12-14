params ["_mW", ["_sender", objNull], "_f", "_receiverClass", "_transmitterClass"];
private _senderStrength = 1;
private _mWnew = _mW;
if !(isNull _sender) then {
    _senderStrength = (_sender getVariable ["acre_send_power",1]);
    _mWnew = [_sender, _mWnew, _f] call diw_acre_fnc_getPowerAfterJamming;
};
_mWnew = [acre_player, _mWnew, _f] call diw_acre_fnc_getPowerAfterJamming;
_mWnew = _mWnew * _senderStrength;
private _receiverStrength = acre_player getVariable ["acre_receive_power",1];
_mWnew = _mWnew * _receiverStrength;
if (ACRE_SIGNAL_DEBUGGING > 0) then {
    private _debug = ("Singal: " + _transmitterClass + " to " + _receiverClass + " | F: " + (str _f) + ", mW: " + (str _mW) + " | SenderPower: " + (str _senderStrength) + ", ReceiverPower: " + (str _receiverStrength) + ", NewmW: " + (str _mWnew) + " | Sender: " + (str _sender) );
    if !(isNull _sender) then {
        _debug = _debug + " | Distance: " + (str (acre_player distance _sender) );
    };
    systemChat _debug;
};
_mWnew