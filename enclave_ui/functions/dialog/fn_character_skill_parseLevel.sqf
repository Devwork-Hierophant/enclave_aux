/*
    Author:
    Silence

    Description:
    Parses an integer into a structured text

    Params:
    _level  <INTEGER>

    Usage:
    [_level] call enclave_fnc_character_skill_parseLevel;
*/

params ["_level"];

private _textLevel = parseText format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaBold' size='2'>%1</t>
<br />
<br />
<br />
",
str _level
];

// hint _textLevel;

_textLevel