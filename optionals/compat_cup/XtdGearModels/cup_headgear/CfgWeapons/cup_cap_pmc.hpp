class cup_cap_pmc {
	label="Cap [PMC]";
	author="Community Upgrade Project";
	options[]= { "camo", "headset", "facing" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BUR", "GRY", "TAN" };

		class BUR
		{
			label = "Burberry";
			image = QPATHTOF(data\camo\pmc\burberry.paa);
		};

		class TAN
		{
			image = "#(rgb,8,8,3)color(0.60,0.53,0.39,1)";
		};

	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"none", "DEF", "PRR" };
		class none
		{
			label = CSTRING(None);
		};

		class def
		{
			label = "DEF";
		};

		class prr
		{
			label = "PRR";
		};
	};

	class facing
	{
		alwaysSelectable = 1;
		changeingame = 1;
		label = "Facing";
		values[] = {"forward", "backward" };

		class forward
		{
			label = "Forward";
			actionLabel = "Turn Cap Forward";
		};

		class backward
		{
			label = "Backward";
			actionLabel = "Turn Cap Backward";
		};
	};
};
