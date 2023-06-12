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

// save data here, then move onto skills

private _name = ctrlText 1400;
private _age = ctrlText 1401;
private _faction = ctrlText 1402;
private _background = ctrlText 1403;

hint str [_name, _age, _faction, _background];

[_unit, _dialog] spawn enclave_fnc_changeDialog;