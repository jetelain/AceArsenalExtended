class cup_mbss_paca {
	label="MBSS + PACA";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "CBR", "GRN", "RGR", "TAN" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"1", "2" };
	};
};
