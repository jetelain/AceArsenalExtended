class cup_balaclava {
	label="Balaclava";
	author="Community Upgrade Project";
	options[]= { "camo" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "EMR_SUM", "GRN", "RGR", "TAN" };
		
		class BLK
		{
			image = "#(rgb,8,8,3)color(0.19,0.20,0.20,1)";
		};

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.12,0.17,0.13,1)";
		};

		class RGR
		{
			image = "#(rgb,8,8,3)color(0.37,0.35,0.30,1)";
		};

		class TAN
		{
			image = "#(rgb,8,8,3)color(0.75,0.70,0.55,1)";
		};
	};
};
