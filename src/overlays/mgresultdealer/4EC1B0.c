#include "mgresultdealer.h"

// global
f32 _atan2d(f32, f32);
s16 HmfAnimRead(s32, s32, s32);

void func_8000BC48_C848(u16, u16);
void func_80013320_13F20(s16, s16);
void func_80013390_13F90(s16, s16, s32, void (*f)(s16));
void func_80017954_18554(s16, s16, s16, s16);
s16 func_80019828_1A428(s16, s16);
void func_8003302C_33C2C(s16, s32);

// local
void func_8010630C_4ECB1C_mgresultdealer(s16);
void func_80106A50_4ED260_mgresultdealer(omObjData*);
void func_80106B94_4ED3A4_mgresultdealer(omObjData*);
void func_80106CC8_4ED4D8_mgresultdealer(omObjData*);
void func_80106EC0_4ED6D0_mgresultdealer(omObjData*);
void func_80106EEC_4ED6FC_mgresultdealer(void);
void func_8010705C_4ED86C_mgresultdealer(omObjData*);
void func_801072A8_4EDAB8_mgresultdealer(s16);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801059A0_4EC1B0_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80105C88_4EC498_mgresultdealer);

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801061C8_4EC9D8_mgresultdealer);
void func_801061C8_4EC9D8_mgresultdealer(void) {
    s16 temp_v0;

    temp_v0 = func_8000B108_BD08(0x190002, 0x2002B9);
    Hu3DModelPosSet(temp_v0, 0.0f, 0.0f, 0.0f);
    func_80019828_1A428(temp_v0, 2);
    func_80013320_13F20(temp_v0, 0);
    func_8010630C_4ECB1C_mgresultdealer(temp_v0);
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106234_4ECA44_mgresultdealer);
void func_80106234_4ECA44_mgresultdealer(void) {
    if (D_800D530C_D5F0C == 1) { // omSysExitReq?
        if (D_801098D0_4F00E0_mgresultdealer == FALSE) { // if no wipe created?
            WipeCreateOut(0, 0x14);
            D_801098D0_4F00E0_mgresultdealer = 1;
            return;
        }
        if (WipeStatGet() == 0) {
            HuAudSeqFadeOut(0x1E);
            func_8004AB0C_4B70C(0x1E);
            func_80037258_37E58();
            omOvlReturnEx(1);
        }
    }
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801062B4_4ECAC4_mgresultdealer);
void func_801062B4_4ECAC4_mgresultdealer(void) {
    u16 temp_s0;

    temp_s0 = InitEspriteSlot(func_8000B838_C438(0x190000), 0U, 0U) & 0xFFFF;
    func_8000BBD4_C7D4(temp_s0, 0xA0, 0x78);
    func_8000BC48_C848(temp_s0, 0x4000);
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_8010630C_4ECB1C_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801065D0_4ECDE0_mgresultdealer);

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106A50_4ED260_mgresultdealer);
void func_80106A50_4ED260_mgresultdealer(omObjData* arg0) {
    f32 temp_f4;

    if (D_801098E0_4F00F0_mgresultdealer != 0) {
        temp_f4 = D_801098E8_4F00F8_mgresultdealer[0] - D_80109A60_4F0270_mgresultdealer;
        D_801098E8_4F00F8_mgresultdealer[0] = temp_f4;
        D_80109A60_4F0270_mgresultdealer += 0.98f;
        D_801098F0_4F0100_mgresultdealer.x += 30.0f;
        if (temp_f4 <= 180.0f) {
            func_8001C258_1CE58(arg0->model[1], 4, 0);
            D_801098E8_4F00F8_mgresultdealer[0] = 180.0f;
            D_80109A60_4F0270_mgresultdealer = -10.0f;
            D_801098E2_4F00F2_mgresultdealer = 1;
            HuAudFXPlay(0x515);
            HuAudFXPlay(0x518);
            D_8010A254_4F0A64_mgresultdealer = func_80106B94_4ED3A4_mgresultdealer;
        }
        Hu3DModelPosSet(arg0->model[2], D_801098E4_4F00F4_mgresultdealer[0], D_801098E4_4F00F4_mgresultdealer[1], D_801098E4_4F00F4_mgresultdealer[2]);
        Hu3DModelRotSet(arg0->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
    }
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106B94_4ED3A4_mgresultdealer);

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106CC8_4ED4D8_mgresultdealer);
void func_80106CC8_4ED4D8_mgresultdealer(omObjData* arg0) {
    f32 temp_f0;

    temp_f0 = *D_801098E8_4F00F8_mgresultdealer - D_80109A60_4F0270_mgresultdealer;
    *D_801098E8_4F00F8_mgresultdealer = temp_f0;
    D_80109A60_4F0270_mgresultdealer += 0.98f;
    if (temp_f0 <= 0.0f) {
        D_801098E8_4F00F8_mgresultdealer[0] = 0.0f;
        D_801098E0_4F00F0_mgresultdealer = 0;
        D_8010A254_4F0A64_mgresultdealer = func_80106A50_4ED260_mgresultdealer;
    }
    Hu3DModelPosSet(arg0->model[2], D_801098E4_4F00F4_mgresultdealer[0], D_801098E4_4F00F4_mgresultdealer[1], D_801098E4_4F00F4_mgresultdealer[2]);
    Hu3DModelRotSet(arg0->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
}

void func_80106D94_4ED5A4_mgresultdealer(void) {
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106D9C_4ED5AC_mgresultdealer);
void func_80106D9C_4ED5AC_mgresultdealer(void) {
    omObjData *temp_s1;

    temp_s1 = D_8010A250_4F0A60_mgresultdealer;
    D_801098E0_4F00F0_mgresultdealer = 1;
    D_801098E1_4F00F1_mgresultdealer = 0;
    D_801098E2_4F00F2_mgresultdealer = 0;
    D_801098E4_4F00F4_mgresultdealer[0] = 0.0f;
    D_801098E4_4F00F4_mgresultdealer[1] = 400.0f;
    D_801098E4_4F00F4_mgresultdealer[2] = -55.0f;
    D_801098F0_4F0100_mgresultdealer.x = 160.0f;
    D_801098F0_4F0100_mgresultdealer.y = 20.0f;
    D_801098F0_4F0100_mgresultdealer.z = 0.0f;
    D_80109A60_4F0270_mgresultdealer = 0.0f;
    Hu3DModelPosSet(temp_s1->model[2], D_801098E4_4F00F4_mgresultdealer[0], 400.0f, -55.0f);
    Hu3DModelRotSet(temp_s1->model[2], D_801098F0_4F0100_mgresultdealer.x, D_801098F0_4F0100_mgresultdealer.y, D_801098F0_4F0100_mgresultdealer.z);
    func_8001C258_1CE58(temp_s1->model[1], 4, 4);
    func_8001C258_1CE58(temp_s1->model[2], 4, 0);
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106EA0_4ED6B0_mgresultdealer);
s8 func_80106EA0_4ED6B0_mgresultdealer(void) {
    return D_801098E2_4F00F2_mgresultdealer;
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106EAC_4ED6BC_mgresultdealer);
void func_80106EAC_4ED6BC_mgresultdealer(void) {
    D_8010A254_4F0A64_mgresultdealer = func_80106EC0_4ED6D0_mgresultdealer;
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106EC0_4ED6D0_mgresultdealer);
void func_80106EC0_4ED6D0_mgresultdealer(omObjData* arg0) {
    func_80106EEC_4ED6FC_mgresultdealer();
    D_8010A254_4F0A64_mgresultdealer = func_80106A50_4ED260_mgresultdealer;
}

INCLUDE_RODATA("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", D_801099A8_4F01B8_mgresultdealer);
// const s16 D_801099AA_4F01BA_mgresultdealer[] = {
//     0x36, 0x37, 0x3A, 0x37, 0x36, 0x37, 0x36, 0x37
// };

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80106EEC_4ED6FC_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_8010705C_4ED86C_mgresultdealer);

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801070EC_4ED8FC_mgresultdealer);
void func_801070EC_4ED8FC_mgresultdealer(s16 arg0) {
    HmfModelData_UnkBC_Unk58_Struct* var_s0;
    s16 temp_v0_2;
    s16 var_a0;

    temp_v0_2 = HmfModelData[arg0].hmf->unk1A;
    var_s0 = HmfModelData[arg0].unkBC->unk58;

    for (var_a0 = 0; var_a0 < temp_v0_2; var_a0++) {
        if (var_s0->unk0C.y <= 0.0f) {
            var_s0->unk0C.x = 2.0f * (100.0f - (((rand8() & 0xFF) % 200) & 0xFF));
            var_s0->unk0C.y = 500.0f;
            var_s0->unk0C.z = ((((rand8() & 0xFF) * 0x7D) >> 5) - 0x1F4);

            var_a0 = (rand8() & 0xFF) * 5;
            var_s0->unk18.x = ((var_a0 >> 7) - 5) / 2.0f;
            var_s0->unk18.y = 0.0f;
            var_a0 = (rand8() & 0xFF) * 5;
            var_s0->unk18.z = ((var_a0 >> 7) - 5) / 2.0f;
            
            var_s0->unk08 = 3.0f;
            return;
        }
        var_s0++;
    }
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801072A8_4EDAB8_mgresultdealer);
void func_801072A8_4EDAB8_mgresultdealer(s16 arg0) {
    HmfData* temp00 = HmfModelData[arg0].hmf;
    HmfModelData_UnkBC_Struct* temp_a0 = HmfModelData[arg0].unkBC;
    s16 temp_t0 = temp00->unk1A;
    s16 temp_a3 = temp_a0->unk02;

    HmfModelData_UnkBC_Unk58_Struct* var_v1;
    s16 i;

    if (!temp_a3) {
        temp_a0->unk04 &= 0xFFFB;
        var_v1 = temp_a0->unk58;
            for (i = 0; i < temp_t0; i++) {
                var_v1->unk0C.x = var_v1->unk0C.y = var_v1->unk0C.z = 0.0f;
                var_v1->unk24.x = var_v1->unk24.y = var_v1->unk24.z = 0.0f;
                var_v1->unk08 = 0.0f;
                var_v1->unk04 = 1.0f;
                var_v1++;
            }
        temp_a0->unk02++;
    }

    var_v1 = temp_a0->unk58;
    for (i = 0; i < temp_t0; i++) {
        if (var_v1->unk0C.y > 0.0f) {
            var_v1->unk0C.x += var_v1->unk18.x;
            var_v1->unk0C.y += var_v1->unk18.y - 8.0f;
            var_v1->unk0C.z += var_v1->unk18.z;
        } else {
            var_v1->unk08 = 0.0f;
        }
        var_v1++;
    }
}

// INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801073F4_4EDC04_mgresultdealer);
void func_801073F4_4EDC04_mgresultdealer(void) {
    func_80017954_18554(*D_8010A250_4F0A60_mgresultdealer->model, 2, GwPlayer[D_8010A266_4F0A76_mgresultdealer].chr, D_80109A68_4F0278_mgresultdealer);
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107448_4EDC58_mgresultdealer);
// void func_80107448_4EDC58_mgresultdealer(void) {
//     func_80017954_18554(*D_8010A250_4F0A60_mgresultdealer->model, 2, GwPlayer[D_8010A266_4F0A76_mgresultdealer].chr, D_80109A6A_4F027A_mgresultdealer);
// }

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801074A0_4EDCB0_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107888_4EE098_mgresultdealer);

void func_80107E3C_4EE64C_mgresultdealer(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80107E44_4EE654_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108034_4EE844_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108040_4EE850_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108194_4EE9A4_mgresultdealer);

void func_80108258_4EEA68_mgresultdealer(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108260_4EEA70_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_8010829C_4EEAAC_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801082A8_4EEAB8_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108544_4EED54_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108554_4EED64_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108560_4EED70_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108570_4EED80_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108AEC_4EF2FC_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80108BD4_4EF3E4_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109044_4EF854_mgresultdealer);

void func_801090AC_4EF8BC_mgresultdealer(void) {
}

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801090B4_4EF8C4_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801090E8_4EF8F8_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801090F4_4EF904_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109100_4EF910_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_801093A0_4EFBB0_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109478_4EFC88_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109484_4EFC94_mgresultdealer);

INCLUDE_ASM("asm/nonmatchings/overlays/mgresultdealer/4EC1B0", func_80109710_4EFF20_mgresultdealer);
