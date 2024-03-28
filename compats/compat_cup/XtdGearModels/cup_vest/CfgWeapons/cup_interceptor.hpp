class cup_interceptor {
	label="Interceptor";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CBR", "DCP", "GRY", "M81", "OLI", "WDL" };
		class WDL
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\wdl_intercept.paa);
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "GL", "RIFL" };
	};

};
