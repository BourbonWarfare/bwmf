class PABST_SPECT_dialog
{
	idd = 6969;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['PABST_SPECT_theDialog', _this select 0];";
	duration = 2147483647;
	fadein = 0;
	fadeout = 0;
	
	onKeyDown = "['key', true, _this] call PABST_SPECT_UI_onKeyAction";
	onKeyUp = "['key', false, _this] call PABST_SPECT_UI_onKeyAction";
	onMouseButtonDown = "['mouse', true,  _this] call PABST_SPECT_UI_onKeyAction";
	onMouseButtonUp = "['mouse', false, _this] call PABST_SPECT_UI_onKeyAction";
	onMouseMoving = "_this call PABST_SPECT_UI_onMouseMoving";
	onMouseZChanged = "_this call PABST_SPECT_UI_onMouseWheel";
	
	class controlsBackground {
		class MiniMap: RscMapControl
		{
			idc = 2200;
			type = 100;		//100 hids all markers
			maxSatelliteAlpha = 0.125;
			x = 0.0 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.35 * safezoneW;
			h = 0.35 * safezoneH;
			onMouseButtonDown = "_this call PABST_SPECT_UI_mapClick";
			onDraw = "_this call PABST_SPECT_UI_onEachMapFrame";
		};
	};
	
	class controls
	{
		class CameraControlGroup: RscControlsGroup
		{
			idc = 2300;
			x = 0.87 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.13 * safezoneW;
			h = 0.36 * safezoneH;
			class controls
			{
				class 1stButton: RscButton
				{
					idc = 1691;
					text = "1st"; //--- ToDo: Localize;
					x = 0.011 * safezoneW;
					y = 0.001 * safezoneH;
					w = 0.025 * safezoneW;
					h = 0.0175 * safezoneH;
					action = "[1] call PABST_SPECT_UI_updateCameraMode";
					colorBackground[] = {0,0,0,0.5};
					colorBackgroundActive[] = {0,0,0,0.5};
					colorFocused[] = {0,0,0,0.5};
					colorShadow[] = {0.5,0.5,0.5,0.5};
				};
				class 3rdButton: 1stButton
				{
					idc = 1692;
					text = "3rd"; //--- ToDo: Localize;
					x = 0.047 * safezoneW;
					action = "[2] call PABST_SPECT_UI_updateCameraMode";

				};
				class FreeButton: 1stButton
				{
					idc = 1693;
					text = "Free"; //--- ToDo: Localize;
					x = 0.083 * safezoneW;
					action = "[3] call PABST_SPECT_UI_updateCameraMode";
				};
				// class TopButton: 1stButton
				// {
				// idc = 1694;
				// text = "Top"; //--- ToDo: Localize;
				// x = 0.0875 * safezoneW;
				// action = "[4] call PABST_SPECT_UI_updateCameraMode";
				// };
				
				class RscCombo_2108: RscCombo
				{
					idc = 2108;
					text = ""; //--- ToDo: Localize;
					x = 0 * safezoneW;
					y = 0.021 * safezoneH;
					w = 0.055 * safezoneW;
					h = 0.015 * safezoneH;
					sizeEx = 0.03;  
					onLBSelChanged = "_this call PABST_SPECT_UI_updateVisionMode";
				};	
				
				class FilterButton: RscButton
				{
					idc = 1661;
					text = "Filter AI"; //--- ToDo: Localize;
					x = 0.06 * safezoneW;
					y = 0.021 * safezoneH;
					w = 0.035 * safezoneW;
					h = 0.015 * safezoneH;
					sizeEx = 0.03;  
					action = "[] call PABST_SPECT_UI_filterAI";
					colorBackground[] = {0,0,0,0.5};
					colorBackgroundActive[] = {0,0,0,0.5};
					colorFocused[] = {0,0,0,0.5};
					colorShadow[] = {0.5,0.5,0.5,0.5};
				};
						
				class TagsButton: FilterButton
				{
					idc = 1662;
					text = "Tags"; //--- ToDo: Localize;
					x = 0.1 * safezoneW;
					y = 0.021 * safezoneH;
					w = 0.03 * safezoneW;
					h = 0.015 * safezoneH;
					sizeEx = 0.03;  
					action = "[] call PABST_SPECT_UI_nameTags";
					colorBackground[] = {0,0,0,0.5};
					colorBackgroundActive[] = {0,0,0,0.5};
					colorFocused[] = {0,0,0,0.5};
					colorShadow[] = {0.5,0.5,0.5,0.5};
				};
				
				
				
				// class RscFrame_cameraText: RscFrame
				// {
				// idc = 456789;
				// text = "Camera Mode"; //--- ToDo: Localize;
				// x = 0.001 * safezoneW;
				// y = 0.001 * safezoneH;
				// w = 0.12 * safezoneW;
				// h = 0.033 * safezoneH;
				// };
				class SwitchablePlayersListBox  : RscListNBox {
					idc = 20001;
					x = 0 * safezoneW;
					y = 0.04 * safezoneH;
					w = 0.13 * safezoneW;
					h = 0.31 * safezoneH;
					
					// number of columns used, and their left positions 
					// if using side buttons, space has to be reserved for those,
					// at a width of roughly 120% of rowHeight
					columns[] = {0, 0.275}; 
					// height of each row
					rowHeight = .0325; 
					sizeEx = 0.03; 
					font = "PuristaBold";
					drawSideArrows = 1; 
					// IDCs for left and right side buttons
					colorText[] = {1, 1, 1, 1}; 
					colorBackground[] = {1, 0, 0, 1}; 
					colorSelectBackground[] = {0, 0, 0, 1}; 
					colorSelectBackground2[] = {0, 0, 0, 1}; 
					onLBSelChanged = "_this call PABST_SPECT_UI_onListBoxChange";
				};
			};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Pabst Mirror, v1.063, #Perise)
		////////////////////////////////////////////////////////

		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "AutoTrack"; //--- ToDo: Localize;
			x = 0 * safezoneW + safezoneX;
			y = 0.985 * safezoneH + safezoneY;
			w = 0.0425 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundActive[] = {0,0,0,0.5};
			colorFocused[] = {0,0,0,0.5};
			colorShadow[] = {0,0,0,0};
			action = "_this call PABST_SPECT_UI_mapTrack";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Size"; //--- ToDo: Localize;
			x = 0.045 * safezoneW + safezoneX;
			y = 0.985 * safezoneH + safezoneY;
			w = 0.0275 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundActive[] = {0,0,0,0.5};
			colorFocused[] = {0,0,0,0.5};
			colorShadow[] = {0,0,0,0};
			action = "_this call PABST_SPECT_UI_mapSize";
		};
		class RscButton_1602: RscButton
		{
			idc = 1602;
			text = "Player List"; //--- ToDo: Localize;
			x = 0.075 * safezoneW + safezoneX;
			y = 0.985 * safezoneH + safezoneY;
			w = 0.045 * safezoneW;
			h = 0.015 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorBackgroundActive[] = {0,0,0,0.5};
			colorFocused[] = {0,0,0,0.5};
			colorShadow[] = {0,0,0,0};
			action = "_this call PABST_SPECT_UI_rightList";
		};

		
		
		
		
		
		// class KillBox: RscStructuredText
		// {
		// idc = 1100;
		// text = "Killed ybbbbasdfsasadsad from 500 meters"; //--- ToDo: Localize;
		// x = 0.78875 * safezoneW + safezoneX;
		// y = 0.973 * safezoneH + safezoneY;
		// w = 0.211406 * safezoneW;
		// h = 0.022 * safezoneH;
		// colorText[] = {1,1,1,1};
		// colorBackground[] = {1,1,1,0};
		// };
		// class RscStructuredText_1101: RscStructuredText
		// {
		// idc = 1101;
		// text = "Spectating"; //--- ToDo: Localize;
		// x = 0.360781 * safezoneW + safezoneX;
		// y = 0.00500001 * safezoneH + safezoneY;
		// w = 0.211406 * safezoneW;
		// h = 0.022 * safezoneH;
		// colorText[] = {1,1,1,1};
		// colorBackground[] = {0,0,0,0.25};
		// };
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};