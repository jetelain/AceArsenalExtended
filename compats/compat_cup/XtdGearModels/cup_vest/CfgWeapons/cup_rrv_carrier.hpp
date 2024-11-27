class cup_rrv_carrier {
	label="RRV Carrier";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CBR", "GRN" };
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"EMPTY", "MG", "MED", "OFC", "SCT", "SCT_2", "SCT_3", "TL" };
		class SCT_2
		{
			label = "Scout 2";
		};

		class SCT_3
		{
			label = "Scout 3";
		};
	};
};
