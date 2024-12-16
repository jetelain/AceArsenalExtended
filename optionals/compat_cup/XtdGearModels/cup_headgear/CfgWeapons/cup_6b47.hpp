class cup_6b47 {
	label="6B47";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headphones", "nvg" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BGEDIGI", "EMR_SUM", "WHT" };

		class WHT
		{
			label = "Winter";
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "up", "up_cover", "down" };
	};

	class headphones
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_mic"};
		label = CSTRING(Headphones);
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
			description = "GSSh-01";
		};
		class yes_mic
		{
			label = CSTRING(YesMic);
			description = "GSSh-01-01";
		};
	};

	class nvg
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes" };
		label = CSTRING(NVGMount);
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
