class cup_ess_shemagh {
	label="ESS w/Shemagh";
	author="Community Upgrade Project";
	options[]= { "shemagh", "position", "beard", "gps" };

	class shemagh : cup_shemagh_color
	{
		label = "Color";
		alwaysSelectable = 1;
		values[] = {"BLK", "GRN", "KHK", "RED", "WHT" };
	};

	class position
    {
        label = "Position";
        values[] = { "neck", "mouth" };
        changeingame = 1;
        alwaysSelectable=0;

		class neck
		{
			label = "Neck";
			actionLabel = "Pull Shemagh To Neck";
		};

		class mouth
		{
			label = "Mouth";
			actionLabel = "Pull Shemagh To Mouth";
		};
    };

	class beard : cup_beard_color
    {
		alwaysSelectable=0;
        values[] = {"none", "BLK", "BLND" };
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
