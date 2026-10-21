#include "types.h"

struct Unk_ov123_020935d8 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
};

extern "C" void func_ov123_020935d8(Unk_ov123_020935d8* self, u32 a, u32 b) {
    self->unk24 = a;
    self->unk28 = b;
}
