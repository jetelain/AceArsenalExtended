class cup_beret_cherciv {
	label="Beret [CherCiv]";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BRN_CHK", "DRK_BRN", "LIT_BRN", "PRP_GLD" };
		class BRN_CHK
		{
			label = "Brn Chk";
			description = "Brown Checkerboard";
			image = QPATHTOF(data\camo\civ\beret_4.paa);
		};

		class DRK_BRN
		{
			label = "Dark Brn";
			description = "Dark Brown";
			image = QPATHTOF(data\camo\civ\beret_1.paa);
		};

		class LIT_BRN
		{
			label = "Lit Brn";
			description = "Light Brown";
			image = QPATHTOF(data\camo\civ\beret_2.paa);
		};

		class PRP_GLD
		{
			label = "Prp/Gld";
			description = "Purple/Gold";
			image = QPATHTOF(data\camo\civ\beret_3.paa);
		};
	};
};
