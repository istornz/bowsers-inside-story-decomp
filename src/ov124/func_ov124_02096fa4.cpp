#include "types.h"

struct Unk_ov124_02096fa4 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
};

extern "C" u32 func_ov124_02096fa4(Unk_ov124_02096fa4* self) {
    return self->unk20;
}
