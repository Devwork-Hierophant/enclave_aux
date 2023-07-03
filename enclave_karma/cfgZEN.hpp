    class enclave_zen
    {
        displayName = "Karma";
        condition = "_hoveredEntity isKindOf ""CAManBase""";
        icon = "";
        priority = 19;
        class getKarma
        {
            displayName = "Get Karma";
            statement = "hint str ([_hoveredEntity] call enclave_fnc_karma)";
            icon = "";
            priority = 18;
        };
        class editKarma
        {
            displayName = "Edit Karma";
            statement = "[""Edit Karma"", [[""EDIT"", ""Karma Amount""], [""COMBO"", ""Operator"", [[""+"", ""-""], [""Plus"", ""Minus""], 0]]], { [((_this select 1) select 0), parseNumber ((_this select 0) select 0), ((_this select 0) select 1)] call enclave_fnc_handleKarma}, {}, [_hoveredEntity]] call zen_dialog_fnc_create";
            // statement = "[""Edit Karma"", [[""EDIT"", ""Karma Amount""], [""EDIT"", ""Operator""]], { [(_this select 1) select 0, (parseNumber (_this select 0) select 0), ((_this select 0) select 1)] call enclave_fnc_handleKarma}, {}, [_hoveredEntity]] call zen_dialog_fnc_create";
            icon = "";
            priority = 19;
        };
        // bugged, cos remoteExec doesn't have a return value (using this on another player will add karma to you)
    };