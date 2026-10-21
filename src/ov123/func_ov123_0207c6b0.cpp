#include "types.h"

struct Unk_ov123_0207c6b0 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1c;
};

extern "C" u32 func_ov123_0207c6b0(Unk_ov123_0207c6b0* self) {
    return self->unk1c;
}
