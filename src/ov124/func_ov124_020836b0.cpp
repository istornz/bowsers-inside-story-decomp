#include "types.h"

struct Unk_ov124_020836b0 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 unk08;
};

extern "C" u8 func_ov124_020836b0(Unk_ov124_020836b0* self) {
    return self->unk08;
}
