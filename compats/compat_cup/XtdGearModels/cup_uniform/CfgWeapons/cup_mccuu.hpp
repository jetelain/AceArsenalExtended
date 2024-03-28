class cup_mccuu {
	label="MCCUU";
	author="Community Upgrade Project";
	options[]= { "camo", "pantscamo", "sleeves", "kneepads", "gloves" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "M81", "MRPT_WD", "MRPT_D" };
	};

	class pantscamo
	{
		alwaysSelectable = 1;
		values[]={ "M81", "MRPT_WD", "MRPT_D" };
	};

	class sleeves
	{
		label="Sleeves";
		alwaysSelectable = 1;
		values[]={ "Full", "Quarter", "Half" };
	};

	class kneepads
	{
		label="Kneepads";
		alwaysSelectable = 1;
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

	class gloves
	{
		label="Gloves";
		alwaysSelectable = 1;
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
