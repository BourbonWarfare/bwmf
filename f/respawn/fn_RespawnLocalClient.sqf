params["_groupNum", "_position", "_faction", "_typeOfUnit", "_rank", "_number", "_leader", "_groupName"];

_faction = (respawnMenuFactions select _faction) select 0;
_class = [_faction, _typeOfUnit] call fn_respawnSelectClass;

_sideNum = getNumber (configfile >> "CfgFactionClasses" >> _faction >> "side");
_side = switch (_sideNum) do {
    case 0: {east};
    case 1: {west};
    case 2: {resistance};
    case 3: {civilian};
    default {civilian};
};

_rankName  = switch (_rank) do {
    case 0: {"PRIVATE"};
    case 1: {"CORPORAL"};
    case 2: {"SERGEANT"};
    case 3: {"LIEUTENANT"};
    case 4: {"CAPTAIN"};
    case 5: {"MAJOR"};
    case 6: {"COLONEL"};
    default {"PRIVATE"};
};

//Dummy group is required to
_dummyGroup = createGroup _side;
respawn_initComplete = false;
/// Create the unit
_unitName = format["respawnedUnit%1", _number];
//_init = format[" %1 = this; ['%2',this] call f_fnc_assignGear; if (local this) then { respawn_initComplete = true; }; this setName '%1';",_unitName, (respawnMenuRoles select _typeOfUnit) select 0, name player];
_init = "";
_oldUnit = player;

_class createUnit [_position, _dummyGroup, _init, 0.5, _rankName];

// Wait till the unit is created
waitUntil{!isNil _unitName};

localRespawnedUnit = missionNamespace getVariable [_unitName, objNull];

// Exit Spectator
[] call F_fnc_ForceExit;
// Ensures the spectator script will create a virtual entity next time.
f_cam_VirtualCreated = nil; 

_name = (name player);
setPlayable localRespawnedUnit;
selectPlayer localRespawnedUnit;

deleteVehicle _oldUnit; // Delete the old spectator module
localRespawnedUnit = nil; // Enable respawn again.
player setPos (_position);

// Spawn to avoid blocking with waitUntil for assignGear to finish.
if (isClass(configFile >> "CfgPatches" >> "acre_main")) then {
    [false] call acre_api_fnc_setSpectator;
    [] spawn { //Intensive don't block execution.
        [] call F_Radios_fnc_acreRadioSetup;
    };
};

 _groupVarName = format ["GrpRespawn_%1", _groupNum];
if (_leader) then {
    //Broadcast group var to everyone so people can join.
    missionNamespace setVariable[_groupVarName,_dummyGroup];
    _dummyGroup setVariable ["F3_GroupID", _groupName, true];
    publicVariable _groupVarName;    
}
else {
    //Wait for group be created by the group leader before joining it.
    [_groupVarName] spawn {
        params["_groupVarName"];
        // Wait for group exist.
        sleep 1; // Ensure that everything is in Sync.
        waitUntil{!isNil _groupVarName};
        [player] joinSilent (missionNamespace getVariable[_groupVarName, grpNull]);
   };
};

// Re-run briefing script for our new unit.
[] call F_fnc_showBriefing;
[] call F_fnc_showOrbatNotes;
[] call F_fnc_setTeamColours;
