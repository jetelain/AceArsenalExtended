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
            x = QUOTE(safezoneX + 13 * GRID_W);
            y = QUOTE(safezoneY + 14 * GRID_H);
            w = QUOTE(80 * GRID_W);
            h = QUOTE(safezoneH - 24.5 * GRID_H);
            sizeEx = QUOTE(7 * GRID_H);
        };


        class leftTabCustom: RscControlsGroup {
            idc = 9990000;

            colorBackground[]={255,255,255,255};
            x = QUOTE(safezoneX + 13 * GRID_W);
            y = QUOTE((safezoneY + 14 * GRID_H) + (safezoneH - 24.5 * GRID_H));
            w = QUOTE(80 * GRID_W);
            h = 0;
            sizeEx = QUOTE(7 * GRID_H);

            class controls {
                
                class Title: RscText {
                    idc = 9990001;
                    sizeEx = QUOTE(7 * GRID_H);
                    shadow = 0;
                    text = "Label";
                    x = QUOTE(0 * GRID_W);
                    y = QUOTE(0 * GRID_H);
                    w = QUOTE(80 * GRID_W);
                    h = QUOTE(7 * GRID_H);
                };

                class ModTitle: RscText {
                    idc = 9990002;
                    sizeEx = QUOTE(4 * GRID_H);
                    shadow = 0;
                    text = "Author";
                    x = QUOTE(0 * GRID_W);
                    y = QUOTE(7 * GRID_H);
                    w = QUOTE(80 * GRID_W);
                    h = QUOTE(4 * GRID_H);
                };
            };
        };
	};
};

class GVAR(configTitle): RscText {
    sizeEx = QUOTE(5 * GRID_H);
    shadow = 0;
    text = "Label";
    x = QUOTE(0 * GRID_W);
    y = QUOTE(0 * GRID_H);
    w = QUOTE(80 * GRID_W);
    h = QUOTE(5 * GRID_H);
};

class GVAR(valueImage): RscPicture {
    text = "";
    x = QUOTE(0 * GRID_W);
    y = QUOTE(0 * GRID_H);
    w = QUOTE(19.5 * GRID_W);
    h = QUOTE(10 * GRID_H);
    colorBackground[] = {0,0,0,1};
    style = 144;
    tileH = 0.5128;
    tileW = 1;
};

class GVAR(valueImageCenterSquare): RscPictureKeepAspect {
    text = "";
    x = QUOTE(0 * GRID_W);
    y = QUOTE(0 * GRID_H);
    w = QUOTE(19.5 * GRID_W);
    h = QUOTE(10 * GRID_H);
    colorBackground[] = {0,0,0,1};
};

class GVAR(valueCheckbox): RscCheckBox {
    x = QUOTE(0 * GRID_W);
    y = QUOTE(0 * GRID_H);
    w = QUOTE(19.5 * GRID_W);
    h = QUOTE(10 * GRID_H);
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
};

class GVAR(valueButton): RscButton {
    text = "Label";
    sizeEx = QUOTE(5 * GRID_H);
    x = QUOTE(0 * GRID_W);
    y = QUOTE(0 * GRID_H);
    w = QUOTE(19.5 * GRID_W);
    h = QUOTE(10 * GRID_H);

    colorText[] = {255, 255, 255, 1};
    colorBackground[] = {0, 0, 0, 0};
    colorFocused[] = {0, 0, 0, 0};
    colorShadow[] = {0, 0, 0, 0};
    colorBorder[] = {0, 0, 0, 0};
    colorBackgroundActive[] = {0, 0, 0, 0};
    colorDisabled[] = {0, 0, 0, 0};
    colorBackgroundDisabled[] = {0, 0, 0, 0};
};
