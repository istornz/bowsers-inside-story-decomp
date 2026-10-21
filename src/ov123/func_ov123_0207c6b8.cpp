#include "types.h"

struct Unk_ov123_0207c6b8 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 unk14;
};

extern "C" s16 func_ov123_0207c6b8(Unk_ov123_0207c6b8* self) {
    return self->unk14;
}
