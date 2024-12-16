class cup_balaclava_ratnik_alt_hat {
	label="Balaclava [Ratnik, Alt]";
	author="Community Upgrade Project";
	options[]= { "camo", "eyeholes", "microphone" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "WHT" };
		
		class GRN
		{
			label = CSTRING(WinterGreen_Label);
			description = CSTRING(WinterGreen_Description);
			image = "#(rgb,8,8,3)color(0.37,0.36,0.27,1)";
		};

		class WHT
		{
			label = CSTRING(Winter_Label);
			description = CSTRING(Winter_Description);
			image = "#(rgb,8,8,3)color(0.94,0.94,0.90,1)";
		};
	};

	class eyeholes
	{
		alwaysSelectable = 1;
		label = CSTRING(Eyeholes);
		values[] = {"one", "two" };
		class one
		{
			label = CSTRING(One);
		};
		class two
		{
			label = CSTRING(Two);
		};
	};
	class microphone
	{
		alwaysSelectable = 1;
		values[] = { "no", "yes" };
		label = CSTRING(Microphone);
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
