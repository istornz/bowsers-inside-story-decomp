#include "types.h"

struct Unk_ov123_0207d3c0 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
};

extern "C" void func_ov123_0207d3c0(Unk_ov123_0207d3c0* self, u32 value) {
    self->unk18 = value;
}
