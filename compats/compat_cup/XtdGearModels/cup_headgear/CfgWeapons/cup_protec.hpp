class cup_protec {
	label="Pro-Tec";
	author="Community Upgrade Project";
	options[]= { "accessory" };

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "goggles", "goggles_strobe", "nvg_mount" };

		class none
		{
			label = CSTRING(None);
		};

		class goggles
		{
			label = "Goggles";
		};

		class goggles_strobe
		{
			label = "Gogg/Strb";
			description = "Goggles/Strobe";
		};

		class nvg_mount
		{
			label = "NVG Mount";
		};
	};
};
