#include "types.h"

struct Unk_ov125_02078e80 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
};

extern "C" void func_ov125_02078e80(Unk_ov125_02078e80* self) {
    self->unk28 = 0;
}
