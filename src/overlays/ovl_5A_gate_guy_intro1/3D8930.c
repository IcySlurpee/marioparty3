#include "common.h"

void func_801059D0_3D8960_gate_guy_intro1(void);
void func_80105A44_3D89D4_gate_guy_intro1(void);
void func_80105A98_3D8A28_gate_guy_intro1(void);

board_overlay_entrypoint D_80105AE0_3D8A70_gate_guy_intro1[] = {
    {0, func_801059D0_3D8960_gate_guy_intro1},
    {1, func_80105A44_3D89D4_gate_guy_intro1},
    {2, func_80105A98_3D8A28_gate_guy_intro1},
    {-1, NULL}
};

void func_801059A0_3D8930_gate_guy_intro1(void) {
    func_800359E0_365E0(D_80105AE0_3D8A70_gate_guy_intro1, D_800A1764_A2364);
}
