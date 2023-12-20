class cup_cpc {
	label="CPC";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "belt" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"CYT", "MC", "RGR" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"COMM", "FAST", "LIGHT", "MED", "TL", "WEP" };
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
