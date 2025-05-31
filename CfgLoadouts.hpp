class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 0;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Vehicle Loadouts -- see "us_mx_mtp.hpp" for examples
  // -1. Clear and leave inventories empty empty
  //  0. Leave them to vanilla defaults
  //  1. Defined supplies are put into vehicle's inventory
  //  2. Store supplies from vehicle inventory into ammo boxes in vehicle ACE cargo
  //  3. Use ammo box definitions to create ammo boxes in vehicle's ACE cargo and clear inventory
  setVehicleLoadouts = -1;

  // Do Supply Box Loadouts
  // -1. Clear and leave inventories empty empty
  //  0. Leave them to vanilla defaults
  //  1. Defined supplies are put into box's inventory
  //  2. Use ammo box definitions to create ammo boxes in box's ACE cargo and clear inventory
  setSupplyBoxLoadouts = 0;
  class SupplyBoxes {
    /* Example: setSupplyBoxLoadouts = 1
    class B_supplyCrate_F {
      TransportWeapons[] = {"arifle_TRG20_F"};
      TransportMagazines[] = {"30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"};
      TransportItems[] = {"ACRE_PRC148:10"};
    };
    */
    /* Example: setSupplyBoxLoadouts = 2
    class I_supplyCrate_F { // overarching box
      addMarkingActions = 0; // 0 for none, 1 for single use of smoke/flare
      boxCustomName = "Easy To Find Name";
      boxSpace = 8; // ACE cargo space box will have
      class Box_NATO_Ammo_F { // sub box
        boxCount = 4; // number of boxes to create
        boxCustomName = "Resupply Box";
        TransportWeapons[] = {"arifle_TRG20_F:4"};
        TransportMagazines[] = {"30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"};
        TransportItems[] = {"ACE_elasticBandage:25","ACE_packingBandage:15","ACE_tourniquet:5","ACE_splint:5"};
      };
    };
    class B_supplyCrate_F { // falls back to work the same way as Mode 1 without defined sub-boxes
      TransportWeapons[] = {"arifle_TRG20_F"};
      TransportMagazines[] = {"30Rnd_556x45_Stanag_red:8","30Rnd_556x45_Stanag_Tracer_Red:2"};
      TransportItems[] = {"ACRE_PRC148:10"};
    };
    */
  };

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"potato_w_", "potato_e_", "potato_i_", "potato_nolambs_w_", "potato_nolambs_e_", "potato_nolambs_i_"};

  // Shared defines
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING


  // cleanup.bat will delete any loadouts not in active use (so make sure to include before running)

  // Blufor/Indfor/Opfor folders are just for organization, they can be used with any faction
  // e.g. Blufor\us_mx_mtp.hpp for potato_e is fine

  // Loadouts can be either kept in the Loadouts\Blufor\ folders or moved up to Loadouts\

  // West factions
  #include "Loadouts\west_gear.hpp"
  class potato_w { // BluFor
    #include "Loadouts\Blufor\us_mx_mtp.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class potato_i { // Indy
    #include "Loadouts\Indfor\aaf_f2000_digi.hpp"
  };

  // East Factions
  #include "Loadouts\east_gear.hpp"
  class potato_e { // OpFor
    #include "Loadouts\Opfor\csat_sama_hex.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civ_gear.hpp"
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
