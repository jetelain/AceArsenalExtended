class cup_crye 
{
	label="Crye";
	author="Community Upgrade Project";
	options[]={ "camo", "sleeves", "flag" };

	class camo 
	{
		alwaysSelectable = 1;
		values[]={ "ATACS_AU", "ATACS_FG", "BLK", "CYT", "FLCK", "KHK", "TAN", "RGR", "MC_1", "MC_2", "MC_3" };

		class KHK
		{
			image = "#(rgb,8,8,3)color(0.85,0.84,0.72,1)";
		};

		class MC_1
		{
			label = "MC 1";
			description = "MultiCam 1";
			image = QPATHTOF(data\camo\crye\mc_1.paa);
		};

		class MC_2
		{
			label = "MC 2";
			description = "MultiCam 2";
			image = QPATHTOF(data\camo\crye\mc_2.paa);
		};

		class MC_3
		{
			label = "MC 3";
			description = "MultiCam 3";
			image = QPATHTOF(data\camo\crye\mc_2.paa); // Uses same uniform texture, but has different gloves and boots.
		};
	};

	class sleeves
	{
		alwaysSelectable = 1;
		values[]={ "Full", "Quarter", };
	};

	class flag
	{
		label="Flag";
		changeingame=0;
		alwaysSelectable = 1;
		values[]={ "none", "USA", "RUS", "GER" };
		class none
		{
			label = CSTRING(None);
		};

		class USA
		{
			label = "USA";
		};

		class RUS
		{
			label = "RUS";
		};
	};
};
