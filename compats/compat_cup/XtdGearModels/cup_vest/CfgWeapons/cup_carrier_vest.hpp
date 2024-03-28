class cup_carrier_vest {
	label="Carrier Vest";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"OLI", "TAN" };
		class OLI
		{
			image = "#(rgb,8,8,3)color(0.21,0.23,0.17,1)";
		};

		class TAN
		{
			image = "#(rgb,8,8,3)color(0.63,0.57,0.42,1)";
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "NO_HOLST", "ADJ_RADIO" };
		class NO_HOLST
		{
			label = "No Holster";
		};

		class ADJ_RADIO
		{
			label = "Adj Radio";
			description = "Adjusted Radio";
		};
	};
};
