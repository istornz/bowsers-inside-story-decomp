#include "types.h"

struct Unk_ov003_0207356c {
    /* 0x00 */ u8 unk00[0x76f];
    /* 0x76f */ u8 unk76f;
};

extern "C" u8 func_ov003_0207356c(Unk_ov003_0207356c* self) {
    return self->unk76f;
}
