class cup_cap_acr {
	label="Cap [ACR]";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"DES", "PARA", "GFLG", "SND" };

		class DES
		{
			label = "Desert";
			image = "#(rgb,8,8,3)color(0.70,0.63,0.44,1)";
		};

		class PARA
		{
			label = "Para";
			image = QPATHTOF(data\camo\cap\acr_para.paa);
		};

		class GFLG
		{
			label = "Grn/Flg";
			description = "Green/Flag";
			image = QPATHTOF(data\camo\cap\acr_gflg.paa);
		};

		class SAND
		{
			label = "Sand";
			image = "#(rgb,8,8,3)color(0.89,0.87,0.74,1)";
		};
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
		values[] = {"no", "yes" };
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};
};
