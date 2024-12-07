class cup_cap_misc {
	label="Cap [Misc]";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"ATACS_AU", "ATACS_FG", "EMR_SUM", "M81", "MAGA", "MC", "UCP", "TRK_IR" };

		class BUR
		{
			label = "Burberry";
			image = QPATHTOF(data\camo\pmc\burberry.paa);
		};

		class MAGA
		{
			label = "MAGA";
			description = "Make Arma Great Again";
			image = "#(rgb,8,8,3)color(0.82,0.27,0.18,1)";
		};

		class TRK_IR
		{
			label = "Track IR";
			image = "#(rgb,8,8,3)color(0.32,0.29,0.26,1)";
		};

	};
};
