class cup_mich_2000_us {
	label="MICH 2000 [US]";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"M81", "UCP" };
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
