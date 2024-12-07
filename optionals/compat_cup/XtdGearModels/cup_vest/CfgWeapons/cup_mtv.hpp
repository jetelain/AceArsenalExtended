class cup_mtv {
	label="MTV";
	author="Community Upgrade Project";
	options[]= { "loadout" };

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"BIG_POUCH", "BLK_HOLST", "EMPTY", "EXP", "LEG_POUCH", "MG", "DMR", "PTRL", "HOLST", "TL" };
		class BIG_POUCH
		{
			label = "Big Pouch";
		};

		class BLK_HOLST
		{
			label = "Black Holster";
		};

		class EXP
		{
			label = "EXP";
			description = "Explosive Specialist";
		};

		class LEG_POUCH
		{
			label = "Leg Pouch";
		};

		class HOLST
		{
			label = "Holster";
		};
	};
};
