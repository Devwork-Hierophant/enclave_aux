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

private _cid = [1,0, (format["SELECT cid FROM playerinfo WHERE sid=%1",getPlayerUID player]) ] call enclave_db_fnc_callExtDB3;

//Im gonna hate myself for this. God forgive me
private _v1 = [1,0, (format["SELECT charNum FROM characterinfo WHERE cid=%1 ORDER BY charNum DESC;",_cid]) ] call enclave_db_fnc_callExtDB3;

switch (_v1) do 
{
    case 1: 
    {
        
    };
    case 2: 
    {
        
    };
    case 3: 
    {
        
    };
    default:
    {
        
    };
};

//TODO: SEE WHAT V1 IS AND MAKE THE CHARNUM BE WHAT IT NEEDS TO BE.... FML

[0,0, (format["INSERT INTO characterinfo VALUES (%1, %2, %3, %4, %5);",_cid,_name,_background,_age,_faction]) ] call enclave_db_fnc_callExtDB3;
// save data here, then move onto skills

hint str [_name, _age, _faction, _background];

[_unit, _dialog] spawn enclave_fnc_changeDialog;