params ["_name", "_age", "_faction"];

private _textCharacter = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='1.5'>Name: </t>
<t font='PuristaSemibold' size='1.5'>%1</t>
<br />
<br />
<br />
<t font='PuristaSemibold' size='1.5'>Age: </t>
<t font='PuristaSemibold' size='1.5'>%2</t>
<br />
<br />
<br />
<t font='PuristaSemibold' size='1.5'>Faction: </t>
<t font='PuristaSemibold' size='1.5'>%3</t>
<br />
<br />
<br />
",
_name,
_age,
_faction
];

_textCharacter