// params [""];

#include "..\..\commonDefs.hpp"

private _skillPoints = localNamespace getVariable ["enclave_sheet_skillPoints", SKILL_POINTS];

// hint str _skillPoints;

private _textPoints = format
[
"
<t size='1' valign='top' align='center' color='#00ff00' shadow='2'>

<t font='PuristaSemibold' size='2.5 '>%1</t>
<br />
<br />
<br />
<t font='PuristaSemibold' size='1.5'>Points Available</t>
<br />
<br />
<br />
",
str _skillPoints
];

((uiNamespace getVariable "enclave_sheet") displayCtrl 1103) ctrlSetStructuredText parseText _textPoints;