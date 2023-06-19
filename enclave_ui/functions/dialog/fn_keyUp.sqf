params ["_displayOrControl", "_key", "_shift", "_ctrl", "_alt"];

#include "..\..\commonDefs.hpp"

if (_shift) exitWith {};
if (_ctrl) exitWith {};
if (_alt) exitWith {};

playSoundUI [SOUND_CLICK]; // imported from #include