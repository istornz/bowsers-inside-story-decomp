#include "types.h"

struct Unk_ov124_0209380c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
};

extern "C" void func_ov124_0209380c(Unk_ov124_0209380c* self, u32 a, u32 b) {
    self->unk24 = a;
    self->unk28 = b;
}
