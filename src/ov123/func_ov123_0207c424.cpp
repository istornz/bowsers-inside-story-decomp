#include "types.h"

struct Unk_ov123_0207c424 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 unk08;
};

extern "C" u8 func_ov123_0207c424(Unk_ov123_0207c424* self) {
    return self->unk08;
}
