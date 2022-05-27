#define INVISIBLE_COLOR 0, 0, 0, 0

#define WEAK_MATCH_BG_COLOR 0.4, 0.4, 0.4, 0.4
#define ACTIVE_BG_COLOR 0.5, 0.5, 0.5, 0.2

#define EXACT_MATCH_TEXT_COLOR 1, 1, 1, 1
#define WEAK_MATCH_TEXT_COLOR 0.9, 0.9, 0.9, 0.9
#define DISABLED_TEXT_COLOR 0.8, 0.8, 0.8, 0.8

#define UPDATE_CONTROL(cfgCtrl,listCtrl,configHeight,configOffsetY,listHeightOffset) \
    listCtrl ctrlSetPositionH (safezoneH - (24.5##listHeightOffset) * GRID_H); \
    cfgCtrl ctrlSetPositionY ((safezoneY + 14 * GRID_H) + (safezoneH - (24.5##configOffsetY) * GRID_H)); \
    cfgCtrl ctrlSetPositionH (configHeight); \
    listCtrl ctrlCommit 0.2; \
    cfgCtrl ctrlCommit 0.2

#define VALUE_TILE_SIZE_DEFAULT CTRL_POS_SIZE(0,0,19,10)

#define CTRL_POS_SIZE(xVal,yVal,wVal,hVal) \
    x = QUOTE(xVal * GRID_W); \
    y = QUOTE(yVal * GRID_H); \
    w = QUOTE(wVal * GRID_W); \
    h = QUOTE(hVal * GRID_H)
