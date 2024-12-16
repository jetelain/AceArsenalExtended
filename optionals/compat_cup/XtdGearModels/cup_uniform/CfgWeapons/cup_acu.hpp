class cup_acu {
	label="ACU";
	author="Community Upgrade Project";
	options[]= { "camo", "sleeves", "kneepads", "gloves" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "CCE", "MM14", "OCP", "OEF_CP", "TTS", "UCP" };
	};
	class sleeves
	{
		alwaysSelectable = 1;
		values[]={ "Full", "Half" };
	};
	class kneepads
	{
		label="Kneepads";
		alwaysSelectable = 1;
		values[]={ "No", "Yes" };
		class No
		{
			label = CSTRING(No);
		};

		class Yes
		{
			label = CSTRING(Yes);
		};
	};
	class gloves
	{
		label="Gloves";
		alwaysSelectable = 1;
		values[]={ "No", "Yes" };
		class No
		{
			label = CSTRING(No);
		};

		class Yes
		{
			label = CSTRING(Yes);
		};
	};
};
