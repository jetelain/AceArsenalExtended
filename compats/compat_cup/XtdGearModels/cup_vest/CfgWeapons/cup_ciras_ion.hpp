class cup_ciras_ion {
	label="CIRAS [ION]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "CBR", "KHK", "OD", "WNTR" };
		class WNTR
		{
			image = QPATHTOF(data\camo\ciras_wntr.paa);
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"PTRL", "DRIVER", "EMPTY", "GL", "TL" };
		class DRIVER
		{
			label = "Driver";
		};
	};
};
