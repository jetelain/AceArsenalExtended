class cup_m23_pioneer {
	label="M23 Pioneer";
	author="Community Upgrade Project";
	options[]= { "camo", "pouch" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BRN", "GRN", "TAKI_BRUSH" };
		class BRN
		{
			label = "Brown";
			image = "#(rgb,8,8,3)color(0.53,0.43,0.30,1)";
		};

		class TAKI_BRUSH
        {
            label = "Taki Brush";
            description = "Takistani Brush";
            image = QPATHTOF(data\camo\taki\taki_brush.paa);
        };
	};

	class pouch
	{
		alwaysSelectable = 1;
		label = "Back Pouch";
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
