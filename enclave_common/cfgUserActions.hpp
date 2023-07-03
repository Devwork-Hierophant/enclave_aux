class CfgUserActions
{
	class enclave_character_selectCharacter
	{// This class name is used for internal representation and also for the inputAction command.
		displayName = "Character Menu";
		tooltip = "";
		onActivate = "[""enclave_character_choose"", player] call enclave_fnc_openDialog;";		// _this is always true.
		onDeactivate = "";		// _this is always false.
		onAnalog = "";	// _this is the scalar analog value.
		analogChangeThreshold = 0.1; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
};

class UserActionGroups
{
	class enclave_keybinds
	{
		name = "Enclave"; // Display name of your category.
		isAddon = 1;
		group[] =
		{
			"enclave_character_selectCharacter"
		};
	};
};