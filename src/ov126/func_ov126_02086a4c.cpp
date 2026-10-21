#include "types.h"

struct Unk_ov126_02086a4c {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s8 unk22;
};

extern "C" s8 func_ov126_02086a4c(Unk_ov126_02086a4c* self) {
    return self->unk22;
}
