class XtdGearModels
{
	class CfgWeapons 
	{
		class Tier1_HK416D145
		{
			label = "HK416 D14.5";
			author = "Tier One";
			options[] = {"camo","butt","handguard"};
			class camo
			{
				values[] = {"STD","DST","BDS"};
				class STD
				{
					label = "Standard";
				};
				class DST
				{
					label = "Desert";
				};
				class BDS
				{
					label = "Black/Desert";
				};
			};
			class butt
			{
				values[] = {"LMT","CTR","IMOD","MFT"};
				class LMT
				{
					label = "LMT";
				};
				class CTR
				{
					label = "CTR";
				};
				class IMOD
				{
					label = "IMOD";
				};
				class MFT
				{
					label = "MFT";
				};
			};
			class handguard
			{
				values[] = {"STD","SMR","RAHG","MW"};
				class STD
				{
					label = "Standard";
				};
				class SMR
				{
					label = "SMR";
				};
				class RAHG
				{
					label = "RAHG";
				};
				class MW
				{
					label = "Midwest";
				};
			};
		};

		class Tier1_HK416D10 : Tier1_HK416D145
		{
			label = "HK416 D10";
		}
	};

};
