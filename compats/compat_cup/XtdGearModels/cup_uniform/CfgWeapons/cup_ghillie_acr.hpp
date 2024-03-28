class cup_ghillie_acr {
	label = "Ghillie [ACR]";
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
