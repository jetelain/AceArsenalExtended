
class CfgWeapons
{
	class Uniform_Base;
	class amf_uniform_01_CE: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "CE_TAN";
			sleeves = "Full";
		};
	};
	class amf_uniform_02_CE: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "CE_TAN";
			sleeves = "Half";
		};
	};
	class amf_uniform_01_CE_OD: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "CE_OD";
			sleeves = "Full";
		};
	};
	class amf_uniform_02_CE_OD: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "CE_OD";
			sleeves = "Half";
		};
	};
	class amf_uniform_01_DA: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "DA";
			sleeves = "Full";
		};
	};
	class amf_uniform_02_DA: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "DA";
			sleeves = "Half";
		};
	};
	class amf_uniform_01_S: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "SERVAL";
			sleeves = "Full";
		};
	};
	class amf_uniform_02_S: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_ubas";
			camo = "SERVAL";
			sleeves = "Half";
		};
	};
	class amf_uniform_03_CE: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_f3";
			camo = "CE";
		};
	};
	class amf_uniform_03_DA: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_f3";
			camo = "DA";
		};
	};
	class amf_uniform_03_S: Uniform_Base
	{
		class XtdGearInfo
		{
			master = "amf_uniform_f3";
			camo = "SERVAL";
		};
	};

	class H_HelmetB;
	
	class amf_felin_cover: H_HelmetB
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "ce";
			sordin = "none";
		};
	};
	class AMF_FELIN_COVER_EARPROT_OD: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "ce";
			sordin = "od";
		};
	};
	class AMF_FELIN_COVER_EARPROT_BLK: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "ce";
			sordin = "blk";
		};
	};
	class AMF_FELIN_COVER_EARPROT_TAN: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "ce";
			sordin = "tan";
		};
	};
	class amf_felin_mount: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "mount";
			sordin = "none";
		};
	};
	class AMF_FELIN_MOUNT_EARPROT_OD: amf_felin_mount
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "mount";
			sordin = "od";
		};
	};
	class AMF_FELIN_MOUNT_EARPROT_BLK: amf_felin_mount
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "mount";
			sordin = "blk";
		};
	};
	class AMF_FELIN_MOUNT_EARPROT_TAN: amf_felin_mount
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "mount";
			sordin = "tan";
		};
	};
	class amf_felin: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "none";
			sordin = "none";
		};
	};
	class AMF_FELIN_EARPROT_OD: amf_felin
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "none";
			sordin = "od";
		};
	};
	class AMF_FELIN_EARPROT_NLK: amf_felin
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "none";
			sordin = "blk";
		};
	};
	class AMF_FELIN_EARPROT_TAN: amf_felin
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "none";
			sordin = "tan";
		};
	};
	class amf_felin_cover_tan: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "tan";
			sordin = "none";
		};
	};
	class AMF_FELIN_COVER_TAN_EARPROT_OD: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "tan";
			sordin = "od";
		};
	};
	class AMF_FELIN_COVER_TAN_EARPROT_BLK: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "tan";
			sordin = "blk";
		};
	};
	class AMF_FELIN_COVER_TAN_EARPROT_TAN: amf_felin_cover
	{
		class XtdGearInfo
		{
			master = "amf_felin";
			cover = "tan";
			sordin = "tan";
		};
	};
};
