class cup_headset_pmc_facewear {
	label="PMC Headset";
	author="Community Upgrade Project";
	options[]= { "glasses" };

	class glasses
	{
		label = "Glasses";
		alwaysSelectable = 1;
		values[] = {"none", "CUP_TRANS", "DRK", "EMB" };

		class none
		{
			label = CSTRING(None);
		};

		class CUP_TRANS
		{
			label = "Clear";
			image = QPATHTOF(data\camo\transparency.paa); // Attempting to inherit from camo won't work for some reason so need to path to image manually.
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
