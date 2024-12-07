class cup_rackeeter {
	label="Racketeer Clothes";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK_GRY", "BLU_GRN", "GRY_BLU", "TAN_BLK" };

		class BLK_GRY
		{
			label = "Black/Grey";
			image = QPATHTOF(data\camo\racketeer\blk_gry.paa);
		};

		class BLU_GRN
		{
			label = "Blue/Green";
			image = QPATHTOF(data\camo\racketeer\blu_grn.paa);
		};

		class GRY_BLU
		{
			label = "Grey/Blue";
			image = QPATHTOF(data\camo\racketeer\gry_blu.paa);
		};

		class TAN_BLK
		{
			label = "Tan/Black";
			image = QPATHTOF(data\camo\racketeer\tan_blk.paa);
		};
	};
};
