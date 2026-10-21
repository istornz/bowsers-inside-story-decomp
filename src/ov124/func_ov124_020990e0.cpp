#include "types.h"

struct Unk_ov124_020990e0 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 unk10;
};

extern "C" s16 func_ov124_020990e0(Unk_ov124_020990e0* self) {
    return self->unk10;
}
