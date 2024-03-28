class cup_ech {
	label="ECH";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"MRPT_D", "MRPT_WD" };
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover" };
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
