class cup_cap_def {
	label="Cap w/DEF";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"AUB", "DTOM", "MARSOC", "NY", "PUN", "TEX", "MC" };

		class AUB
		{
			label = "Auburn";
			description = "Auburn University";
			image = QPATHTOF(data\camo\cap\usa_aub.paa);
		};

		class DTOM
		{
			label = "DTOM";
			description = "Don't Tread On Me";
			image = QPATHTOF(data\camo\cap\usa_nostep.paa);
		};

		class MARSOC
		{
			label = "MARSOC";
			image = QPATHTOF(data\camo\cap\usa_marsoc.paa);
		};

		class NY
		{
			label = "New York";
			description = "New York Yankees";
			image = QPATHTOF(data\camo\cap\usa_ny.paa);
		};

		class PUN
		{
			label = "Punisher";
			image = QPATHTOF(data\camo\cap\usa_pun.paa);
		};

		class TEX
		{
			label = "Texas";
			description = "University of Texas";
			image = QPATHTOF(data\camo\cap\usa_tex.paa);
		};
	};
};
