#define PATTERN_BALACLAVA(name, base, c, s, g) \
	class name: base           \
	{                          \
		class XtdGearInfo      \
		{                      \
			model = "amf_balaclava"; \
			camo = #c;         \
			sordin = #s;       \
			goggles = #g;      \
		};                     \
	}; 

class CfgGlasses {

	class amf_balaclava_base_blk;
	class amf_balaclava_base_od;
	class amf_balaclava_base_tan;
	class amf_balaclava_base_ranger;

	PATTERN_BALACLAVA(amf_balaclava_blk,amf_balaclava_base_blk,            BLK,none,none)
	PATTERN_BALACLAVA(amf_balaclava_goggles_blk,amf_balaclava_blk,         BLK,none,down)
	PATTERN_BALACLAVA(amf_balaclava_sordin_blk,amf_balaclava_blk,          BLK,BLK, none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_blkod,amf_balaclava_blk,        BLK,OD,  none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_blktan,amf_balaclava_blk,       BLK,TAN, none)
	PATTERN_BALACLAVA(amf_balaclava_sording_blk,amf_balaclava_blk,         BLK,BLK, down)
	PATTERN_BALACLAVA(amf_balaclava_sording_blkod,amf_balaclava_blk,       BLK,OD,  down)
	PATTERN_BALACLAVA(amf_balaclava_sording_blktan,amf_balaclava_blk,      BLK,TAN, down)

	PATTERN_BALACLAVA(amf_balaclava_od,amf_balaclava_base_od,              OD, none,none)
	PATTERN_BALACLAVA(amf_balaclava_goggles_od,amf_balaclava_od,           OD, none,down)
	PATTERN_BALACLAVA(amf_balaclava_sordin_od,amf_balaclava_od,            OD, BLK, none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_odod,amf_balaclava_od,          OD, OD,  none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_odtan,amf_balaclava_od,         OD, TAN, none)
	PATTERN_BALACLAVA(amf_balaclava_sording_od,amf_balaclava_od,           OD, BLK, down)
	PATTERN_BALACLAVA(amf_balaclava_sording_odod,amf_balaclava_od,         OD, OD,  down)
	PATTERN_BALACLAVA(amf_balaclava_sording_odtan,amf_balaclava_od,        OD, TAN, down)

	PATTERN_BALACLAVA(amf_balaclava_tan,amf_balaclava_base_tan,            TAN,none,none)
	PATTERN_BALACLAVA(amf_balaclava_goggles_tan,amf_balaclava_tan,         TAN,none,down)
	PATTERN_BALACLAVA(amf_balaclava_sording_tan,amf_balaclava_tan,         TAN,BLK, down)
	PATTERN_BALACLAVA(amf_balaclava_sording_tanod,amf_balaclava_tan,       TAN,OD,  down)
	PATTERN_BALACLAVA(amf_balaclava_sording_tantan,amf_balaclava_tan,      TAN,TAN, down)
	PATTERN_BALACLAVA(amf_balaclava_sordin_tan,amf_balaclava_tan,          TAN,BLK, none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_tanod,amf_balaclava_tan,        TAN,OD,  none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_tantan,amf_balaclava_tan,       TAN,TAN, none)

	PATTERN_BALACLAVA(amf_balaclava_ranger,amf_balaclava_base_ranger,      RGR,none,none)
	PATTERN_BALACLAVA(amf_balaclava_goggles_ranger,amf_balaclava_ranger,   RGR,none,down)
	PATTERN_BALACLAVA(amf_balaclava_sording_ranger,amf_balaclava_ranger,   RGR,BLK, down)
	PATTERN_BALACLAVA(amf_balaclava_sording_rangerod,amf_balaclava_ranger, RGR,OD,  down)
	PATTERN_BALACLAVA(amf_balaclava_sording_rangertan,amf_balaclava_ranger,RGR,TAN, down)
	PATTERN_BALACLAVA(amf_balaclava_sordin_ranger,amf_balaclava_ranger,    RGR,BLK, none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_rangerod,amf_balaclava_ranger,  RGR,OD,  none)
	PATTERN_BALACLAVA(amf_balaclava_sordin_rangertan,amf_balaclava_ranger, RGR,TAN, none)
};