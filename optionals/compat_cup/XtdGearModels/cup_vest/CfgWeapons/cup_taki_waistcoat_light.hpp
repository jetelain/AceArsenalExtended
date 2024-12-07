class cup_taki_waistcoat_light {
	label="Taki Waistcoat Light";
	author="Community Upgrade Project";
	options[]= { "camo", "pouches" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "M81", "M81_FADE", "M81_DES", "BLK", "TWEED", "BRN_HEMP" };
		class M81_FADE
		{
			label = "M81 Faded";
			image = QPATHTOF(data\camo\taki\m81_fade.paa);
		};

		class M81_DES
		{
			label = "M81 Des";
			description = "M81 Desert";
			image = QPATHTOF(data\camo\taki\m81_des.paa);
		};

		class BLK
		{
			image = "#(rgb,8,8,3)color(0.23,0.22,0.20,1)";
		};

		class TWEED
		{
			label = "Tweed";
			image = QPATHTOF(data\camo\taki\tweed.paa);
		};

		class BRN_HEMP
		{
			label = "Brown Hemp";
			image = QPATHTOF(data\camo\taki\brn_hemp.paa);
		};
	};

	class pouches
	{
		alwaysSelectable = 1;
		label = "Pouches";
		values[] = {"yes", "no" };
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
