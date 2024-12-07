class cup_oakley_glasses {
	label="Oakley Glasses";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		label = "Tint";
		alwaysSelectable = 1;
		values[] = {"CUP_TRANS", "DRK", "EMB" };

		class CUP_TRANS
		{
			label = "Clear";
		};

		class DRK
		{
			label = "Dark";
			image = "#(rgb,8,8,3)color(0.15,0.16,0.15,1)";
		};

		class EMB
		{
			label = "Ember";
			image = "#(rgb,8,8,3)color(0.41,0.14,0.09,1)";
		};
	};
};
