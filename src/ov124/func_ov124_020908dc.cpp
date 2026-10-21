#include "types.h"

struct Unk_ov124_020908dc {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 unk12;
};

extern "C" s16 func_ov124_020908dc(Unk_ov124_020908dc* self) {
    return self->unk12;
}
