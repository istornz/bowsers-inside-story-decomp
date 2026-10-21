#include "types.h"

struct Unk_ov124_0209908c {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1c;
};

extern "C" void func_ov124_0209908c(Unk_ov124_0209908c* self, u32 value) {
    self->unk1c = value;
}
