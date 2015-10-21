class CfgLoadouts {
    //Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  
    //Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
    allowMagnifiedOptics = 1;
    
    //Do Vehicle Loadouts
    //(1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
    setVehicleLoadouts = 1;
    
    //Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
    useFallback = 1;
    
    //Only include one hpp per faction; use (//) to comment out other files

    //BLUFOR FACTION (blu_f):
    // #include "Loadouts\bluefor_baf.hpp"          //
    // #include "Loadouts\bluefor_standard.hpp"     //Our Standard "us tan" loadout
    // #include "Loadouts\bluefor_swedes.hpp"       //
    #include "Loadouts\blueforacu_standard.hpp"     //
    // #include "Loadouts\bluefor_German.hpp"       //Germans: G36 - Flecktarn Camo

    //INDFOR FACTION (ind_f):
    // #include "Loadouts\indfor_desreb.hpp"        //
    // #include "Loadouts\indfor_standard.hpp"      //
    #include "Loadouts\indfor_standard2.hpp"        //Our Standard "ukraine" loadout

    //OPFOR FACTION (opf_f):
    // #include "Loadouts\opfor_desreb.hpp"         //Our standard "middle-east" loadout
    #include "Loadouts\opfor_standard.hpp"          //Our standard "middle-east" loadout

    //RUSSIAN FACTIONS (rhs_faction_msv):
    #include "Loadouts\russian_standard.hpp"     //Our standard "commy" loadout
    // #include "Loadouts\russian_sov-sweedish.hpp"    //Soviet's "sweedish" loadout

    //Civilians (mainly for RP missions)
    // #include "Loadouts\civilians.hpp"               //Bare example of doing civilian loadouts
};
