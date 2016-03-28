// data values
private _red = [1,0,0,1];
private _green = [0,1,0,1];
private _blue = [0,0,1,1];
private _yellow = [1,1,0,1];
private _orange  = [1,0.647,0,1];
private _black = [0,0,0,1];
private _pink = [1,0.753,0.796,1];
private _white = [1,1,1,1];
private _fireteam = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
private _unknown = "\A3\ui_f\data\map\markers\nato\b_unknown.paa";
private _hq = "\A3\ui_f\data\map\markers\nato\b_hq.paa";
private _support = "\A3\ui_f\data\map\markers\nato\b_support.paa"; // MMG HMG
private _supportAT = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa"; // MAT HAT
private _recon = "\A3\ui_f\data\map\markers\nato\b_recon.paa"; // Sniper
private _mortar = "\A3\ui_f\data\map\markers\nato\b_mortar.paa"; // Mortar
private _maint = "\A3\ui_f\data\map\markers\nato\b_maint.paa"; // Engineers
private _mech = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa"; // IFV/APC
private _armor = "\A3\ui_f\data\map\markers\nato\b_armor.paa"; // Tank
private _air = "\A3\ui_f\data\map\markers\nato\b_air.paa"; // Helos
private _plane = "\A3\ui_f\data\map\markers\nato\b_plane.paa"; // Planes
private _artillery = "\A3\ui_f\data\map\markers\nato\b_art.paa"; // Artillery

private _med = "\A3\ui_f\data\map\markers\nato\b_med.paa"; // Medic

private _size = [24,24];

private _input = _this select 0;
private _texture = _unknown;
private _color = [1,1,1,1];
switch true do {
  case (_input in ["COY","1PLT","2PLT","CO","DC"]): {
    _texture = _hq;
    _color = _yellow;
  };
  case (_input in ["ASL"]): {
    _texture = _hq;
    _color = _red;
  };
  case (_input in ["A1","A2","A3","ASR"]): {
    _texture = _fireteam;
    _color = _red;
  };
  case (_input in ["BSL"]): {
    _texture = _hq;
    _color = _blue;
  };
  case (_input in ["B1","B2","B3","BSR"]): {
    _texture = _fireteam;
    _color = _blue;
  };
  case (_input in ["CSL"]): {
    _texture = _hq;
    _color = _green;
  };
  case (_input in ["C1","C2","C3","CSR"]): {
    _texture = _fireteam;
    _color = _green;
  };
  case (_input in ["DSL"]):
  {
    _texture = _hq;
    _color = _red;
  };
  case (_input in ["D1","D2","D3","DSR"]): {
    _texture = _fireteam;
    _color = _red;
  };
  case (_input in ["ESL"]): {
    _texture = _hq;
    _color = _blue;
  };
  case (_input in ["E1","E2","E3","ESR"]): {
    _texture = _fireteam;
    _color = _blue;
  };
  case (_input in ["FSL"]): {
    _texture = _hq;
    _color = _green;
  };
  case (_input in ["F1","F2","F3","FSR"]): {
    _texture = _fireteam;
    _color = _green;
  };
  case (_input in ["WSL"]): {
    _texture = _hq;
    _color = _orange;
  };
  case (_input in ["MMG1","MMG2","MMG3"]): {
    _texture = _support;
    _color = _orange;
  };
  case (_input in ["HMG1","HMG2","HMG3"]): {
    _texture = _support;
    _color = _orange;
  };
  case (_input in ["MAT1","MAT2","MAT3"]): {
    _texture = _supportAT;
    _color = _orange;
  };
  case (_input in ["HAT1","HAT2","HAT3"]): {
    _texture = _supportAT;
    _color = _orange;
  };
  case (_input in ["MTR1","MTR2","MTR3"]): {
    _texture = _mortar;
    _color = _orange;
  };
  case (_input in ["MSAM1","MSAM2","MSAM3"]): {
    _texture = _supportAT;
    _color = _orange;
  };
  case (_input in ["HSAM1","HSAM2","HSAM3"]): {
    _texture = _supportAT;
    _color = _orange;
  };
  case (_input in ["ST1","ST2","ST3"]): {
    _texture = _recon;
    _color = _orange;
  };
  case (_input in ["DT1","DT2","DT3"]): {
    _texture = _recon;
    _color = _orange;
  };
  case (_input in ["ENG1","ENG2","ENG3"]): {
    _texture = _maint;
    _color = _orange;
  };
  case (_input in ["IFV1","IFV2"]): {
    _texture = _mech;
    _color = _red;
  };
  case (_input in ["IFV3","IFV4"]): {
    _texture = _mech;
    _color = _blue;
  };
  case (_input in ["IFV5","IFV6"]): {
    _texture = _mech;
    _color = _green;
  };
  case (_input in ["IFV7","IFV8"]): {
    _texture = _mech;
    _color = _orange;
  };
  case (_input in ["TNK1","TNK2","TNK3"]): {
    _texture = _armor;
    _color = _red;
  };
  case (_input in ["TH1","TH2"]): {
    _texture = _air;
    _color = _red;
  };
  case (_input in ["TH3","TH4"]): {
    _texture = _air;
    _color = _blue;
  };
  case (_input in ["TH5","TH6"]): {
    _texture = _air;
    _color = _green;
  };
  case (_input in ["TH7","TH8"]): {
    _texture = _air;
    _color = _orange;
  };
  case (_input in ["AH1","AH2","AH3"]): {
    _texture = _air;
    _color = _orange ;
  };
  case (_input in ["COM","DCM","P1M","P2M","AM","BM","CM","DM","EM","FM","WSM"]): {
    _texture = _med;
    _color = _pink;
    _size = [16,16];
  };
};
[_texture, _color, _size];
