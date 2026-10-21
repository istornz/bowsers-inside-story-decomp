#include "types.h"

struct Unk_ov011_0206ca7c {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
};

extern "C" BOOL func_ov011_0206ca7c(Unk_ov011_0206ca7c* self) {
    return self->unk28 != 0;
}
