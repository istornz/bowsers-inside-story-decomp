#include "types.h"

struct Unk_ov028_020cf888 {
    /* 0x00 */ u8 unk00[0x1c0];
    /* 0x1c0 */ u32 unk1c0;
};

extern "C" void func_ov028_020cf888(Unk_ov028_020cf888* self) {
    self->unk1c0 = 0;
}
