class cup_6sh122 {
	label="6Sh122";
	author="Community Upgrade Project";
	options[]= { "camo", "accessory" };
	class camo
	{
		alwaysSelectable = 1;
		values[]={ "EMR_ATM", "SUM" };
		class SUM
		{
			label = "Summer";
			image = QPATHTOF(data\camo\6sh112_sum.paa);
		};

		class WNTR
		{
			label = "Winter";
			image="\z\aceax\addons\gearinfo\data\camo\wht.paa"; // It draws from another addon so no script shorthand here.
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
