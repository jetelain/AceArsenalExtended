#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"aceax_main"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "XtdGearModels.hpp"

#include "CfgWeapons.hpp"

class Cfg3DEN
{
	class Object
	{
        class AttributeCategories
		{
            class Identity
			{
				class Attributes
				{
					class GVARMAIN(textureOptions)
					{
						property=QGVARMAIN(textureOptions);
						control="Edit";
						displayName="Texture options (ACE Arsenal Extended)";
						tooltip="";
						expression=QUOTE([ARR_3(_this, _value, false)] call FUNC(setTextureOptions););
						defaultValue="''";
						condition="objectBrain";
						wikiType="[[String]]";
					};
                };
            };
        };
    };
};