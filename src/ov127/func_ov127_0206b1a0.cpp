#include "types.h"

struct Unk_ov127_0206b1a0 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
};

extern "C" void func_ov127_0206b1a0(Unk_ov127_0206b1a0* self, u32 a, u32 b) {
    self->unk14 = a;
    self->unk18 = b;
}
