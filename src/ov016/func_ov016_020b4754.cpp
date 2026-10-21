#include "types.h"

struct Unk_ov016_020b4754 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
};

extern "C" u32 func_ov016_020b4754(Unk_ov016_020b4754* self) {
    return self->unk50;
}
