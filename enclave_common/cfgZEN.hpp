    class delta_green_zen
    {
        displayName = "Spook";
        condition = "_hoveredEntity isKindOf ""CAManBase"" && {isPlayer _hoveredEntity}";
        icon = "\dg_common\ui\spook_ca.paa";
        priority = 19;
        class play_sound_local
        {
            displayName = "Play Sound (Local)";
            statement = "[""Spook Player"", [[""EDIT"", ""Sound Classname""]], {[(_this select 1) select 0, (_this select 0) select 0, false] remoteExec [""delta_green_fnc_playSound"", (_this select 1) select 0]}, {}, [_hoveredEntity]] call zen_dialog_fnc_create";
            icon = "\dg_common\ui\spook_ca.paa";
            priority = 18;
        };
        class send_to_chamber
        {
            displayName = "Send To Gods Chamber";
            statement = "[""Gods Chamber"", [[""EDIT"", ""Time Until Return""], [""EDIT"", ""Sound Classname""]], {[(_this select 1) select 0, (_this select 0) select 0, (_this select 0) select 1] remoteExec [""delta_green_building_fnc_create"", (_this select 1) select 0]}, {}, [_hoveredEntity]] call zen_dialog_fnc_create";
            icon = "\dg_common\ui\spook_ca.paa";
            priority = 18;
        };
        class return_from_chamber
        {
            displayName = "Stop Chamber Teleport (if you teleported them back yourself)";
            statement = "_hoveredEntity setVariable [""delta_green_building_trapped"", false, true]";
            icon = "\dg_common\ui\spook_ca.paa";
            priority = 18;
        };
    };