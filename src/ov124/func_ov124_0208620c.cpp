#include "types.h"

struct Unk_ov124_0208620c {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ u8 unk21;
};

extern "C" void func_ov124_0208620c(Unk_ov124_0208620c* self, u8 value) {
    self->unk21 = value;
}
