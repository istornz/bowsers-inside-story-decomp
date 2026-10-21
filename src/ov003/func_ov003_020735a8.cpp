#include "types.h"

struct Unk_ov003_020735a8 {
    /* 0x00 */ u8 unk00[0x788];
    /* 0x788 */ u32 unk788[1];
};

extern "C" u32 func_ov003_020735a8(Unk_ov003_020735a8* self, s32 index) {
    return self->unk788[index];
}
