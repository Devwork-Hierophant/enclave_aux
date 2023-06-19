params ["_unit", "_newKarma", ["_operator", "+"], ["_global", true]];

private _karma = _instigator getVariable ["enclave_karma", KARMA_DEFAULT];

if (_operator isEqualTo "-") exitWith {
    _unit setVariable ["enclave_karma", (_karma - _newKarma), _global];
};

_unit setVariable ["enclave_karma", (_karma + _newKarma), _global];