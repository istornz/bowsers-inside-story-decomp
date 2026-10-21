#include "types.h"

struct Unk_main_020225dc {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ s16 unk26;
};

extern "C" s16 func_020225dc(Unk_main_020225dc* self) {
    return self->unk26;
}
