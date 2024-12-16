class cup_gorka_3 {
	label="Gorka-3";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "ATACS_FG", "EMR_SUM", "KHK", "WTHR", "YLW" };
		class KHK
		{
			image = "#(rgb,8,8,3)color(0.74,0.66,0.53,1)";
		};
		class WTHR
		{
			image = "#(rgb,8,8,3)color(0.82,0.80,0.70,1)";
			label = CSTRING(Weathered_Label);
			description = CSTRING(Weathered_Description);
		};

		class YLW
		{
			image = "#(rgb,8,8,3)color(0.70,0.68,0.39,1)";
			label = CSTRING(Yellow);
		};
	};
	class accessory
	{
		alwaysSelectable = 1;
		values[]={ "none", "gloves_6b51", "gloves_sso_kh", "gloves_sso" };
		class none
		{
			label = CSTRING(None);
		};
		class gloves_6b51
		{
			label = CSTRING(Gloves6B51);
		};
		class gloves_sso_kh
		{
			label = CSTRING(GlovesSSOKh_Label);
			description = CSTRING(GlovesSSOKh_Description);
		};
		class gloves_sso
		{
			label = CSTRING(GlovesSSO);
		};
	};
};
