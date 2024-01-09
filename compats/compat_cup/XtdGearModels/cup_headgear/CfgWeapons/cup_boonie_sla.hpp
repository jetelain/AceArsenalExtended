class cup_boonie_sla {
	label="Boonie [SLA]";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"WDL", "DES", "URB" };
		class WDL
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\sla\unif_wdl.paa);
		};

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
	};
};
