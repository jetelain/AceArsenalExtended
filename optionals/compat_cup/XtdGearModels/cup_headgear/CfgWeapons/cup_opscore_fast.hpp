class cup_opscore_fast {
	label="Ops Core FAST";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };

	class camo
	{
		values[] = {"AAF", "BLK", "FLCK", "TRPTRN", "GRN", "GRY", "MTP", "MC_US", "MC", "MM14", "SPRAY_US", "SPRAY", "TAN", "TSW", "UCP" };

		class MC_US
		{
			label = "MC/US";
			description = "MultiCam/US";
			image="\z\aceax\addons\gearinfo\data\camo\mc.paa"; // It draws from another addon so no script shorthand here.
		};

		class SPRAY_US
		{
			label = "Spray/US";
			image = QPATHTOF(data\camo\opscore_spray.paa);
		};

		class SPRAY
		{
			label = "Spray";
			image = QPATHTOF(data\camo\opscore_spray.paa);
		};
	};

	class accessory
	{
		alwaysSelectable = 1;
		label = "Accessory";
		values[] = {"none", "headset", "headset_sf" };
		class none
		{
			label = CSTRING(None);
		};

		class headset
		{
			label = "Headset";
		};

		class headset_sf
		{
			label = "Headset/SF";
		};
	};
};
