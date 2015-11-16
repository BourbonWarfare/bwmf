fn_respawnMenuInit = {
    disableSerialization;
    deadPlayerList = [];
    selectedRespawnGroup = [];
    
    // SelectedRespawnGroup format 
    // Rank: Int (0-6), Object: Player, Role: Int (0 -> count respawnMenuRoles)
    {
        if (isPlayer _x) then {
            deadPlayerList pushBack _x;  
        };
    } forEach ([0,0,0] nearEntities ["VirtualCurator_F",500]);
    
    //Faction selection control
    _control = ((findDisplay 26893) displayCtrl 26894);
    for [{_i = 0}, {_i < (count respawnMenuFactions)}, {_i = _i + 1}] do {
        _factionArray = respawnMenuFactions select _i;
        _control lbAdd (_factionArray select 1);
        _factionImg = getText (configfile >> "CfgFactionClasses" >> (_factionArray select 0) >> "icon");
        if (_factionImg != "") then {
            _control lbSetPicture[_i, _factionImg];
        };
    };
    _control lbSetCurSel 0;
    
    //Group name selection control
    _control = ((findDisplay 26893) displayCtrl 26898);
    for [{_i = 0}, {_i < (count respawnMenuGroupNames)}, {_i = _i + 1}] do {
        _groupNameArray = respawnMenuGroupNames select _i;
        _control lbAdd (_groupNameArray select 0);
    };
    _control lbSetCurSel 0;

    //Default Role listbox
    _control = ((findDisplay 26893) displayCtrl 26896);
    {
        _control lbAdd (_x select 1);
    } forEach respawnMenuRoles;
    _control lbSetCurSel 0;
    
    //Default Rank listbox
    _control = ((findDisplay 26893) displayCtrl 26897);
    _control lbAdd "Pvt.";
    _control lbAdd "Cpl.";
    _control lbAdd "Sgt.";
    _control lbAdd "Lt.";
    _control lbAdd "Cpt.";
    _control lbAdd "Mjr.";
    _control lbAdd "Col.";
    _control lbSetPicture[0,"\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa"]; 
    _control lbSetPicture[1,"\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"];
    _control lbSetPicture[2,"\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"];
    _control lbSetPicture[3,"\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa"];
    _control lbSetPicture[4,"\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa"];
    _control lbSetPicture[5,"\A3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa"];
    _control lbSetPicture[6,"\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"];
    _control lbSetCurSel 0;
    
   [] call fn_update_deadListbox;
};

fn_update_deadListBox = {
    disableSerialization;
    
    [] call fn_reloadDeadPlayers;
    
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    lbClear _deadListBox;
     _i = 0;
    {
        _found = false;
        //Check if already selected and thus in the selected respawn listBox.
        _player = _x;
        {
            if (_player == (_x select 1)) exitWith {
              _found = true;  
            };
        } forEach selectedRespawnGroup;
        
        if (!_found) then {
            _deadTimer = serverTime - (_x getVariable ["timeOfDeath", serverTime]);
            _minute = ((toString [_deadTimer / 60]) splitString ".") select 0;
            _second = _deadTimer % 60;
            _deadListBox lbAdd (format ["%1m %2s - %3", _minute, _second, name _x]);
            _deadListBox lbSetData[_i, str getPlayerUID _x];
            _i = _i + 1;
        };
    } forEach deadPlayerList;
};

fn_update_aliveListBox = {
    disableSerialization;
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    lbClear _groupListBox;

    for [{_i = 0}, {_i < (count selectedRespawnGroup)}, {_i = _i + 1}] do {
        _player = selectedRespawnGroup select _i;
        _groupListBox lbAdd format["%1 - %2", name (_player select 1), (respawnMenuRoles select (_player select 2)) select 1];
        
        //Set image based on rank
        switch(_player select 0) do {
            case 0 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa"]; };
            case 1 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"]; };
            case 2 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"]; };
            case 3 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa"]; };
            case 4 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa"]; };
            case 5 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa"]; };
            case 6 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"]; };
            default { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa"]; };
        };
        _groupListBox lbSetColor [_i, [1, 1, 1, 1]];
        _groupListBox lbSetPictureColor [_i, [1,1,1,0.7]];
        _groupListBox lbSetPictureColorSelected [_i, [1,1,1,1]];
    };
};

fn_respawnMenuAddAction = {
    disableSerialization;
    //Take from DeadList into AliveList
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    _selection = _deadListBox lbText (lbCurSel _deadListBox);
    
    _obj = objNull;
    {
        if (_selection == (name _x)) then {
            _obj = _x;
        };
    } forEach deadPlayerList;
    
    if (!(isNull _obj)) then {
        _role = lbCurSel ((findDisplay 26893) displayCtrl 26896);
        _rank = lbCurSel ((findDisplay 26893) displayCtrl 26897);
        
        selectedRespawnGroup pushBack [_rank, _obj, _role];
    };
    
    [] call fn_update_deadListbox;
    [] call fn_update_aliveListBox;
};

fn_respawnMenuRemoveAction = {
    disableSerialization;
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    selectedRespawnGroup deleteAt (lbCurSel _groupListBox);
    
    [] call fn_update_deadListbox;
    [] call fn_update_aliveListBox;
};

fn_respawnMenuChangeRoleAction = {
    disableSerialization;
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    _selection =  (lbCurSel _groupListBox);
    
    if (_selection < 0 || _selection >= (count selectedRespawnGroup)) exitWith { hint "No soldier selected to cycle roles for."; };
    
    _entry = (selectedRespawnGroup select _selection);
    _entry set [2, ((_entry select 2) + 1 ) % (count respawnMenuRoles)];
    selectedRespawnGroup set [_selection, _entry];
    
    [] call fn_update_aliveListBox;
};

fn_respawnMenuChangeRankAction = {
    disableSerialization;
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    _selection =  (lbCurSel _groupListBox);
    
    if (_selection < 0 || _selection >= (count selectedRespawnGroup)) exitWith { hint "No soldier selected to cycle ranks for."; };
    
    _entry = (selectedRespawnGroup select _selection);
    _entry set [0, ((_entry select 0) + 1) % 7];
    selectedRespawnGroup set [_selection, _entry];
    
    [] call fn_update_aliveListBox;
};

fn_reloadDeadPlayers = {
    deadPlayerList = [];
    {
        if (isPlayer _x) then {
            deadPlayerList pushBack _x;  
        };
    } forEach ([0,0,0] nearEntities ["VirtualCurator_F",500]);
    
    ((findDisplay 26893) displayCtrl 26895) ctrlSetText format["Players in Spectator: %1", count deadPlayerList];
};

// RESPAWN GROUP BUTTON
//
// This is the function that gets called when the respawn button is clicked.
fn_respawnMenuRespawnAction = {
    // Respawn button
    disableSerialization;
    
    if (count selectedRespawnGroup < 1) exitWith { hint "No players selected"; };
    
    // respawnMenuFactions control.
    _control = ((findDisplay 26893) displayCtrl 26894);
    _faction = lbCurSel _control;
    
    // respawnMenuFactions control.
    _control = ((findDisplay 26893) displayCtrl 26898);
    _groupIndex = lbCurSel _control;
    _groupName = (respawnMenuGroupNames select _groupIndex) select 0;
    _sr = (respawnMenuGroupNames select _groupIndex) select 1;
    _lr = (respawnMenuGroupNames select _groupIndex) select 2;
    if (_groupName == "") exitWith { hint "No group name selected"; };
          
    // Hand over control to the map dialog.
    closeDialog 26893;
    createDialog "respawnMenuMapDialog";

    var1_faction = _faction;
    var2_groupName = _groupName;
    var3_sr = _sr;
    var4_lr = _lr;
};

fn_respawnMapLoaded = {
    disableSerialization;
    _mapCtrl = ((findDisplay 26950) displayCtrl 26902);
    _pos = [0,0,0];
    if (alive player && !(player isKindOf "VirtualCurator_F")) then {
      _pos = getPos player;
    }
    else {
        if (count playableUnits > 0) then {
            _pos = getPos (playableUnits select 0);
        }
        else {
            if (count allUnits > 0) then {
                _pos = getPos (allUnits select 0);
            };
        };                          
    };
    _mapCtrl ctrlMapAnimAdd [0, 0.1, _pos]; 
    ctrlMapAnimCommit _mapCtrl;
    f3_respawnMousePos = -1;
    hint "Click on the map or click on respawn location to draft a position. Hit enter to confirm.";
};

fn_toggleSpectator = {
    if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
        [!isSpec] call acre_api_fnc_setSpectator;
        if (isSpec) then {
            hint "ACRE: Spectator mode de-activated";  
        }
        else {
            hint "ACRE: Spectator mode activated";  
        };
        isSpec = !isSpec;
    };
};

fn_respawnMap_onMouseButtonDown = {
    private["_i", "_var", "_pos", "_found"];
    params["_fullmapWindow", "_type", "_x", "_y"];
    
    if (_type == 0) then { // left click
        _i = 1;
        _found = false;
        _var = missionNamespace getVariable[format["f3_respawnPoint%1", _i], objNull];
        while {!(isNull _var)} do {
            _pos = (position _var);
            if (([_x,_y] distance (_fullmapWindow posWorldToScreen _pos)) < 0.1) then {
                f3_respawnMousePos = _i;
                _found = true;
            };
            _i = _i + 1;
            _var = missionNamespace getVariable[format["f3_respawnPoint%1", _i], objNull];
        };
        if (!_found) then {
            f3_respawnMousePos = _fullmapWindow posScreenToWorld [_x, _y];
        };
    };
};

fn_respawnMap_keyUp = {
    private["_type", "_position", "_var"];
    _type = _this select 1;
    //28 = enter key
    if (_type == 28) then {
        if (f3_respawnMousePos isEqualTo -1) then {
            hint "No position selected for respawn. Click on a position then hit enter.";
        }
        else {
            _position = [0,0,0];
            if (typeName f3_respawnMousePos == "ARRAY") then {
                _position = f3_respawnMousePos;
            }
            else {
                _var = missionNamespace getVariable[format["f3_respawnPoint%1", f3_respawnMousePos], objNull];
                if (!isNull _var) then {
                    _position = position _var;
                };
            };
            hint "Group created on ground.";
            [[var2_groupName, _position, var1_faction, selectedRespawnGroup, var3_sr, var4_lr], "F_fnc_RespawnWaveServer", false] call BIS_fnc_MP;
            selectedRespawnGroup = [];

            // Close the Map
            ((findDisplay 26950) displayCtrl 26902) ctrlShow false;
            ((findDisplay 26950) displayCtrl 26902) mapCenterOnCamera false;
            closeDialog 26950;
        };
    };
};
