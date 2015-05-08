if isAIcontroller then {
//"Area1" = Marker name
//[markername, spawn radius, side, number of AI, percentage of a building they can occupy, customize which kind of units spawn in the buildings]
["area1",200,east,20,0.33,["O_Soldier_F"]] call ws_fnc_createGarrison;
["area2",100,east,15,0.5,["O_Soldier_F"]] call ws_fnc_createGarrison;

};
