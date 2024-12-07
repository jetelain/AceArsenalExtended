class cup_iotv_ion {
	label="IOTV [ION]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "CBR" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"AR", "EMPTY", "GL", "PTRL", "TL" };
	};
};
