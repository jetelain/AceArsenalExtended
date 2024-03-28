class cup_cap_ger {
	label="Cap [GER]";
	author="Community Upgrade Project";
	options[]= { "camo", "patch", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"OLI", "TAN" };

		class OLI
		{
			image = "#(rgb,8,8,3)color(0.39,0.39,0.26,1)";
		};

		class TAN
		{
			image = "#(rgb,8,8,3)color(0.86,0.80,0.64,1)";
		};
	};

	class patch
	{
		alwaysSelectable = 1;
		label = "Flag Patch";
		values[] = {"PLN", "DEU", "SKULL" };

		class PLN
		{
			label = "Plain";
		};

		class DEU
		{
			label = "DEU";
		};

		class SKULL
		{
			label = "Skull";
		};
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"no", "yes" };
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
