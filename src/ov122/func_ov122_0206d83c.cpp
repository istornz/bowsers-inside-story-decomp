#include "types.h"

struct Unk_ov122_0206d83c {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
};

extern "C" void func_ov122_0206d83c(Unk_ov122_0206d83c* self, u32 a, u32 b) {
    self->unk24 = a;
    self->unk28 = b;
}
