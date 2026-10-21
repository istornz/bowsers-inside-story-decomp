#include "types.h"

struct Unk_ov123_0207d3b0 {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ u8 unk06;
};

extern "C" void func_ov123_0207d3b0(Unk_ov123_0207d3b0* self, u8 value) {
    self->unk06 = value;
}
