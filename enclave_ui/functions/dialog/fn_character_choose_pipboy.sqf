params ["_idc"];

// hint str _idc;

#include "..\..\commonDefs.hpp"

// grab karma from sql, change pipboy based on that

private _pipboy = selectRandom PIPBOYS;

ctrlSetText [_idc, _pipboy];