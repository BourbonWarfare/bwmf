class CfgLoadouts {
    //Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.

    //Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
    allowMagnifiedOptics = 1;

    //Do Vehicle Loadouts
    //(1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
    setVehicleLoadouts = 1;

    //Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
    useFallback = 1;

    //Shared items
    #include "Loadouts\common.hpp" // DO NOT COMMENT OUT

    //Only include one hpp per faction; use (//) to comment out other files

    //BLUFOR FACTION (blu_f):
    #include "Loadouts\bluf_us_m4_ocp.hpp"            // US: M4 - Tan
    // #include "Loadouts\bluf_us_m4_ucp.hpp"         // US: M4 - Gray/Green
    // #include "Loadouts\bluf_brit_l85_mtp.hpp"      // British: L86 - Multi-Terrain Pattern
    // #include "Loadouts\bluf_swede_ak5_m90.hpp"     // Swedish: AK5 - Fish
    // #include "Loadouts\bluf_ger_g36_fleck.hpp"     // German: G36 - Flecktarn Camo

    //INDFOR FACTION (ind_f):
    // #include "Loadouts\indf_ukr_ak74_ttsko.hpp"       // Ukraine: AK74 - TTskO
    // #include "Loadouts\indf_ukr_ak74_ddpm.hpp"     // "Ukraine": AK74 - Desert DPM
    // #include "Loadouts\indf_reb_ak74_desert.hpp"   // Rebel: AK74 - Mixed Desert
    #include "Loadouts\indf_ger_g36_tropen.hpp"    // German: G36 - Tropen Camo

    //OPFOR FACTION (opf_f):
    // #include "Loadouts\opfor_desreb.hpp"         //Our standard "middle-east" loadout
    // #include "Loadouts\opfor_standard.hpp"          //Our standard "middle-east" loadout

    //RUSSIAN FACTIONS (rhs_faction_msv):
    // #include "Loadouts\russian_standard.hpp"     //Our standard "commy" loadout
    // #include "Loadouts\russian_sov-sweedish.hpp"    //Soviet's "sweedish" loadout

    //Civilians (mainly for RP missions)
    #include "Loadouts\civilians.hpp"               //Bare example of doing civilian loadouts
};
