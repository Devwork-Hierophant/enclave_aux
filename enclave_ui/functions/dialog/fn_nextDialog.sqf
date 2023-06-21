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

#include "..\..\commonDefs.hpp"

// save data here, then move onto skills

private _name = ctrlText 1400;
private _age = (round (parseNumber ctrlText 1401));
private _faction = ctrlText 1402;
private _background = ctrlText 1403;

if (_age isEqualTo 0) exitWith {hint "Age is 0 or contains non-numbers."; diag_log "Age is 0 or contains non-numbers."};
if (_age > 99) exitWith {hint "Age is above 99 or contains non-numbers."; diag_log "Age is above 99 or contains non-numbers."};

//Im gonna hate myself for this. God forgive me
private _v1 = [1,0, (format["SELECT charNum FROM characterinfo WHERE cid=%1 ORDER BY charNum DESC;",CID]) ] call enclave_db_fnc_callExtDB3;

_v1 = _v1 select 0;

switch (_v1) do 
{
    case 1: 
    {
        [0,0, (format["INSERT INTO characterinfo VALUES (%1, %2, %3, %4, %5, %6);",CID,"2",_name,_background,_age,_faction]) ] call enclave_db_fnc_callExtDB3;
    };
    case 2: 
    {
        [0,0, (format["INSERT INTO characterinfo VALUES (%1, %2, %3, %4, %5, %6);",CID,"3",_name,_background,_age,_faction]) ] call enclave_db_fnc_callExtDB3;
    };
    case 3: 
    {
        hint "naughty naughty"; //You should not have more than 3 characters
    };
    default
    {
        [0,0, (format["INSERT INTO characterinfo VALUES (%1, %2, %3, %4, %5, %6);",CID,"1",_name,_background,_age,_faction]) ] call enclave_db_fnc_callExtDB3;
    };
};

//TODO: SEE WHAT V1 IS AND MAKE THE CHARNUM BE WHAT IT NEEDS TO BE.... FML

// save data here, then move onto skills

hint str [_name, _age, _faction, _background];

[_unit, _dialog] spawn enclave_fnc_changeDialog;