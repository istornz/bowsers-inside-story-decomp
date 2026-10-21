#include "types.h"

struct Unk_ov003_0207359c {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u32 unk70[1];
};

extern "C" u32 func_ov003_0207359c(Unk_ov003_0207359c* self, s32 index) {
    return self->unk70[index];
}
