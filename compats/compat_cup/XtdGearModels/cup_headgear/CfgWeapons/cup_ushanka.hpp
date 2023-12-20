class cup_ushanka {
	label="Ushanka";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DBRN", "GRN", "LBRN", "MBRN" };
		class DBRN
		{
			label = "Dark Brown";
			image = "#(rgb,8,8,3)color(0.27,0.22,0.18,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.41,0.42,0.25,1)";
		};

		class LBRN
		{
			label = "Light Brown";
			image = "#(rgb,8,8,3)color(0.42,0.35,0.26,1)";
		};

		class MBRN
		{
			label = "Medium Brown";
			image = "#(rgb,8,8,3)color(0.36,0.25,0.17,1)";
		};
	};
};
