#include "types.h"

struct Unk_ov122_02069fd8 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 unk10;
};

extern "C" u16 func_ov122_02069fd8(Unk_ov122_02069fd8* self) {
    return self->unk10;
}
