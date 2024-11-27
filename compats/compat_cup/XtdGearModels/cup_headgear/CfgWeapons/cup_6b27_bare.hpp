class cup_6b27_bare {
	label="6B27 [Bare]";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "OLI" };

		class GRN
		{
			image = "#(rgb,8,8,3)color(0.20,0.20,0.17,1)";
		};
	};

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "goggles", "headset", "goggles_headset", "nvg_mount" };
		class none
		{
			label = CSTRING(None);
		};

		class goggles
		{
			label = "Goggles";
		};

		class headset
		{
			label = "Headset";
		};

		class goggles_headset
		{
			label = "Gogg/Hdset";
			description = "Goggles/Headset";
		};

		class nvg_mount
		{
			label = "NVG Mount";
		};

	};
};
