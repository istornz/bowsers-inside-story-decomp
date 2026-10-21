#include "types.h"

struct Unk_ov003_Heap {
    /* 0x0 */ u8 unk0[0x4];
    /* 0x4 */ u8 unk4;
};

extern "C" u8 data_0205c25c[];

extern "C" void* func_020291bc(Unk_ov003_Heap* heap, u32 size, s32 a, s32 b, s32 c);

// TODO: 95.59%. Register allocation only (r12/lr/r4 swapped). Tried: align instead of mask, u8 shift local, inline
// expression, s32 mask.
extern "C" void* func_ov003_0206b044(Unk_ov003_Heap* heap, u32 size, s32 a, s32 b, s32 c) {
    u32 mask = (1 << data_0205c25c[heap->unk4]) - 1;
    return func_020291bc(heap, (size + mask) & ~mask, a, b, c);
}
