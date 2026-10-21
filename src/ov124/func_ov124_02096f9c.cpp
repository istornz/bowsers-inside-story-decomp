#include "types.h"

struct Unk_ov124_02096f9c {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ s8 unk06;
};

extern "C" s8 func_ov124_02096f9c(Unk_ov124_02096f9c* self) {
    return self->unk06;
}
