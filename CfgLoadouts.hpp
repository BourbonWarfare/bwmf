class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 1;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

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
  // For use with exporter - "Loadouts\blankForArsenal.hpp"
  // AAF: F2000 - Green Digital "Loadouts\aaf_f2000_digi.hpp"
  // British: L85 - Desert "Loadouts\brit_l85_ddpm.hpp"
  // British: L85 - Multi-Terrain Pattern "Loadouts\brit_l85_mtp.hpp"
  // British: L85 - Woodland "Loadouts\brit_l85_wdpm.hpp"
  // British: MX - CTRG "Loadouts\brit_mx_ctrg.hpp"
  // Chinese: QBZ95 - Universal "Loadouts\chi_qbz95_universal.hpp" (apex)
  // CSAT: QBZ95 - Green Hex "Loadouts\csat_qbz95_ghex_apex.hpp" (apex)
  // CSAT: QBZ95 - Hex "Loadouts\csat_qbz95_hex_apex.hpp" (apex)
  // CSAT: QBZ95 - Urban Hex "Loadouts\csat_qbz95_uhex_apex.hpp" (apex)
  // CSAT: Sama - Hex "Loadouts\csat_sama_hex.hpp"
  // CSAT: Sama - Urban Hex "Loadouts\csat_sama_uhex.hpp"
  // FIA: Tar-21 - Guerilla "Loadouts\fia_tar21_gur.hpp"
  // German: G36 - Flecktarn Camo "Loadouts\ger_g36_fleck.hpp"
  // German: G36 - Tropentarn Camo "Loadouts\ger_g36_tropen.hpp"
  // German: G38 - Flecktarn Camo "Loadouts\ger_g38_fleck.hpp"
  // German: G38 - Tropentarn Camo "Loadouts\ger_g38_tropen.hpp"
  // CSAT: QBZ95 - Green Hex "Loadouts\msv_csat_qbz95_ghex_apex.hpp" (msv, apex)
  // Russian: AK74 - Digital "Loadouts\msv_ru_ak74_emr.hpp" (msv)
  // Russian: AK74 - Desert "Loadouts\msv_ru_ak74_emrd.hpp" (msv)
  // Russian: AK74 - Floral "Loadouts\msv_ru_ak74_flora.hpp" (msv)
  // Russian: AKM - Soviet Uniforms "Loadouts\msv_sov_akm_ttsko.hpp" (msv)
  // Rebel: AK47 - Mixed Desert "Loadouts\reb_ak47_desert.hpp"
  // Russian: AK74 - Desert "Loadouts\ru_ak74_desert.hpp"
  // Russian: AK74 - Floral "Loadouts\ru_ak74_floral.hpp"
  // Ukraine: AK74 - TTskO "Loadouts\ukr_ak74_ttsko.hpp"
  // "Ukraine": AK74 - Desert DPM "Loadouts\ukr_ak74_ddpm.hpp"
  // US: HK416 - Multi-Terrain Pattern "Loadouts\us_hk416_mtp.hpp"
  // US: HK416 - Tropical "Loadouts\us_hk416_trop.hpp"
  // US: M4 - Gray/Green "Loadouts\us_m4_ucp.hpp"
  // US: M4 - Tan "Loadouts\us_m4_ocp.hpp"
  // US: MX - Multi-Terrain Pattern "Loadouts\us_mx_mtp.hpp"
  // US: MX - Tropical "Loadouts\us_mx_trop.hpp"

  // Note: please delete any factions you're not using
  // (i.e. delete the OpFor and Civ classes in a BluFor vs Indy fight)

  // West factions
  #include "Loadouts\west_gear.hpp"
  class blu_f { // BluFor
    #include "Loadouts\us_mx_mtp.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class ind_f { // Indy
    #include "Loadouts\aaf_f2000_digi.hpp"
  };

  // East Factions
  #include "Loadouts\east_gear.hpp"
  class opf_f { // OpFor
    #include "Loadouts\csat_sama_hex.hpp"
  };

  class potato_msv { // MSV
    #include "Loadouts\msv_csat_sama_hex.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civ_gear.hpp"
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
