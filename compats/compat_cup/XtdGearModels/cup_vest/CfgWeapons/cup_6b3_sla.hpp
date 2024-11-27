class cup_6b3_sla {
	label="6B3 [SLA]";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DES", "URB", "WDL" };

		class DES
		{
			label = "Desert";
			image = QPATHTOF(data\camo\sla\unif_des.paa);
		};

		class URB
		{
			label = "Urban";
			image = QPATHTOF(data\camo\sla\unif_urb.paa);
		};

		class WDL
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\sla\unif_wdl.paa);
		};
	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"STD", "GL", "MG", "NCO", "NBP" };

		class NBP
		{
			label = "NBP";
			description = "No Back Pouch";
		};
	};
};
