class cup_ciras_us {
	label="CIRAS [US]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "CBR", "KHK", "MC", "OLI" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "NFP", "NP", "EMPTY" };
		class NFP
		{
			label = "No Frnt Pouch";
			description = "No Front Pouches";
		};

		class NP
		{
			label = "No Pouch";
			description = "No Pouches";
		};
	};

	class flag
	{
		alwaysSelectable = 0;
		label = "Flag";
		values[] = {"no", "yes"};
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};
