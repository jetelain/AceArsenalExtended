class cup_6b45 {
	label="6B45";
	author="Community Upgrade Project";
	options[]= { "camo", "loadout", "spp" };

	class camo
	{
		alwaysSelectable = 1;
		values[] = {"BGEDIGI", "EMR_SUM" };

	};

	class loadout : cup_loadout
	{
		alwaysSelectable = 1;
		values[] = {"DMR", "EMPTY", "GL", "GL_RADIO", "LIGHT", "MED", "MED_GL", "MED_LIGHT", "MED_RADIO", "MG", "RIFL", "RIFL_RADIO" };

		class GL_RADIO
		{
			label = "GL/Radio";
			description = "Grenadier/Radio";
		};

		class RIFL_RADIO
		{
			label = "RIFL/Radio";
			description = "Rifleman/Radio";
		};

		class MED_LIGHT
		{
			label = "Medic/Light";
		};

		class MED_RADIO
		{
			label = "Medic/Radio";
		};
	};

	class spp
	{
		alwaysSelectable = 1;
		label = "SPP Bag";
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
