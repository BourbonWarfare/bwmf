//Pabst ORBAT

if (!hasInterface) exitWith {};

[] spawn {
    uiSleep 10;

    //private ["_diaryHyperlinkedText", "_groups", "_precompileGroups"];


    _diaryHyperlinkedText =  format ["Only accurate at mission start."];

    {
        if (({isPlayer _x} count (units _x)) > 0) then {
            if (((side _x) getFriend playerside) > 0.6) then {
                _color = switch (side _x) do {
                case (west): {"#0088EE"};//0,0.45,0.9,1
                case (east): {"#DD0000"};//[0.75,0,0,1]
                case (resistance): {"#00DD00"};//[0,0.75,0,1]
                case (civilian): {"#880099"};//[0.6,0,0.75,1]
                    default {"#FFFFFF"};
                };
                _diaryHyperlinkedText = _diaryHyperlinkedText + format ["<br/><font color='%1' size='16'>%2</font><br/>", _color, (groupID _x)];
                {
                    _xIcon = gettext (configfile >> "CfgVehicles" >> typeOf (vehicle _x) >> "icon");
                    _image = gettext (configfile >> "CfgVehicleIcons" >> _xIcon);
                    _diaryHyperlinkedText = _diaryHyperlinkedText + format ["<img image='%1' width='16' height='16'/><font size='14'>%2</font><br/>", _image, (name _x)];
                } forEach (units _x);
            };
        };
    } forEach allGroups;

    player createDiaryRecord ["diary", ["ORBAT", _diaryHyperlinkedText]];
};
