#include "types.h"

struct Unk_ov004_020876f8 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" u32 func_ov004_020876f8(Unk_ov004_020876f8* self) {
    return self->unk04;
}
