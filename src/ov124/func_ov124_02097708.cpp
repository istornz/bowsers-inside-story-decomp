#include "types.h"

struct Unk_ov124_02097708 {
    /* 0x00 */ u8 unk00[0x9];
    /* 0x09 */ u8 unk09;
};

extern "C" u8 func_ov124_02097708(Unk_ov124_02097708* self) {
    return self->unk09;
}
