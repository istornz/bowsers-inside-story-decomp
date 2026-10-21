#include "types.h"

struct Unk_ov122_02069c10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
};

extern "C" u32 func_ov122_02069c10(Unk_ov122_02069c10* self) {
    return self->unk10;
}
