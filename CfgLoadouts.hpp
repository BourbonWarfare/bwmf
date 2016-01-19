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
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING

  //Only include one hpp per faction; use (//) to comment out other files

  //BLUFOR FACTION (blu_f):
  #include "Loadouts\blu_us_m4_ucp.hpp"            // US: M4 - Gray/Green
  // #include "Loadouts\blu_us_m4_ocp.hpp"         // US: M4 - Tan
  // #include "Loadouts\blu_brit_l85_mtp.hpp"      // British: L86 - Multi-Terrain Pattern
  // #include "Loadouts\blu_swede_ak5_m90.hpp"     // Swedish: AK5 - M90 (Green)
  // #include "Loadouts\blu_ger_g36_fleck.hpp"     // German: G36 - Flecktarn Camo

  //USMC FACTION (rhs_faction_usmc_wd):
  #include "Loadouts\usmc_us_m16_desert.hpp"      // US: M16 - FROG Desert
  // #include "Loadouts\usmc_us_m16_woodland.hpp"  // US: M16 - FROG Woodland

  //INDFOR FACTION (ind_f):
  #include "Loadouts\ind_ukr_ak74_ttsko.hpp"       // Ukraine: AK74 - TTskO
  // #include "Loadouts\ind_ukr_ak74_ddpm.hpp"     // "Ukraine": AK74 - Desert DPM
  // #include "Loadouts\ind_reb_ak47_desert.hpp"   // Rebel: AK47 - Mixed Desert
  // #include "Loadouts\ind_ger_g36_tropen.hpp"    // German: G36 - Tropen Camo

  //OPFOR FACTION (opf_f):
  #include "Loadouts\opf_ru_ak74_floral.hpp"       // Russian: AK74 - Floral
  // #include "Loadouts\opf_reb_ak47_desert.hpp"   // Rebel: AK47 - Mixed Desert

  //RUSSIAN FACTIONS (rhs_faction_msv):
  #include "Loadouts\msv_ru_ak74_emr.hpp"          // Russian: AK74 - Digital FLoral Summer
  // #include "Loadouts\msv_swede_ak5_m90k.hpp"    // Swedish: AK5 - M90K (Desert)

  //Civilians (mainly for RP missions)
  #include "Loadouts\civilians.hpp"                //Bare example of doing civilian loadouts
};
