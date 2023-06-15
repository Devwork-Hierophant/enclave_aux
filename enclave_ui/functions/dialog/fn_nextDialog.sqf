/*
    Author:
    Silence

    Description:
    Runs the code that is associated with the "Next" button on UI's. Basically opens the next UI and saves data from the previous.

    Params:
    _unit   <UNIT>
    _dialog   <STRING>

    Usage:
    [_unit, _dialog] call enclave_fnc_nextDialog;
*/

params ["_unit", "_dialog"];

private _name = ctrlText 1400;
private _age = round (parseNumber (ctrlText 1401)); // no sneaky floats
private _faction = ctrlText 1402;
private _background = ctrlText 1403;

if (_age isEqualTo 0) exitWith {hint "Age is 0 or contains non-numbers."; diag_log "Age is 0 or contains non-numbers."};

// save data here, then move onto skills

hint str [_name, _age, _faction, _background];

[_unit, _dialog] spawn enclave_fnc_changeDialog;