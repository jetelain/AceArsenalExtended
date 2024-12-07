class cup_facewrap {
	label="Facewrap";
	author="Community Upgrade Project";
	options[]= { "camo", "headset", "glasses" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BLK", "RGR", "RED", "SKULL", "SMILIE", "TAN", "TRP", "WHT" };

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

		class SMILIE
		{
			label = "Smilie";
			image = QPATHTOF(data\camo\pmc\facewrap_smilie.paa);
		};

		class TRP
		{
			label = "Tropical";
			image = "#(rgb,8,8,3)color(0.75,0.76,0.53,1)";
		};
	};

	class headset
    {
        label = "Headset";
        values[] = { "no", "yes" };
        changeingame = 1;
        alwaysSelectable=1;

		class no
		{
			label = CSTRING(No);
		};

		class yes
		{
			label = CSTRING(Yes);
		};
    };

	class glasses
	{
		label = "Glasses";
		alwaysSelectable = 1;
		values[] = {"none", "DRK", "EMB" };

		class none
		{
			label = CSTRING(none);
		};

		class DRK
		{
			label = "Dark";
			image = "#(rgb,8,8,3)color(0.15,0.16,0.15,1)";
		};

		class EMB
		{
			label = "Ember";
			image = "#(rgb,8,8,3)color(0.41,0.14,0.09,1)";
		};
	};
};
