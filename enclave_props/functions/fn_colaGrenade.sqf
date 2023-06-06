params ["_vehicle"];

private _action = _vehicle addAction ["ACTIVATE TIMER (30s)", {

    private _arguments = _this select 3;

    private _vehicle = _arguments select 0;

    _vehicle removeAction (_arguments select 1);

    uiSleep 30;

    private _bomb = "Bomb_03_F" createVehicle [0,0,0]; 
    _bomb hideObjectGlobal true;
    _bomb setPosATL (_vehicle modelToWorld [0, 0, 0]);
    _bomb setDir getDir _vehicle;
    _bomb setDamage 1;
    deleteVehicle _vehicle;

}, [_vehicle, _action]];