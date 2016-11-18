class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 0;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = -1;

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"b_", "o_", "i_"};

  // Shared defines
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING

  // Available loadouts (configured for BluFor, Indy, and OpFor)
  // US: M4 - Gray/Green "Loadouts\us_m4_ucp.hpp"
  // US: M4 - Tan "Loadouts\us_m4_ocp.hpp"
  // British: L85 - Multi-Terrain Pattern "Loadouts\brit_l85_mtp.hpp"
  // German: G36 - Flecktarn Camo "Loadouts\ger_g36_fleck.hpp"
  // German: G36 - Tropentarn Camo "Loadouts\ger_g36_tropen.hpp"
  // Ukraine: AK74 - TTskO "Loadouts\ukr_ak74_ttsko.hpp"
  // "Ukraine": AK74 - Desert DPM "Loadouts\ukr_ak74_ddpm.hpp"
  // Rebel: AK47 - Mixed Desert "Loadouts\reb_ak47_desert.hpp"
  // Russian: AK74 - Floral "Loadouts\ru_ak74_floral.hpp"
  // Russian: AK74 - Desert "Loadouts\ru_ak74_desert.hpp"

  // Note: please delete any factions you're not using
  // (i.e. delete the OpFor and Civ classes in a BluFor vs Indy fight)
  class blu_f { // BluFor
    #include "Loadouts\us_m4_ucp.hpp"
  };

  class ind_f { // Indy
    #include "Loadouts\ukr_ak74_ttsko.hpp"
  };

  class opf_f { // OpFor
    //#include "Loadouts\ru_ak74_floral.hpp"
    #include "Loadouts\ru_ak74_desert.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
