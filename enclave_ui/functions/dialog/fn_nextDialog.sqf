params ["_unit", "_dialog"];

// save data here, then move onto skills

private _name = ctrlText 1400;
private _age = ctrlText 1401;
private _faction = ctrlText 1402;
private _background = ctrlText 1403;

hint str [_name, _age, _faction, _background];

[_unit, _dialog] spawn enclave_fnc_buttonReset;