class CfgLoadouts {
    //Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  
    //Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
    allowMagnifiedOptics = 1;
    
    //Do Vehicle Loadouts
    //(1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
    setVehicleLoadouts = 1;
    
    
    //Only include one hpp per faction!
    //use (//) to comment out other files

    //BLUFOR FACTION:
    // #include "Loadouts\bluefor_baf.hpp"         //
    // #include "Loadouts\bluefor_standard.hpp" //Our Standard "us tan" loadout
    // #include "Loadouts\bluefor_swedes.hpp"      //
    #include "Loadouts\blueforacu_standard.hpp" //

    //INDFOR FACTION:
    // #include "Loadouts\indfor_desreb.hpp" //
    // #include "Loadouts\indfor_standard.hpp" //
    #include "Loadouts\indfor_standard2.hpp" //Our Standard "ukraine" loadout


    //OPFOR FACTION:
    // #include "Loadouts\opfor_desreb.hpp" //Our standard "middle-east" loadout
    #include "Loadouts\opfor_standard.hpp" //Our standard "middle-east" loadout


    //RUSSIAN FACTIONS:
    // #include "Loadouts\russian_standard.hpp" //Soviet's "sweedish" loadout
    #include "Loadouts\russian_sov-sweedish.hpp" //Our standard "commy" loadout



    //Bonus example civilian loadouts:
    class CIV_F {
        class C_man_1 {
            uniform[] = {"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite"};  /// randomized
            vest[] = {}; /// randomized
            headgear[] = {}; /// randomized
            backpack[] = {}; /// randomized
            backpackItems[] = {};
            weapons[] = {}; /// randomized
            launchers[] = {}; /// randomized
            handguns[] = {}; /// randomized
            magazines[] = {};
            items[] = {"ACE_fieldDressing:3"};
            linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
            attachments[] = {};
        };
        class C_journalist_F: C_man_1 {
            uniform[] = {"U_C_Journalist"};  /// randomized
            vest[] = {"V_Press_F"}; /// randomized
            headgear[] = {"H_Cap_press"}; /// randomized
        };
        class CEO: C_man_1 {
            uniform[] = {"U_Marshal"};  /// randomized
            headgear[] = {"H_Hat_brown"};
            items[] += {};
        };
        class C_man_hunter_1_F: C_man_1 {
            uniform[] = {"U_C_HunterBody_grn"};  /// randomized
            headgear[] = {"H_Booniehat_grn"};  /// randomized
            weapons[] = {};
            magazines[] = {};
            backpack[] = {"B_OutdoorPack_blk"};
        };
    };
};
