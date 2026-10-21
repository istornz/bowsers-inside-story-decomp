#include "types.h"

struct Unk_ov123_02083148 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 unk20;
};

extern "C" void func_ov123_02083148(Unk_ov123_02083148* self, u8 value) {
    self->unk20 = value;
}
