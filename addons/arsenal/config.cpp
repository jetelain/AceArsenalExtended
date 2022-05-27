#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_keybinding","aceax_main", "ace_arsenal", "aceax_gearinfo"};
        author = "AUTHOR";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "defines.hpp"

class RscListBox;
class RscControlsGroup;
class RscText;
class RscCheckBox;
class RscPicture;
class RscButton;
class RscPictureKeepAspect;

class ace_arsenal_display {

	onUnload = QUOTE([ARR_3('onUnload', _this, QUOTE(QUOTE(ace_arsenal_display)))] call FUNC(onArsenalClose));

	class controls {

        class leftTabContent: RscListBox { // Config forked from ACE3 Arsenal to intercept calls to onSelChangedLeft
            idc = IDC_leftTabContent;
            colorBackground[]={0,0,0,0};
            colorSelectBackground[]={1,1,1,0.5};
            colorSelectBackground2[]={1,1,1,0.5};
            colorPictureSelected[]={1,1,1,1};
            colorSelect[]={1,1,1,1};
            colorSelect2[]={1,1,1,1};
            colorPictureRightSelected[]={1,1,1,1};
            onLBSelChanged = QUOTE(_this call FUNC(onSelChangedLeft));
            onSetFocus = QUOTE(ace_arsenal_leftTabFocus = true);
            onKillFocus = QUOTE(ace_arsenal_leftTabFocus = false);
            colorTextRight[] = {0.5,0.5,0.5,1};
            colorSelect2Right[] = {0,0,0,1};
            sizeEx = QUOTE(7 * GRID_H);
            CTRL_POS_SIZE(safezoneX + 13,safezoneY + 14,80,safezoneH - 24.5);
        };


        class leftTabCustom: RscControlsGroup {
            idc = 9990000;

            colorBackground[]={255,255,255,255};
            sizeEx = QUOTE(7 * GRID_H);
            CTRL_POS_SIZE(safezoneX + 13,safezoneY + safezoneH + -10.5,80,0);

            class controls {
                
                class Title: RscText {
                    idc = 9990001;
                    sizeEx = QUOTE(7 * GRID_H);
                    shadow = 0;
                    text = "Label";
                    CTRL_POS_SIZE(0,0,80,7);
                };

                class ModTitle: RscText {
                    idc = 9990002;
                    sizeEx = QUOTE(4 * GRID_H);
                    shadow = 0;
                    text = "Author";
                    CTRL_POS_SIZE(1,7,78,4);
                };
            };
        };
	};
};

class GVAR(configTitle): RscText {
    sizeEx = QUOTE(5 * GRID_H);
    shadow = 0;
    text = "Label";
    CTRL_POS_SIZE(0,0,80,5);
};

class GVAR(valueImage): RscPicture {
    text = "";
    colorBackground[] = {0,0,0,1};
    style = 144;
    tileH = 0.5;
    tileW = 1;
    VALUE_TILE_SIZE_DEFAULT;
};

class GVAR(valueImageCenterSquare): RscPictureKeepAspect {
    text = "";
    colorBackground[] = {0,0,0,1};
    VALUE_TILE_SIZE_DEFAULT;
};

class GVAR(valueCheckbox): RscCheckBox {
	textureChecked = QPATHTOF(data\ui\checked.paa);
	textureUnchecked = QPATHTOF(data\ui\unchecked.paa);
	textureFocusedChecked = QPATHTOF(data\ui\checked.paa);
	textureFocusedUnchecked = QPATHTOF(data\ui\unchecked.paa);
	textureHoverChecked = QPATHTOF(data\ui\checked.paa);
	textureHoverUnchecked = QPATHTOF(data\ui\unchecked.paa);
	texturePressedChecked = QPATHTOF(data\ui\checked.paa);
	texturePressedUnchecked = QPATHTOF(data\ui\unchecked.paa);
	textureDisabledChecked = QPATHTOF(data\ui\disabled.paa);
	textureDisabledUnchecked = QPATHTOF(data\ui\disabled.paa);
	colorDisabled[] = {0.1, 0.1, 0.1, 0.5};
    colorBackgroundDisabled[] = {0.6, 0.6, 0.6, 0.25};
    VALUE_TILE_SIZE_DEFAULT;
};

class GVAR(valueButton): RscButton {
    text = "Label";
    sizeEx = QUOTE(5 * GRID_H);
    VALUE_TILE_SIZE_DEFAULT;

    colorText[] = {EXACT_MATCH_TEXT_COLOR};
    colorBackground[] = {INVISIBLE_COLOR};
    colorFocused[] = {INVISIBLE_COLOR};
    colorShadow[] = {INVISIBLE_COLOR};
    colorBorder[] = {INVISIBLE_COLOR};
    colorBackgroundActive[] = {ACTIVE_BG_COLOR};
    colorDisabled[] = {DISABLED_TEXT_COLOR};
    colorBackgroundDisabled[] = {INVISIBLE_COLOR};
};

class GVAR(singleOptionText): RscText {
    CTRL_POS_SIZE(0,0,58,5);
    sizeEx = QUOTE(4.8 * GRID_H);
    shadow = 0;
};

class GVAR(singleOptionCheckbox): GVAR(valueCheckbox) {
    colorDisabled[] = {WEAK_MATCH_TEXT_COLOR};
    colorBackgroundDisabled[] = {WEAK_MATCH_BG_COLOR};
    textureDisabledChecked = QPATHTOF(data\ui\checked.paa);
    textureDisabledUnchecked = QPATHTOF(data\ui\checked.paa);
};
