class cup_npp2006 {
	label="NPP-2006";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "BLK", "CBR", "VZ95" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "1PAD", "2PAD", "TL", "LIGHT"};
		class 1PAD
		{
			label = "1 Kneepad";
		};

		class 2PAD
		{
			label = "2 Kneepad";
		};
	};
};
