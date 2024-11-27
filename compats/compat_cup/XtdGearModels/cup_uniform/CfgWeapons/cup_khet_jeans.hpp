class cup_khet_jeans {
	label="Khet/Jeans";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "GRY_BLU", "GRY_BLK", "LBLU_BLU", "BRN_BLU" };
		class GRY_BLU
		{
			label = "Grey/Blue";
			image = QPATHTOF(data\camo\khet\jeans_gry_blu.paa);
		};

		class GRY_BLK
		{
			label = "Grey/Black";
			image = QPATHTOF(data\camo\khet\jeans_gry_blk.paa);
		};

		class LBLU_BLU
		{
			label = "Light Blue/Blue";
			image = QPATHTOF(data\camo\khet\jeans_lblu_blu.paa);
		};

		class BRN_BLU
		{
			label = "Brown/Blue";
			image = QPATHTOF(data\camo\khet\jeans_brn_blu.paa);
		};
	};
};
