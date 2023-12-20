class cup_mbss {
	label="MBSS";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"CBR", "OLI" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"1", "2" };
	};
};
