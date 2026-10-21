#include "types.h"

struct Unk_ov124_0207ee3c {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
};

extern "C" void func_ov124_0207ee3c(Unk_ov124_0207ee3c* self, u32 value) {
    self->unk18 = value;
}
