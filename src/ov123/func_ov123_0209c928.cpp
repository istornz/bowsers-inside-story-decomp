#include "types.h"

struct Unk_ov123_0209c928 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1c;
};

extern "C" void func_ov123_0209c928(Unk_ov123_0209c928* self, u32 value) {
    self->unk1c = value;
}
