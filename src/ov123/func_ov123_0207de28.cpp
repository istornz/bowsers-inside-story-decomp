#include "types.h"

struct Unk_ov123_0207de28 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s8 unk04;
};

extern "C" s8 func_ov123_0207de28(Unk_ov123_0207de28* self) {
    return self->unk04;
}
