#include "types.h"

struct Unk_ov122_0206c0a0 {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s8 unk58;
};

extern "C" s8 func_ov122_0206c0a0(Unk_ov122_0206c0a0* self) {
    return self->unk58;
}
