class cup_ess_facewrap{
	label="ESS w/Facewrap";
	author="Community Upgrade Project";
	options[]= { "camo", "gps" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "RGR", "RED", "SKULL", "TAN", "TRP", "WHT" };

		class BLK
		{
			image = "#(rgb,8,8,3)color(0.15,0.16,0.14,1)";
		};

		class RGR
		{
			image = "#(rgb,8,8,3)color(0.36,0.41,0.26,1)";
		};

		class RED
		{
			label = "Red";
			image = "#(rgb,8,8,3)color(0.41,0.14,0.09,1)";
		};

		class SKULL
		{
			label = "Skull";
			image = QPATHTOF(data\camo\pmc\facewrap_skull.paa);
		};

		class TRP
		{
			label = "Tropical";
			image = "#(rgb,8,8,3)color(0.75,0.76,0.53,1)";
		};
	};

	class gps
	{
		label = "Wrist GPS";
		alwaysSelectable=0;
		values[] = { "no", "yes" };
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
