class cup_6b27 {
	label="6B27";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BGEDIGI", "EMR_SUM" };
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
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
