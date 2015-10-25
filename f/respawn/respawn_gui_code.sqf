fn_respawnMenuInit = {
    disableSerialization;
    deadPlayerList = [];
    selectedRespawnGroup = [];
    // SelectedRespawnGroup format 
    // Rank: Int (0-6), Object: Player, Role: Int (0 -> count respawnMenuRoles)
    
    // Propogate the list of dead players.
    //TODO Change to just !isMultiplayer.
    if ((!isMultiplayer) or (isMultiplayer and isServer)) then {
        {
            deadPlayerList pushBack _x;  
        } forEach allUnits;
    } else {
        {
            if (isPlayer _x) then { //not all of them will be players.
                deadPlayerList pushBack _x;  
            };
        } forEach ([0,0,0] nearEntities ["VirtualCurator_F",500]);
    };
    
    //Faction selection control
    _control = ((findDisplay 26893) displayCtrl 26894);
    _i = 0;
    {
        _control lbAdd (_x select 1);
        _factionImg = getText (configfile >> "CfgFactionClasses" >> (_x select 0) >> "icon");
        if (_factionImg != "") then {
            _control lbSetPicture[_i,_factionImg]; 
        };
        _i = _i + 1;
    } forEach respawnMenuFactions;
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
    
    ((findDisplay 26893) displayCtrl 26895) ctrlSetText format["Players in Spectator: %1",count deadPlayerList];
    
    _control lbSetCurSel 0;
    
    respawnMenuCheckBoxChecked = false;
    
   [] call fn_update_deadListbox;
    
};

fn_update_deadListBox = {
    disableSerialization;
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    lbClear _deadListBox;
     _i = 0;
    {
        _found = false;
        //Check if already selected and thus in the selected respawn listBox.
        _y = _x;
        {
            if (_y == (_x select 1)) then {
              _found = true;  
            };
        } forEach selectedRespawnGroup;
        _x = _y;
        
        if (!_found) then {
            _deadListBox lbAdd (name _x);
            _deadListBox lbSetData[_i,""+getPlayerUID _x];
            _i = _i + 1;
        };
    } forEach deadPlayerList;
    
};

fn_update_aliveListBox = {
    disableSerialization;
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    lbClear _groupListBox;
    _i = 0;
    {
        _groupListBox lbAdd format["%1 - %2",name (_x select 1),(respawnMenuRoles select (_x select 2)) select 1];
       //Set image based on rank
        switch(_x select 0) do {
            case 0 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa"]; };
            case 1 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa"];};
            case 2 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa"];};
            case 3 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa"];};
            case 4 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa"];};
            case 5 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa"];};
            case 6 : { _groupListBox lbSetPicture[_i,"\A3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"];};
            default { };
        };
        _groupListBox lbSetColor [_i, [1, 1, 1, 1]];
        _groupListBox lbSetPictureColor [_i, [1,1,1,0.7]];
        _groupListBox lbSetPictureColorSelected [_i,[1,1,1,1]];
        _i = _i + 1;
    } forEach selectedRespawnGroup;
};

fn_respawnMenuAddAction = {
    disableSerialization;
    //Take from DeadList into AliveList
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    _selection = _deadListBox lbText (lbCurSel _deadListBox);
    
    _obj = objNull;
    {
        if (_selection == name _x) then {
            _obj = _x;
        };
    } forEach deadPlayerList;
    
    if (!(isNull _obj)) then {
        _role = lbCurSel ((findDisplay 26893) displayCtrl 26896); // Role
        _rank = lbCurSel ((findDisplay 26893) displayCtrl 26897); // Rank
        
        selectedRespawnGroup pushBack [_rank,_obj,_role];
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
    
    _entry = (selectedRespawnGroup select _selection);
    _entry set [2,((_entry select 2)+1)%(count respawnMenuRoles)];
    selectedRespawnGroup set [_selection,_entry];
    
    [] call fn_update_aliveListBox;
};

fn_respawnMenuChangeRankAction = {
    disableSerialization;
    _deadListBox = ((findDisplay 26893) displayCtrl 26891);
    _groupListBox = ((findDisplay 26893) displayCtrl 26892);
    
    _selection =  (lbCurSel _groupListBox);
    
    _entry = (selectedRespawnGroup select _selection);
    _entry set [0,((_entry select 0)+1)%7];
    selectedRespawnGroup set [_selection,_entry];
    
    [] call fn_update_aliveListBox;
};

// RESPAWN GROUP BUTTON
//
// This is the function that gets called when the respawn button is clicked.
//

fn_respawnMenuToggleGroupCheckbox = {
    respawnMenuCheckBoxChecked = !respawnMenuCheckBoxChecked;
};

fn_respawnMenuRespawnAction = {
    // Respawn button
    disableSerialization;
    
    if (count selectedRespawnGroup < 1) exitWith { hint "No players selected"; };
    
    // respawnMenuFactions control.
    _control = ((findDisplay 26893) displayCtrl 26894);
    _faction = lbCurSel _control;
	
	_groupPrefix = "";
	switch (_faction) do {
        case 0: {
            _groupPrefix = "NATO ";
        };
        case 1:{
			_groupPrefix = "OPFOR ";
        };
        case 2: {
            _groupPrefix = "IND ";
        };
        case 3 : {
            _groupPrefix = "MSV ";
        };
        default {};
    };
	
    _groupName = ctrlText ((findDisplay 26893) displayCtrl 26898);
    if (_groupName=="INSERT_GROUP_NAME") then {
      _groupName = "GSL";
    };
	
	_groupName = _groupPrefix + _groupName;
          
    // Hand over control to the map dialog.
    closeDialog 26893;
    createDialog "respawnMenuMapDialog";

    var1_faction = _faction;
    var2_groupName = _groupName;
};

fn_respawnMapLoaded = {
    disableSerialization;
    _mapCtrl = ((findDisplay 26950) displayCtrl 26902);//_this select 0;//
    _pos = [0,0,0];
    if (alive player) then {
      _pos = getPos player;
    } else {
        if (count playableUnits > 0) then {
            _pos = getPos (playableUnits select 0);
        } else {
            if (count allUnits > 0) then {
                _pos = getPos (allUnits select 0);
            };
        };                          
    };
    _mapCtrl ctrlMapAnimAdd [0, 0.1, _pos]; 
    ctrlMapAnimCommit _mapCtrl;
    f3_respawnMousePos = -1;
    f3_respawnHalo = false;
    hint "Click on the map or click on respawn location to draft a position. Hit enter to confirm. Spacebar toggles HALO option (only for user defined point).";
};

fn_toggleSpectator = {
    if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
        _isSpectator = [player] call acre_api_fnc_isSpectator;
        [!_isSpectator] call acre_api_fnc_setSpectator;
        if (_isSpectator) then {
            hint "ACRE: Spectator mode de-activated";  
        } else {
            hint "ACRE: Spectator mode activated";  
        };
    };
    
};

fn_respawnMap_onMouseButtonDown = {
    private["_i","_var","_pos","_found"];
    params["_fullmapWindow","_type","_x","_y"];
	
    if (_type == 0) then { // left click
        _i = 1;
        _found = false;
        _var = missionNamespace getVariable[format["f3_respawnPoint%1",_i],objNull];
        while {!(isNull _var)} do {
            _pos = (position _var);
            if (([_x,_y] distance (_fullmapWindow posWorldToScreen _pos)) < 0.1) then {
                f3_respawnMousePos = _i;
                _found = true;
            };
            _i = _i + 1;
            _var = missionNamespace getVariable[format["f3_respawnPoint%1",_i],objNull];
        };
		if (!_found) then {
			f3_respawnMousePos = _fullmapWindow posScreenToWorld [_x,_y];
		};
    };
};

fn_respawnMap_keyUp = {
    private["_type","_halo","_position","_var"];
    _type = _this select 1;
    //28 = enter key
    if (_type == 28) then {
        if (f3_respawnMousePos isEqualTo -1) then {
            hint "No position selected for respawn. Click on a position then hit enter.";
        }
		else {
            _position = [0,0,0];
            _halo = false;
            if (typeName f3_respawnMousePos == "ARRAY") then {
                _position = f3_respawnMousePos;  
                _halo = f3_respawnHalo;
            } else {
                _var = missionNamespace getVariable[format["f3_respawnPoint%1",f3_respawnMousePos],objNull];
                if (!isNull _var) then {
                    _position = position _var;
                };
            };
            if (_halo) then {
                hint "Group created as HALO group.";
            }
			else {
                hint "Group created on ground.";
            };
            [[var2_groupName, _position, var1_faction, selectedRespawnGroup, _halo], "F_fnc_RespawnWaveServer", false] call BIS_fnc_MP;
            selectedRespawnGroup = [];

            // Close the Map
            ((findDisplay 26950) displayCtrl 26902) ctrlShow false;
            ((findDisplay 26950) displayCtrl 26902) mapCenterOnCamera false;
            closeDialog 26950;
        };
    };
    //SPACEBAR (HALO TOGGLE)
    if (_type == 57) then {
        f3_respawnHalo = !f3_respawnHalo;        
    };
};