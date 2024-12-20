class cup_vkpo {
	label="VKPO";
	author="Community Upgrade Project";
	options[]= { "camo", "clothing", "sleeves", "accessory" };
	class camo
	{
		alwaysSelectable = 0;
		values[]={ "BGEDIGI", "EMR_SUM" };
	};
	class clothing
	{
		alwaysSelectable = 0;
		label = CSTRING(Clothing);
		values[]={ "standard", "jacket", "jacket_pants" };
		class standard
		{
			label = CSTRING(Standard_Label);
			description = CSTRING(Standard_Description);
		};
		class jacket
		{
			label = CSTRING(WinterJacket_Label);
			description = CSTRING(WinterJacket_Description);
		};
		class jacket_pants
		{
			label = CSTRING(WinterJacketPants_Label);
			description = CSTRING(WinterJacketPants_Description);
		};
	};
	class sleeves
    {
        alwaysSelectable = 0;
        values[] = { "Full", "Half" };
    };
	class accessory
	{
		alwaysSelectable = 1;
		values[]={ "none", "gloves_6b51", "gloves_sso_kh", "gloves_sso" };
		label = CSTRING(Accessory);
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
