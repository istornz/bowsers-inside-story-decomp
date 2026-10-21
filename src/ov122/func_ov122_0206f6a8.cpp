#include "types.h"

struct Unk_ov122_0206f6a8 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u32 unk1c;
};

extern "C" u32 func_ov122_0206f6a8(Unk_ov122_0206f6a8* self) {
    return self->unk1c;
}
