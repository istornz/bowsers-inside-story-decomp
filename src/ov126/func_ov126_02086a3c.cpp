#include "types.h"

struct Unk_ov126_02086a3c {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s8 unk20;
};

extern "C" s8 func_ov126_02086a3c(Unk_ov126_02086a3c* self) {
    return self->unk20;
}
