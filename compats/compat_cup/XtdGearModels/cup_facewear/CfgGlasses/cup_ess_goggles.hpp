class cup_ess_goggles {
	label="ESS Goggles";
	author="Community Upgrade Project";
	options[]= { "frame", "tint" };

	class frame
	{
		label = "Frame";
		alwaysSelectable = 1;
		values[] = {"BLK", "BRN", "GRN", "KHK" };

		class BLK
		{
			label = "Dark";
			image = "#(rgb,8,8,3)color(0.32,0.33,0.32,1)";
		};

		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.43,0.36,0.31,1)";
		};

		class GRN
		{
			label = "Green";
			image = "#(rgb,8,8,3)color(0.35,0.31,0.26,1)";
		};

		class KHK
		{
			label = "Khaki";
			image = "#(rgb,8,8,3)color(0.63,0.58,0.49,1)";
		};
	};

	class tint
	{
		label = "Tint";
		alwaysSelectable = 1;
		values[] = {"CUP_TRANS", "DRK", "EMB" };

		class CUP_TRANS
		{
			label = "Clear";
			image = QPATHTOF(data\camo\transparency.paa); // Attempting to inherit from camo won't work for some reason so need to path to image manually.
		};

		class DRK
		{
			label = "Dark";
			image = "#(rgb,8,8,3)color(0.10,0.10,0.09,1)";
		};

		class EMB
		{
			label = "Ember";
			image = "#(rgb,8,8,3)color(0.54,0.27,0.11,1)";
		};
	};
};
