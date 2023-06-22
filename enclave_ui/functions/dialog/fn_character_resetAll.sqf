params ["_unit"];

{
    private _index = _forEachIndex;
    
    private _karma = [_unit, (_index + 1)] call enclave_fnc_character_reset;
} forEach [1,1,1];