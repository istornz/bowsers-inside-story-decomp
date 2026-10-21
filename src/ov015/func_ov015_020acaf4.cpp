#include "types.h"

struct Unk_ov015_020acaf4 {
    /* 0x00 */ u8 unk00[0x96];
    /* 0x96 */ u16 unk96;
};

extern "C" u16 func_ov015_020acaf4(Unk_ov015_020acaf4* self) {
    return self->unk96;
}
