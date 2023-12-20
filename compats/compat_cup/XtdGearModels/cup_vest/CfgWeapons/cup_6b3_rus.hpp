class cup_6b3_rus {
	label="6B3 [RUS]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"VSR", "FLRA" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "EMPTY", "AT", "MG" };
	};
};
