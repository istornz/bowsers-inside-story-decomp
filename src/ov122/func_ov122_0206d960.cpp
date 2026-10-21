#include "types.h"

struct Unk_ov122_0206d960 {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 unk12;
};

extern "C" s16 func_ov122_0206d960(Unk_ov122_0206d960* self) {
    return self->unk12;
}
