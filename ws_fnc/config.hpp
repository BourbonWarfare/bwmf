class WS
	{

		
		class tools
		{
			file = "ws_fnc\tools";
			class selectRandom {};
			class gameCheck {preInit=1;};
			class collectMarkers {};
			class collectObjects {};
			class collectObjectsNum {};
			class collectBuildings {};
			class loadVehicle {};
			class checkHC {};
			class showFPS {};
			class nearPlayer {};
			class listPlayers {};
		};
		class effects
		{
			file = "ws_fnc\effects";
			class createTripflare {};
			class createLightning {};
			class createCAS {};
			
		};
		class misc
		{
			file = "ws_fnc\misc";
			class broadcast {};
			class showIntro {};
		};
		class getPos
		{
			file = "ws_fnc\getPos";
			class getPos {};
			class getBPos {};
			class getEPos {};
			class nearestRoadPos {};
			class nearestLandPos {};
			class getPosInArea {};
		};
		class AI
		{
			file = "ws_fnc\AI";
			class createGroup {};
			class createVehicle {};
			class createGarrison {};
			class betterVehicle {};
			class enterBuilding {};
			class taskDefend {};
			class taskCrew {};
			class taskAmbush {};
			class taskLand {};
			class addWaypoint {};
			class setAIMode {};
		};
		
		class init {
			class init {file = "ws_fnc\ws_fnc_init.sqf";preInit = 1;};
		};

	};