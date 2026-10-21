#include "types.h"

struct Unk_ov124_0207f38c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ s8 unk04;
};

extern "C" s8 func_ov124_0207f38c(Unk_ov124_0207f38c* self) {
    return self->unk04;
}
