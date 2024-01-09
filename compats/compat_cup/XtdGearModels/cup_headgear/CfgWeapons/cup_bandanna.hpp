class cup_bandanna {
	label="Bandanna";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "M81" };
		
		class GRN
		{
			image = "#(rgb,8,8,3)color(0.37,0.37,0.21,1)";

		};
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"none", "earpiece", "ggsh_01" };
		class none
		{
			label = CSTRING(None);
		};

		class earpiece
		{
			label = "Earpiece";
		};

		class ggsh_01
		{
			label = "GGSh-01";
		};
	};
};
