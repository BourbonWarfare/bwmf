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