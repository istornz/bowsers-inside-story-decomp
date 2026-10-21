#include "types.h"

struct Unk_ov123_020818bc {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ s8 unk06;
};

extern "C" s8 func_ov123_020818bc(Unk_ov123_020818bc* self) {
    return self->unk06;
}
