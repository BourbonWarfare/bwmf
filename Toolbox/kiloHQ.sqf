///////////////////////////////
// GAZ-66 Mobile HQ by [BW] kilo
// Instructions for use: 
// place kiloHQ.sqf into your mission folder
// 0 = [this] execVM "kiloHQ.sqf"; <--- Put this line in ALL HQ vehicle's INIT boxes
// You can use this script for non-GAZ vehicles, just remove the noted lines below (re: the radio masts). You may also need to adjust the positions for the camo nets and other objects to avoid clipping and exploderinos.
// DM kilo#1111 on discord for support
//////////////////////////////

// Definitions for placed objects
#define CAMOCOVER "CamoNet_ghex_open_F" // <-- Camo Cover class name
#define CRATE "GunrackTK_EP1" // <-- Supply Crate class name
#define TENT "Land_A_tent" // <-- Tent class name
#define FLAG "FlagCarrierNorth" // <--- Flag class name

_HQ = _this select 0;

if (isServer) then {
_HQ setVariable ["deployed",false,true];
[_HQ, ["ACRE_VRC103", "Upper Dash", "Dash", false, ["inside","outside"], [], "ACRE_PRC117F", [], []], true] call acre_api_fnc_addRackToVehicle; // add ACRE rack, remove line if not using ACRE

// edit the +- after each (getPos _HQ select) if you'd like to edit the positions of each spawned item. example:
//						here					here					 here
//						\/						 \/						  \/
// (getPos _HQ select 0)-4, (getPos _HQ select 1)-0.4,(getPos _HQ select 2)+0.1
kilo_fnc_deployHQ = {
 	private ["_HQ","_camocover","_supply1","_supply2","_tent","_flag"];
 	_HQ = _this select 0;
 	_camocover = createVehicle [CAMOCOVER,[ (getPos _HQ select 0), (getPos _HQ select 1),(getPos _HQ select 2)+0.3],[],0,"CAN_COLLIDE"];
 	_HQ setVariable ["CAMO",_camocover];
 	_camocover allowDamage false;
 	_supply1 = createVehicle [CRATE,[ (getPos _HQ select 0)-4, (getPos _HQ select 1)-0.4,(getPos _HQ select 2)+0.1],[],0,"CAN_COLLIDE"];
 	_HQ setVariable ["SUPPLY1",_supply1];
	_supply2 = createVehicle [CRATE,[ (getPos _HQ select 0)-4, (getPos _HQ select 1)+1,(getPos _HQ select 2)+0.1],[],0,"CAN_COLLIDE"];
 	_HQ setVariable ["SUPPLY2",_supply2];
	_tent = createVehicle [TENT,[ (getPos _HQ select 0)+6, (getPos _HQ select 1)-6,(getPos _HQ select 2)+0.1],[],0,"CAN_COLLIDE"];
 	_HQ setVariable ["TENT",_tent];
	_flag = createVehicle [FLAG,[ (getPos _HQ select 0)+6, (getPos _HQ select 1)+6,(getPos _HQ select 2)+0.1],[],0,"CAN_COLLIDE"];
	_HQ setVariable ["FLAG",_flag];
	[_HQ,1] spawn rhs_fnc_gaz66_radioDeploy; //deploy radio masts, remove line if not using GAZ-66
 	sleep 1;
 	_HQ setVariable ["deployed",true,true];
};

kilo_fnc_packHQ = {
	 private ["_HQ","_flag"];
	 _HQ = _this select 0;
	 deleteVehicle (_HQ getVariable "CAMO");
	 deleteVehicle (_HQ getVariable "SUPPLY1");
	 deleteVehicle (_HQ getVariable "SUPPLY2");
	 deleteVehicle (_HQ getVariable "TENT");
	 deleteVehicle (_HQ getVariable "FLAG");
	 [_HQ,0] spawn rhs_fnc_gaz66_radioDeploy; //fold radio masts, remove line if not using GAZ-66
	 _HQ setVariable ["deployed",false,true];
};

};

if (!isDedicated) then {
waitUntil{!(isNull player)};

_HQ addAction ["<t color='#ff1111'>Deploy HQ (engine off, flat ground)</t>",{
		[_this,"kilo_fnc_deployHQ",false] call BIS_fnc_MP;
	}
	,[],0,true,true,"","!(_target getVariable ['deployed',true])"];

_HQ addAction ["<t color='#ff1111'>Pack HQ</t>",{
		[_this,"kilo_fnc_packHQ",false] call BIS_fnc_MP;
	},[],0,true,true,"","_target getVariable ['deployed',false]"];

//Uncomment for testing to move HQ to players location
//player addAction ["Move HQ",{((_this select 3) select 0) setPosATL (getPosATL player)},[_HQ]];
};