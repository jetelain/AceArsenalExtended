class amf_uniform_ubas
{
    options[] = { "camo", "gloves", "sleeves" }; // Always computed, do not edit
    label = "treillis F3/Ubas";
	author = "Arma Mod France";
	textureoptions[]={"rank","bloodtype","flag","glovescolor"};
    class camo : AMF_CamoBase
    {
        alwaysSelectable = 1;
        values[] = { "BME", "CE", "CEDA", "CEOD", "DADA", "TUNDRA" }; // Always computed, do not edit
    };
    class gloves : GlovesBase
    {
        alwaysSelectable = 1;
        values[] = { "MX", "none" }; // Always computed, do not edit
    };
    class sleeves
    {
        alwaysSelectable = 1;
        values[] = { "Full", "Half" }; // Always computed, do not edit
    };
    class gloves : GlovesBase { };
    class rank : AMF_RankBaseBV {
        hiddenselection = "grade";
    };
    class bloodtype : BloodTypeBase {
        hiddenselection = "sang";
    };
    class flag : FlagBase {
        hiddenselection = "drapeau";
    };
    class glovescolor : GlovesColorBase {};
};
