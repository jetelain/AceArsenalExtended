class cup_ach {
	label="ACH";
	author="Community Upgrade Project";
	options[]= { "camo", "goggles", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"CCE", "MM14", "OCP", "OEF_CP", "TTS", "UCP" };
	};

	class goggles : cup_goggles
	{
		alwaysSelectable = 1;
		values[] = {"no", "yes", "yes_cover" };
	};

	class headset
	{
		alwaysSelectable = 1;
		label = "Headset";
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
