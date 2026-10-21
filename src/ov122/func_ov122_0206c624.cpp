#include "types.h"

struct Unk_ov122_0206c624 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" u32 func_ov122_0206c624(Unk_ov122_0206c624* self) {
    return self->unk20;
}
