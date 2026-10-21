#include "types.h"

struct Unk_ov011_0206b440 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
};

extern "C" u32 func_ov011_0206b440(Unk_ov011_0206b440* self) {
    return self->unk50;
}
