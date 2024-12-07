class cup_ghillie_baf {
	label = "Ghillie [BAF]";
	author = "Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[]={ "DES", "WDL" };

		class DES
		{
			label = "Desert";
			image = QPATHTOF(data\camo\ghillie_des.paa);
		};

		class WDL
		{
			label = "Woodland";
			image = QPATHTOF(data\camo\ghillie_wdl.paa);
		};
	};

};
