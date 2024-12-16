class cup_6b45_6sh117 {
	label="6B45 6Sh117";
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
		values[] = {"DMR", "DMR_2", "EMPTY", "GL", "GL_RADIO", "GL_RADIO_LIGHT", "MED", "MED_GL", "MED_GL_LIGHT", "MED_RADIO", "MG", "MG_RADIO", "RIFL", "RIFL_RADIO" };
		class DMR_2
		{
			label = "DMR Alt";
			description = "Designated Marksman (Alternate)";
		};

		class GL_RADIO
		{
			label = "GL/Radio";
			description = "Grenadier/Radio";
		};
		class GL_LIGHT
		{
			label = "GL Light";
			description = "Grenadier Light";
		};

		class MED_GL
		{
			label = "Medic/GL";
			description = "Medic/Grenadier";
		};

		class MED_GL_LIGHT
		{
			label = "MED/GL Li";
			description = "Medic/Grenadier Light";
		};

		class MED_RADIO
		{
			label = "Medic/Radio";
		};

		class MG_RADIO
		{
			label = "MG/Radio";
			description = "Machine Gunner/Radio";
		};

		class RIFL_RADIO
		{
			label = "RIFL/Radio";
			description = "Rifleman/Radio";
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
