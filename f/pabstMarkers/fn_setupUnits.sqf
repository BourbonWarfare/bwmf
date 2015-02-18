_units = [];

switch (_unitfaction) do {
    case "blu_f": {
        _units = [
        ["UnitNATO_CO_M","COM"],
        ["UnitNATO_DC_M","DCM"],
        ["UnitNATO_ASL_M","AM"],
        ["UnitNATO_BSL_M","BM"],
        ["UnitNATO_CSL_M","CM"],
        ["UnitNATO_DSL_M","DM"],
        ["UnitNATO_ESL_M","EM"],
        ["UnitNATO_FSL_M","FM"]
        ];

    };
    case "opf_f": {
        _units = [
        ["UnitCSAT_CO_M","COM"],
        ["UnitCSAT_DC_M","DCM"],
        ["UnitCSAT_ASL_M","AM"],
        ["UnitCSAT_BSL_M","BM"],
        ["UnitCSAT_CSL_M","CM"]
        ];
    };
    case "ind_f": {
        _units = [
        ["UnitAAF_CO_M","COM"],
        ["UnitAAF_DC_M","DCM"],
        ["UnitAAF_ASL_M","AM"],
        ["UnitAAF_BSL_M","BM"],
        ["UnitAAF_CSL_M","CM"]
        ];
    };
    case "rhs_faction_msv": {
        _units = [
        ["UnitMSV_ASL_VD","AV"],
        ["UnitMSV_B1_VD","BV"],
        ["UnitMSV_C1_VD","CV"],
        ["UnitMSV_D1_VD","DV"],
        ["UnitMSV_E1_VD","EV"],
        ["UnitMSV_F1_VD","FV"]

        ];
    };
};

{
    _style = [_x select 1] call F_fnc_getGroupMarkerStyle;
    [_x select 0, _x select 1,  _style select 0,_style select 1,_style select 2] call F_fnc_addGroupMarker;
} foreach _units;