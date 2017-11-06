// UNDEF
#ifdef KEY
    #undef KEY
#endif
#ifdef CHEM_LIGHT
    #undef CHEM_LIGHT
#endif
#ifdef UAV_BACKPACK
    #undef UAV_BACKPACK
#endif
#ifdef UAV_TERMINAL
    #undef UAV_TERMINAL
#endif

#ifdef SIDE_WEST
    #define KEY "ACE_key_west"
    #define CHEM_LIGHT "Chemlight_blue"
    #define UAV_BACKPACK "B_UAV_01_backpack_F"
    #define UAV_TERMINAL "B_uavterminal"
#else
    #ifdef SIDE_EAST
        #define KEY "ACE_key_east"
        #define CHEM_LIGHT "Chemlight_red"
        #define UAV_BACKPACK "O_UAV_01_backpack_F"
        #define UAV_TERMINAL "O_uavterminal"
    #else
        #ifdef SIDE_INDY
            #define KEY "ACE_key_indp"
            #define CHEM_LIGHT "Chemlight_green"
            #define UAV_BACKPACK "I_UAV_01_backpack_F"
            #define UAV_TERMINAL "I_uavterminal"
        #else // SIDE_CIV assumed
            #define KEY "ACE_key_civ"
            #define CHEM_LIGHT "Chemlight_yellow"
            #define UAV_BACKPACK "C_IDAP_UAV_01_backpack_F" // Orange DLC notice
            #define UAV_TERMINAL "C_uavterminal" // test, not on wiki
        #endif
    #endif
#endif
