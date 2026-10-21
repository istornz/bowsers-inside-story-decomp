#include "types.h"

struct Unk_ov122_0206c55c {
    /* 0x00 */ u8 unk00[0x6];
    /* 0x06 */ s8 unk06;
};

extern "C" s8 func_ov122_0206c55c(Unk_ov122_0206c55c* self) {
    return self->unk06;
}
