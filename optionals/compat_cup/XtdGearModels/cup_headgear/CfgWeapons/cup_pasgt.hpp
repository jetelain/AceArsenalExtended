class cup_pasgt {
	label="PASGT";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "nvg_mount" };

	class camo
	{
		values[] = {"DCP", "6CDP", "ERDL_H", "ERDL_L", "M81", "OLI", "TPAT", "TSW", "CUP_URB", "WNTR" };
		class WNTR
		{
			label = "Winter";
			image="\z\aceax\addons\gearinfo\data\camo\wht.paa"; // It draws from another addon so no script shorthand here.
		};
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover", "yes_cover_back" };
	};

	class nvg_mount
	{
		alwaysSelectable = 1;
		label = "NVG Mount";
		values[] = {"no", "yes" };
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
