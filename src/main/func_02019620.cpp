#include "types.h"

struct Unk_main_02019620 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u32 unk08;
};

extern "C" u32 func_02019620(Unk_main_02019620* self) {
    return self->unk08;
}
