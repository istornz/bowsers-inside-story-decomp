#include "types.h"

struct Unk_ov123_0207d3b8 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" void func_ov123_0207d3b8(Unk_ov123_0207d3b8* self, u32 value) {
    self->unk20 = value;
}
