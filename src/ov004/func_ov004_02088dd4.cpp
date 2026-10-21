#include "types.h"

struct Unk_ov004_02088dd4 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
};

extern "C" u32 func_ov004_02088dd4(Unk_ov004_02088dd4* self) {
    return self->unk08;
}
