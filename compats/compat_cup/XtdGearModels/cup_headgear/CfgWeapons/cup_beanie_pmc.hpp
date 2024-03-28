class cup_beanie_pmc {
	label="Beanie [PMC]";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "KHK", "WHT" };
		class KHK
		{
			image = "#(rgb,8,8,3)color(0.31,0.31,0.24,1)";
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
