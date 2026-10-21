#include "types.h"

struct Unk_ov122_0206c05c {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ u8 unk74;
};

extern "C" void func_ov122_0206c05c(Unk_ov122_0206c05c* self, u8 value) {
    self->unk74 = value;
}
