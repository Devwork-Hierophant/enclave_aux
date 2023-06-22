params ["_idc", ["_karma", 0]];

// hint str _idc;

#include "..\..\commonDefs.hpp"

// grab karma from sql, change pipboy based on that

private _icon = "";

switch (true) do
{
    case (_karma >= 1000):
    {
        _icon = PIPBOY_GOD; // fucks up if it's just a string, not sure why. Preprocesser will make it """path""" which works
    };
    case (_karma <= -1000):
    {
        _icon = PIPBOY_DEVIL;
    };
    case (_karma >= 500):
    {
        _icon = PIPBOY_ANGEL;
    };
    case (_karma <= -500):
    {
        _icon = PIPBOY_DEMON;
    };
    case (_karma >= 20):
    {
        _icon = PIPBOY_NEUTRAL;
    };
    case (_karma <= -20):
    {
        _icon = PIPBOY_NEUTRAL;
    };
    default
    {
        _icon = PIPBOY_NEUTRAL;
    };
};

ctrlSetText [_idc, _icon];