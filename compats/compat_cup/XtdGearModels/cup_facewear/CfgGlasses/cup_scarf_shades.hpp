class cup_scarf_shades {
	label="Scarf/Shades";
	author="Community Upgrade Project";
	options[]= { "shemagh", "beard", "gps" };

	class shemagh : cup_shemagh_color
	{
		alwaysSelectable = 1;
		values[] = {"GRN", "KHK", "WHT"};
	};

	class beard : cup_beard_color
    {
		alwaysSelectable=1;
        values[] = { "BLK", "BLND" };
    };

	class gps
	{
		label = "Wrist GPS";

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
