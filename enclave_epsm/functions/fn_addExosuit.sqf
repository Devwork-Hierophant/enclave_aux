/*
    Author:
    Silence

    Description:
    Adds a backpack to the EPSM array, hopefully stops people completely breaking the array themselves

    Params:
    _classname  <STRING>

    Usage:
    [_classname] call enclave_fnc_addExosuit;
*/

params ["_classname"];

private _oldData = WBK_AdvancedArmor;

private _newData = _oldData pushBack _classname;

diag_log format ["Added %1 to WBK_AdvancedArmor. New Array: %2", _classname, _newData];

if ("jetpack" in _classname) then {
    private _oldData = WBK_JumpPackArray;

    private _newData = _oldData pushBack _classname;

    diag_log format ["Added %1 to WBK_JumpPackArray. New Array: %2", _classname, _newData];
};