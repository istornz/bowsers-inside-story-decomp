#include "types.h"

struct Unk_ov003_0206f884 {
    /* 0x00 */ u8 unk00[0x74c];
    /* 0x74c */ u32 unk74c;
    /* 0x750 */ u32 unk750;
};

extern "C" void func_ov003_0206f884(Unk_ov003_0206f884* self, u32 a, u32 b) {
    self->unk74c = a;
    self->unk750 = b;
}
