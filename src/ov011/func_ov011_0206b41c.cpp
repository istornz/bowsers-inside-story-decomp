#include "types.h"

struct Unk_ov011_0206b41c {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
};

extern "C" u32 func_ov011_0206b41c(Unk_ov011_0206b41c* self) {
    return self->unk50;
}
