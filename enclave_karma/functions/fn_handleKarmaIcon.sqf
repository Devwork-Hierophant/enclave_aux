/*
    Author:
    Silence

    Description:
    Handles karma icon updating. _karmaChange 1 is a plus, 0 is a minus

    Params:
    _unit        <UNIT>
    _karma       <INT>
    _karmaChange <INT>

    Usage:
    [_unit, _karma, _karmaChange] call enclave_fnc_handleKarmaIcon;
*/

params ["_unit", "_karma", "_karmaChange"];

if (_unit getVariable ["enclave_karma_updating", false] isEqualTo true) exitWith {diag_log "Karma UI already updating, skipping"};

#include "\enclave_ui\commonDefs.hpp"

private _icon = "";
private _text = "";

diag_log _karma;

switch (true) do
{
    case (_karma >= 1000):
    {
        _icon = ""PIPBOY_GOD""; // fucks up if it's just a string, not sure why. Preprocesser will make it """path""" which works
    };
    case (_karma <= -1000):
    {
        _icon = ""PIPBOY_DEVIL"";
    };
    case (_karma >= 500):
    {
        _icon = ""PIPBOY_ANGEL"";
    };
    case (_karma <= -500):
    {
        _icon = ""PIPBOY_DEMON"";
    };
    case (_karma >= 20):
    {
        _icon = ""PIPBOY_NEUTRAL"";
    };
    case (_karma <= -20):
    {
        _icon = ""PIPBOY_NEUTRAL"";
    };
    default
    {
        _icon = ""PIPBOY_NEUTRAL"";
    };
};

if (_karmaChange isEqualTo 1) exitWith {
    [_unit, _icon] call enclave_fnc_karmaUp;
};

[_unit, _icon] call enclave_fnc_karmaDown;