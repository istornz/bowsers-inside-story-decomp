#include "types.h"

struct Unk_ov004_020b522c {
    /* 0x00 */ u8 unk00[0x444];
    /* 0x444 */ u32 unk444[1];
};

extern "C" u32 func_ov004_020b522c(Unk_ov004_020b522c* self, s32 index) {
    return self->unk444[index];
}
