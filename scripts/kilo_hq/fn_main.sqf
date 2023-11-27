#include "settings.hpp"

///////////////////////////////
// GAZ-66 Mobile HQ by [BW] kilo
// Instructions for use:
// place kiloHQ.sqf into your mission folder
// 0 = [this] execVM "kiloHQ.sqf"; <--- Put this line in ALL HQ vehicle's INIT boxes
// You can use this script for non-GAZ vehicles, just remove the noted lines below (re: the radio masts). You may also need to adjust the positions for the camo nets and other objects to avoid clipping and exploderinos.
// DM kilo#1111 on discord for support
//////////////////////////////


// edit the +- after each (getPos _HQ select) if you'd like to edit the positions of each spawned item. example:
//						here					here					 here
//						\/						 \/						  \/
// (getPos _HQ select 0)-4, (getPos _HQ select 1)-0.4,(getPos _HQ select 2)+0.1
private _fnc_deployHQ = {
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

private _fnc_packHQ = {
	 private ["_HQ","_flag"];
	 _HQ = _this select 0;
	 deleteVehicle (_HQ getVariable "CAMO");
	 deleteVehicle (_HQ getVariable "SUPPLY1");
	 deleteVehicle (_HQ getVariable "SUPPLY2");
	 deleteVehicle (_HQ getVariable "TENT");
	 deleteVehicle (_HQ getVariable "FLAG");
   if (typeOf _HQ == "rhs_gaz66_r142_vdv") then {
    [_HQ,0] spawn rhs_fnc_gaz66_radioDeploy; //fold radio masts, remove line if not using GAZ-66
   };
	 _HQ setVariable ["deployed",false,true];
};

SET_MISSION_VAR(fnc_deployHQ, _fnc_deployHQ);
SET_MISSION_VAR(fnc_packHQ, _fnc_packHQ);

if (isServer) then {
  {
    _x setVariable ["deployed",false,true];
    [_x, ["ACRE_VRC103", "Upper Dash", "Dash", false, ["inside","outside"], [], "ACRE_PRC117F", [], []], true] call acre_api_fnc_addRackToVehicle; // add ACRE rack, remove line if not using ACRE
  } forEach entities [[HQ_CLASS],[]];
};

if (!isDedicated) then {
  waitUntil{!(isNull player)};
  {
    _x addAction ["<t color='#ff1111'>Deploy HQ (engine off, flat ground)</t>",{
        [_this,QVAR_NAME(fnc_deployHQ),false] call BIS_fnc_MP;
      }
      ,[],0,true,true,"","!(_target getVariable ['deployed',true])"];

    _x addAction ["<t color='#ff1111'>Pack HQ</t>",{
        [_this,QVAR_NAME(fnc_packHQ),false] call BIS_fnc_MP;
      },[],0,true,true,"","_target getVariable ['deployed',false]"];
  } forEach entities [[HQ_CLASS],[]];
};
