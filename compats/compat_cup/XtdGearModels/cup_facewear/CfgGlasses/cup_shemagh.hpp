class cup_shemagh {
	label="Shemagh";
	author="Community Upgrade Project";
	options[]= { "color", "position" };

	class color : cup_shemagh_color
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
        alwaysSelectable=1;

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
};
