#include "types.h"

struct Unk_ov124_0207ca44 {
    /* 0x00 */ u8 unk00[0x7];
    /* 0x07 */ s8 unk07;
};

extern "C" s8 func_ov124_0207ca44(Unk_ov124_0207ca44* self) {
    return self->unk07;
}
