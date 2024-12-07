class cup_boonie_ger {
	label="Boonie [GER]";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"FLCK", "TRPTRN" };
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
