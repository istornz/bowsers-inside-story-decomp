#include "types.h"

struct Unk_ov125_0207b720 {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u8 unk34;
};

extern "C" void func_ov125_0207b720(Unk_ov125_0207b720* self, u8 value) {
    self->unk34 = value;
}
