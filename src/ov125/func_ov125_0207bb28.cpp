#include "types.h"

struct Unk_ov125_0207bb28 {
    /* 0x00 */ u8 unk00[0x35];
    /* 0x35 */ u8 unk35;
};

extern "C" void func_ov125_0207bb28(Unk_ov125_0207bb28* self, u8 value) {
    self->unk35 = value;
}
