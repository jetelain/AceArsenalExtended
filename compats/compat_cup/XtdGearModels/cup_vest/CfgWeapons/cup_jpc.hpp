class cup_jpc {
	label="JPC";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "belt" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "CBR", "MC", "RGR" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"LIGHT", "COMM", "FAST", "MED", "TL", "WEP" };

		class COMM
		{
			label = "Comms";
			description = "Communications";
		};

		class FAST
		{
			label = "Fast";
		};

		class WEP
		{
			label = "Weapons";
		};
	};

	class belt
	{
		alwaysSelectable = 0;
		label = "Belt";
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
