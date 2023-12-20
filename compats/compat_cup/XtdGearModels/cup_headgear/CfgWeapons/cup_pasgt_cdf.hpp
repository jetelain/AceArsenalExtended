class cup_pasgt_cdf {
	label="PASGT [CDF]";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		values[] = {"DES", "FRS", "MTN", "WNTR", "UN" };

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

		class UN
		{
			label = "UN";
			description = "United Nations";
			image = "#(rgb,8,8,3)color(0.36,0.57,0.90,1)";
		};
	};
};
