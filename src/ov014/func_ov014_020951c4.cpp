#include "types.h"

struct Unk_ov014_020951c4 {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ u32 unk6c;
};

extern "C" u32 func_ov014_020951c4(Unk_ov014_020951c4* self) {
    return self->unk6c;
}
