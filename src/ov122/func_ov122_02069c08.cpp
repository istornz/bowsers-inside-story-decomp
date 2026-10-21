#include "types.h"

struct Unk_ov122_02069c08 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
};

extern "C" u32 func_ov122_02069c08(Unk_ov122_02069c08* self) {
    return self->unk14;
}
