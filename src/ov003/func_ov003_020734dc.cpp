#include "types.h"

struct Unk_ov003_020734dc {
    /* 0x00 */ u8 unk00[0x771];
    /* 0x771 */ u8 unk771;
};

extern "C" u8 func_ov003_020734dc(Unk_ov003_020734dc* self) {
    return self->unk771;
}
