class cup_officer_cap_usmc_alt {
	label="Officer Cap [USMC, Alt]";
	author="Community Upgrade Project";
	options[]= { "headset" };

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
