class cup_beanie_grn {
	label="Beanie [GRN]";
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
