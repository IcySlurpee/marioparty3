#include "common.h"

extern u8 D_800CE20A;

void func_801059A0_4F6810_storycall(void) {
    u32 temp_s0;

    temp_s0 = D_800CE20A;
    omInitObjMan(0xA, 0xA);
    switch (temp_s0) {
    case 1:
        omOvlGotoEx(opening, 1, 0x192U);
        return;
    case 3:
        GwPlayer->coin = 0;
        omOvlGotoEx(mstory1, 0, 0x94U);
        return;
    case 5:
        GwPlayer->coin = 1;
        omOvlGotoEx(mstory1, 0, 0x94U);
        return;
    case 7:
        GwPlayer->coin = 2;
        omOvlGotoEx(mstory1, 0, 0x94U);
        return;
    case 15:
        GwPlayer->coin = 0;
        omOvlGotoEx(mstory2, 0, 0x94U);
        return;
    case 2:
        GwPlayer->coin = 1;
        omOvlGotoEx(mstory2, 0, 0x94U);
        return;
    case 4:
        GwPlayer->coin = 2;
        omOvlGotoEx(mstory2, 0, 0x94U);
        return;
    case 6:
        GwPlayer->coin = 3;
        omOvlGotoEx(mstory2, 0, 0x94U);
        return;
    case 8:
        GwPlayer->coin = 4;
        omOvlGotoEx(mstory2, 0, 0x94U);
        return;
    case 12:
        GwPlayer->coin = 0;
        omOvlGotoEx(mstory3, 0, 0x94U);
        return;
    case 10:
        GwPlayer->coin = 1;
        omOvlGotoEx(mstory3, 0, 0x94U);
        return;
    case 13:
        GwPlayer->coin = 0;
        omOvlGotoEx(mstory4, 0, 0x4190U);
        return;
    case 14:
        GwPlayer->coin = 1;
        omOvlGotoEx(mstory4, 0, 0x4190U);
        return;
    case 9:
        GwPlayer->coin = 0;
        omOvlGotoEx(mstory5, 0, 0x94U);
        return;
    case 11:
        GwPlayer->coin = 1;
        omOvlGotoEx(mstory5, 0, 0x94U);
        return;
    default:
        omOvlReturnEx(1);
        return;
    }
}
