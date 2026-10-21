#include "types.h"

struct Unk_ov122_0206d9ac {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s8 unk04;
};

extern "C" s8 func_ov122_0206d9ac(Unk_ov122_0206d9ac* self) {
    return self->unk04;
}
