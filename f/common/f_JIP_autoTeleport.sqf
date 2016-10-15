//only run on jips joining after safestart disabled
waitUntil {!isNull player};
_lead = [playerSide] call F_fnc_getCurLeaderSide;

if (_lead isEqualTo objNull) then {
  hint "Sorry, there is no available leadership unit for auto-teleportation. Contact an administrator.";
  systemChat "Sorry, there is no available leadership unit for auto-teleportation. Contact an administrator.";
} else {

    if (vehicle _lead != _lead) then {
      //in car
      player allowDamage false; [] spawn {sleep 5; player allowDamage true}; //protect them in the case of fall damage or whatnot
      player moveInCargo (vehicle _lead);
      sleep 0.2;
      if !(player in (crew vehicle _lead)) then {
        //the cargo was full
        hint "Current mission leader is unavailable for teleport. Please wait, retrying in five seconds...";
        systemChat "Current mission leader is unavailable for teleport. Please wait, retrying in five seconds...";
        [] spawn {sleep 5; [] execVM "f\JIP\f_JIP_autoTeleport.sqf";}; //rerun script and try again
      } else {
        //they are there in the car
        hint ((name player) + ", you have joined the current commander (" + (name _lead) + ") inside the AO. Please ask them for assignment to a team.");
        systemChat ((name player) + ", you have joined the current commander (" + (name _lead) + ") inside the AO. Please ask them for assignment to a team.");
        [
          [
            [_lead,player],
            {
              params ["_leader","_joiner"];
              hint ((name _joiner) + " is a JIP (" + getText(configFile >> "CfgVehicles" >> (typeOf _joiner) >> "displayName") + ") and has been teleported into your vehicle. Assign them to a team, " + (name _leader) + "!");
              systemChat ((name _joiner) + " is a JIP (" + getText(configFile >> "CfgVehicles" >> (typeOf _joiner) >> "displayName") + ") and has been teleported into your vehicle. Assign them to a team, " + (name _leader) + "!");
            }
          ],
          "BIS_fnc_spawn",
          _lead
        ] call BIS_fnc_MP;
        [player] join (group _lead);
      };
    } else {
      //on foot
      _posPlant = _lead modelToWorld [0,-3,0]; //3 meters behind leader
      _posPlant set [2,0]; //ensure height atl = 0
      player allowDamage false; [] spawn {sleep 5; player allowDamage true}; //protect them in the case of fall damage or whatnot
      player setPosATL _posPlant;
      [player] join (group _lead);
      hint ((name player) + ", you have been teleported to the mission commander (" + (name _lead) + "), please ask them for assignment!");
      systemChat ((name player) + ", you have been teleported to the mission commander (" + (name _lead) + "), please ask them for assignment!");
      [
        [
          [_lead,player],
          {
            params ["_leader","_joiner"];
            hint ((name _joiner) + " is a JIP (" + getText(configFile >> "CfgVehicles" >> (typeOf _joiner) >> "displayName") + ") and has been teleported just behind your location. Assign them to a team, " + (name _leader) + "!");
            systemChat ((name _joiner) + " is a JIP (" + getText(configFile >> "CfgVehicles" >> (typeOf _joiner) >> "displayName") + ") and has been teleported just behind your location. Assign them to a team, " + (name _leader) + "!");
          }
        ],
        "BIS_fnc_spawn",
        _lead
      ] call BIS_fnc_MP;
    };
};
