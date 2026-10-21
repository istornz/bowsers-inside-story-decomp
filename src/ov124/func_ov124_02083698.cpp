#include "types.h"

struct Unk_ov124_02083698 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s16 unk14;
};

extern "C" s16 func_ov124_02083698(Unk_ov124_02083698* self) {
    return self->unk14;
}
