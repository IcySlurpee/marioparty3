#include "common.h"

void func_80105B64_3FE384_board_pipesqueak_intro(void);
void func_80105BA0_3FE3C0_board_pipesqueak_intro(void);
void func_8010DA88_4062A8_board_pipesqueak_intro(void);
void func_8010DB04_406324_board_pipesqueak_intro(void);

board_overlay_entrypoint D_80117400_40FC20_board_pipesqueak_intro[] = {
    {0, func_80105B64_3FE384_board_pipesqueak_intro},
    {1, func_80105BA0_3FE3C0_board_pipesqueak_intro},
    {2, func_8010DA88_4062A8_board_pipesqueak_intro},
    {3, func_8010DB04_406324_board_pipesqueak_intro},
    {-1, NULL}
};

void func_801059A0_3FE1C0_board_pipesqueak_intro(void) {
    func_800359E0_365E0(D_80117400_40FC20_board_pipesqueak_intro, D_800A1764_A2364);
}
