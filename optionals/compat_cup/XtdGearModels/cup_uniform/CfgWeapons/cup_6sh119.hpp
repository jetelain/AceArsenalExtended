class cup_6sh119 {
	label="6Sh119";
	author="Community Upgrade Project";
	options[]= { "accessory" };

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
