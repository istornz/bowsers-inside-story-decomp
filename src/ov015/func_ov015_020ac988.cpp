#include "types.h"

struct Unk_ov015_020ac988 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
};

extern "C" BOOL func_ov015_020ac988(Unk_ov015_020ac988* self) {
    return self->unk50 != 0;
}
