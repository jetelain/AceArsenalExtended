class cup_beanie_cherciv {
	label="Beanie [CherCiv]";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BRN", "BRN_YLW", "DRK_BRN", "BLK_WHT" };
		class BRN
		{
			label = "Brown";
			image = QPATHTOF(data\camo\civ\beanie_2.paa);
		};

		class BRN_YLW
		{
			label = "Brn/Ylw";
			description = "Brown/Yellow";
			image = QPATHTOF(data\camo\civ\beret_3.paa);
		};

		class DRK_BRN
		{
			label = "Drk Brn";
			description = "Dark Brown";
			image = QPATHTOF(data\camo\civ\beret_4.paa);
		};

		class BLK_WHT
		{
			label = "Blk/Wht";
			description = "Black/White";
			image = QPATHTOF(data\camo\civ\beret_1.paa);
		};
	};
};
