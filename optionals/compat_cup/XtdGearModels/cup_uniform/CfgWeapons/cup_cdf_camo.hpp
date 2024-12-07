class cup_cdf_camo {
	label = "CDF Camo";
	author = "Community Upgrade Project";
	options[] = { "camo", "sleeves", "gloves" };
	class camo
	{
		alwaysSelectable = 1;
		values[] = { "DES", "FRS", "MTN", "WNTR" };

		class DES
		{
			label = "Desert";
			image = QPATHTOF(data\camo\cdf\des.paa);
		};

		class FRS
		{
			label = "Forest";
			image = QPATHTOF(data\camo\cdf\frs.paa);
		};

		class MTN
		{
			label = "Mountain";
			image = QPATHTOF(data\camo\cdf\mtn.paa);
		};

		class WNTR
		{
			label = "Winter";
			image = QPATHTOF(data\camo\cdf\wntr.paa);
		};
	};
	class sleeves
	{
		alwaysSelectable = 1;
		values[] = { "Full", "Quarter" };
	};

	class gloves
	{
		alwaysSelectable = 1;
		label = "Gloves";
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
};
