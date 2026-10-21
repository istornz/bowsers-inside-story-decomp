#include "types.h"

struct Unk_ov122_0206d958 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 unk14;
};

extern "C" s16 func_ov122_0206d958(Unk_ov122_0206d958* self) {
    return self->unk14;
}
