class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

	class AMF_MSC_MXGLV_BLK: CBA_MiscItem {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "MX Gloves";
		descriptionShort = "MX Gloves";
		model = QPATHTOF(data\mx.p3d);
		picture = QPATHTOF(data\mx.paa);
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 1;
		};
	};

	class AMF_MSC_GOGGLES_BLK: CBA_MiscItem {
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Goggles";
		descriptionShort = "Goggles";
		model = "\A3\characters_f_beta\heads\glasses\g_combat.p3d"; // TODO
		picture = "\A3\Characters_F\data\ui\icon_g_combat_CA.paa"; // TODO
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
		};
	};
};
