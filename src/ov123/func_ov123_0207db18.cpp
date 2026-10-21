#include "types.h"

struct Unk_ov123_0206d848 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1c */ u32 unk1c;
    /* 0x20 */ u32 unk20;
};

extern "C" void func_ov123_0207db18(Unk_ov123_0206d848* self, u32 a, u32 b, u32 c) {
    self->unk18 = a;
    self->unk1c = b;
    self->unk20 = c;
}
