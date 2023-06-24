/*
    Author:
    Silence

    Description:
    Formats a karma down string, then executes it

    Params:
    _unit       <UNIT>
    _icon       <STRING>

    Usage:
    [_unit] call enclave_fnc_karma;
*/

params ["_unit", "_icon"];

_unit setVariable ["enclave_karma_updating", true];

private _karmaText = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<br />
<br />
<br />
<br />
<br />
<br />
<t font='PuristaSemibold' size='2'>Karma Update</t>
<br />
<t font='PuristaSemibold' size='15' shadow='0'><img image=%1 /></t>
<br />
<t font='PuristaSemibold' size='1.7'>You've lost Karma!</t>
",
_icon
];

"enclave_karma_ui_text" cutText [_karmaText, "PLAIN", 5, true, true];

_unit say2D "enclave_karma_bad";

[{"enclave_karma_ui_text" cutFadeOut 0.5;}, [], 6] call CBA_fnc_waitAndExecute;

[{(_this select 0) setVariable ["enclave_karma_updating", false]}, [_unit], 120] call CBA_fnc_waitAndExecute;

_karmaText