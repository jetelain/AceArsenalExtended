class cup_lwh {
	label="LWH";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"CBR", "6CDP", "ERDL_L", "MRPT_D", "MRPT_WD", "OD", "TPAT", "TSW" };
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes_cover", "yes_cover_back" };
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
