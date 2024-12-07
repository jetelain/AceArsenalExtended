class cup_pmc_sweater {
	label="PMC Sweater";
	author="Community Upgrade Project";
	options[]= { "camo" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "ARC", "BLK", "GRN_BRN" };

		class ARC
		{
			label = "Arctic";
			image = QPATHTOF(data\camo\pmc\swtr_wntr.paa);
		};

		class GRN_BRN
		{
			label = "Green/Brown";
			image = QPATHTOF(data\camo\pmc\swtr_grn_brn.paa);
		};
	};
};
