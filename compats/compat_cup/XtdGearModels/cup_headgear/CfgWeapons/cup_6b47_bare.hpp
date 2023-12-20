class cup_6b47_bare {
	label="6B47 [Bare]";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset", "sf_kit" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"TAN", "GRN", "BLK" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.20,0.20,0.17,1)";
		};
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

	class sf_kit
	{
		alwaysSelectable = 1;
		label = "SF Kit";
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
