
if (isServer) then {
    //If someone disconnects while speaking, reset their variable
    addMissionEventHandler ["HandleDisconnect", {
        _disconnectedPlayer = _this select 0;
        if (_disconnectedPlayer getVariable ["f_isSpeaking", false]) then {
            _disconnectedPlayer setVariable ["f_isSpeaking", false, true];
        };
    }];
};

if (!hasInterface) exitWith {};


// F3 - Nametags
// Credits: Please see the F3 online manual (http://www.ferstaberinde.com/f3/en/)
// ====================================================================================

// MAKE SURE THE PLAYER INITIALIZES PROPERLY

if (!hasInterface) exitWith {};

_this spawn {
    if (player != player) then {waitUntil {player == player};};
    if (!alive player) then {waitUntil {alive player};};


    [{
        _oldSetting = player getVariable ["f_isSpeaking", false];
        _newSetting = (player getVariable ["tf_isSpeaking", false]) || {!(isNull findDisplay 55)};
        if (!(_oldSetting isEqualTo _newSetting)) then {
            player setVariable ["f_isSpeaking", _newSetting, true];
        };
    }, 0.05, []] call CBA_fnc_addPerFrameHandler;


    // SET GLOBAL VARIABLES

    // MODIFYABLE
    f_size_Nametags = 0.03; // The size the names are displayed in
    f_height_standing_Nametags = 2;
    f_height_crouch_Nametags = 1.5;
    f_height_prone_Nametags = 0.9;
    f_vheight_Nametags = 0; // The height of the name tags for units in vehicles (0 = hovering over vehicle)

    f_color_Nametags =  [1,1,1,0.9]; // The color for infantry and units in vehicle cargo (in [red,green, blue, opacity])
    f_color2_Nametags = [0.5,0.1,0.2,0.9]; // The color for units in driver, gunner and other vehicle positions positions
    f_groupColor_Nametags = [0.73, 0.92, .56, 1]; // The color for units of the same group

    F_FONT_NAMETAGS = "EtelkaMonospaceProBold"; // Font for the names

    // SCRIPTSIDE
    F_DIST_NAMETAGS = _this select 0;

    if (isNil "f_showGroup_Nametags") then {f_showGroup_Nametags = false};
    if (isNil "f_showDistance_Nametags") then {f_showDistance_Nametags = false};
    if (isNil "f_showVehicle_Nametags") then {f_showVehicle_Nametags = false};

    F_DRAW_NAMETAGS = false;

    // Add keybinds
    ["F3 Nametags",
    "Toggle F3 Name Tags",
    {
        if ((!isNil "AGM_NameTags_ShowNamesTime") && {profileNamespace getVariable ["AGM_showPlayerNames", true]}) exitWith {
            hintSilent "AGM Nametags Already On\nDisable To Turn On F3 Tags";
            false
        };
        F_DRAW_NAMETAGS = !F_DRAW_NAMETAGS;

        // Return false so it doesn't block other actions
        false
    },
    [22, [false, false, false]], //U key
    false,
    "keydown"
    ] call cba_fnc_registerKeybind;




    // ====================================================================================
    // the real code.


    addMissionEventHandler ["Draw3D", {
        if (!alive player) exitWith {};
        if(F_DRAW_NAMETAGS) then
        {
            private ["_ents","_veh","_color","_inc","_suffix","_pos","_angle"];

            // Collect all entities in the relevant distance
            _ents = (position player) nearEntities [["CAManBase","LandVehicle","Helicopter","Plane","Ship_F"], F_DIST_NAMETAGS];

            // Start looping through all entities
            {
                // Only display units of players side
                if(((side _x) == (side player)) && {_x != player} && {!(player iskindof "VirtualMan_F")}) then
                {
                    // If the entity is Infantry
                    if(typeof _x iskindof "Man") then {
                        _pos = visiblePosition _x;
                        [_x,_pos] call f_fnc_drawNameTag;
                    } else {  // Else (if it's a vehicle)
                        _veh = _x;
                        _inc = 1;
                        _alternate = 0;

                        {
                            _suffix = "";
                            // Get the various crew slots
                            if(driver _veh == _x) then
                            {
                                _suffix = " - D";
                            };
                            if(gunner _veh == _x) then
                            {
                                _suffix = " - G";
                            };
                            if(commander _veh == _x) then
                            {
                                _suffix = " - C";
                            };
                            if(assignedVehicleRole _x select 0 == "Turret" && commander _veh != _x && gunner _veh != _x && driver _veh != _x) then
                            {
                                _suffix = " - G";
                            };

                            _pos = visiblePosition _x;

                            // If the unit is sitting in the driver position or is the driver
                            if(_pos distance (visiblePosition (driver _veh)) > 0.1 && driver _veh == _x) then
                            {

                                // If it's the driver calculate the cargo slots
                                if(driver _veh == _x) then
                                {
                                    _maxSlots = getNumber(configfile >> "CfgVehicles" >> typeof _veh >> "transportSoldier");
                                    _freeSlots = _veh emptyPositions "cargo";

                                    if (_maxSlots != 0) then {

                                        _suffix = _suffix + format [" (%1/%2)",(_maxSlots-_freeSlots),_maxSlots];

                                        [_x,_pos,_suffix] call f_fnc_drawNameTag;
                                    } else {
                                        [_x,_pos,_suffix] call f_fnc_drawNameTag;
                                    };
                                }
                                else
                                {
                                    [_x,_pos,_suffix] call f_fnc_drawNameTag;
                                };
                            } else {
                                if(_x == gunner _veh) then
                                {
                                    _pos = [_veh modeltoworld (_veh selectionPosition "gunnerview") select 0,_veh modeltoworld (_veh selectionPosition "gunnerview") select 1,(visiblePosition _x) select 2];

                                    [_x,_pos,_suffix] call f_fnc_drawNameTag;
                                }
                                else
                                {
                                    _angle = (getdir _veh)+180;
                                    _pos = [((_pos select 0) + sin(_angle)*(0.6*_inc)) , (_pos select 1) + cos(_angle)*(0.6*_inc),_pos select 2 + F_VHEIGHT_NAMETAGS];

                                    [_x,_pos,_suffix] call f_fnc_drawNameTag;
                                    _inc = _inc + 1;
                                };
                            };
                        } foreach crew _veh;
                    };
                };
            } foreach _ents;
        }; // Outmost if scope
    }]; // End of the Eventhandler Scope
};
