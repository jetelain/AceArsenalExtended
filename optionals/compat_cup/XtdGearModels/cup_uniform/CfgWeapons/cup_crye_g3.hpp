class cup_crye_g3 {
	label="Crye Gen 3";
	author="Community Upgrade Project";
	options[]={ "camo", "flag" };
	class camo
	{
		label="Camo";
		changeingame=0;
		alwaysSelectable = 1;
		values[]={ "AOR1", "AOR2", "ATACS_AU", "ATACS_FG", "BLK", "M81_1", "M81_2", "M81_3", "M81_RGR", "M81_TAN", "RGR", "RGR_MC", "TAN_MC", "MC_1", "MC_2", "MC_3" };

		class M81_1
		{
			label = "M81 1";
			image = QPATHTOF(data\camo\crye_g3\m81_1.paa); 
		};

		class M81_2
		{
			label = "M81 2";
			image = QPATHTOF(data\camo\crye_g3\m81_2.paa); 
		};

		class M81_3
		{
			label = "M81 3";
			image = QPATHTOF(data\camo\crye_g3\m81_3.paa); 
		};

		class M81_RGR
		{
			label = "M81/RGR";
			image = QPATHTOF(data\camo\crye_g3\m81_rgr.paa); 
		};

		class M81_TAN
		{
			label = "M81/TAN";
			image = QPATHTOF(data\camo\crye_g3\m81_tan.paa); 
		};

		class RGR
		{
			image = QPATHTOF(data\camo\crye_g3\rgr.paa); 
		};

		class RGR_MC
		{
			label = "RGR/MC";
			description = "Ranger Green / MultiCam";
			image = QPATHTOF(data\camo\crye_g3\rgr_mc.paa); 
		};

		class TAN_MC
		{
			label = "Tan/MC";
			description = "Tan / MultiCam";
			image = QPATHTOF(data\camo\crye_g3\tan_mc.paa); 
		};

		class MC_1
		{
			label = "MC 1";
			description = "MultiCam 1";
			image = QPATHTOF(data\camo\crye_g3\mc_1.paa); 
		};

		class MC_2
		{
			label = "MC 2";
			description = "MultiCam 2";
			image = QPATHTOF(data\camo\crye_g3\mc_2.paa); 
		};

		class MC_3
		{
			label = "MC 3";
			description = "MultiCam 3";
			image = QPATHTOF(data\camo\crye_g3\mc_3.paa); 
		};
	};

	class flag
	{
		label = CSTRING(Flag);
		values[] = { "none", "USA", };
		class none
		{
			label = CSTRING(None);
		};

		class USA
		{
			label = "USA";
		};
	};
};
