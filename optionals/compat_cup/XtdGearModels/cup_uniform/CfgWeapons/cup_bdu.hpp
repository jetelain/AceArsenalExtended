class cup_bdu
{
	author="Community Upgrade Project";
	label = "BDU";
	options[] = {"camo", "sleeves", "gloves", "dirt", "flag"};
	class camo
	{
		values[] = {"ALP", "CEU", "DCP", "DDPM", "DPM", "DPM_OD", "ERDL_H", "ERDL_L", "M81", "M81_Winter", "OD", "RHD", "6CDP", "TSW", "TPAT", "CUP_URB", "Winter", "Winter_M81"};
		class DPM_OD
		{
			label = "DPM/OD";
			image = QPATHTOF(data\camo\dpm_od.paa);
		};
		class M81_Winter
		{
			label = "M81/Winter";
			image = QPATHTOF(data\camo\m81_wntr.paa);
		};
		class Winter
		{
			label = "Winter";
			image="\z\aceax\addons\gearinfo\data\camo\wht.paa"; // It draws from another addon so no script shorthand here.
		};
		class Winter_M81
		{
			label = "Winter/M81";
			image = QPATHTOF(data\camo\wntr_m81.paa);
		};
	};

	class sleeves
	{
		values[] = {"Full", "Quarter", "Half"};
	};

	class gloves
	{
		label = "Gloves";
		changeingame=0;
		values[] = {"no", "yes"};
		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
	};

	class dirt
	{
		label = "Dirt";
		changeingame=0;
		values[] = {"clean", "dirty"};
		class clean
		{
			label = "Clean";
		};
		class dirty
		{
			label = "Dirty";
		};
	};

	class flag
	{
		label = "Flag";
		changeingame=0;
		values[] = {"none", "US"};
		class none
		{
			label = "None";
		};
		class US
		{
			label = "US";
		};
	};
};
