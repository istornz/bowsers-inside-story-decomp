#include "types.h"

struct Unk_ov122_0206d970 {
    /* 0x00 */ u8 unk00[0x7];
    /* 0x07 */ s8 unk07;
};

extern "C" s8 func_ov122_0206d970(Unk_ov122_0206d970* self) {
    return self->unk07;
}
