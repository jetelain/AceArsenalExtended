class cup_us_armatus {
	label="US Armatus";
	author="Community Upgrade Project";
	options[]= { "flag", "belt" };
	class flag
	{
		alwaysSelectable = 1;
		label = "Flag";
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

	class belt
	{
		alwaysSelectable = 1;
		label = "Belt";
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
