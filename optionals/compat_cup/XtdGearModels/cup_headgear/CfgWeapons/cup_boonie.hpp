class cup_boonie {
	label="Boonie";
	author="Community Upgrade Project";
	options[]= { "camo", "headset" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"CCE", "MM14", "OCP", "OEF_CP", "RHD", "TTS", "UCP" };
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
