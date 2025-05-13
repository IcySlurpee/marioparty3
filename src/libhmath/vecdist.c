#include "common.h"
#include "math.h"

// this matches, but the entire file needs to have inlined assembly for the mulmul fix to work
#ifdef NONMATCHING
f32 _HuVecDistanceSqr(Vec * a, Vec * b)
{
    f32 x;
    f32 y;
    f32 z;

    x = a->x - b->x;
    y = a->y - b->y;
    z = a->z - b->z;

    return (x * x) + (y * y) + (z * z);
}
#else
INCLUDE_ASM("asm/nonmatchings/libhmath/vecdist", HuVecDistanceSqr);
#endif

// https://decomp.me/scratch/02P6S
// // the original output has the function prologue near the end rather than the start
#ifdef NONMATCHING
f32 _HuVecDistance(Vec * arg0, Vec * arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f2;

    temp_f0 = arg0->x - arg1->x;
    temp_f2 = arg0->y - arg1->y;
    temp_f12 = arg0->z - arg1->z;
    return HuSqrtf((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f12 * temp_f12));
}
#else
INCLUDE_ASM("asm/nonmatchings/libhmath/vecdist", HuVecDistance);
#endif
