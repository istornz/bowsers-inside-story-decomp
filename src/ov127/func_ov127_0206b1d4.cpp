#include "types.h"

struct Unk_ov127_0206b1d4 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" void func_ov127_0206b1d4(Unk_ov127_0206b1d4* self, u32 value) {
    self->unk20 = value;
}
