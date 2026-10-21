#include "types.h"

struct Unk_ov122_0206c090 {
    /* 0x00 */ u8 unk00[0x5a];
    /* 0x5a */ s8 unk5a;
};

extern "C" s8 func_ov122_0206c090(Unk_ov122_0206c090* self) {
    return self->unk5a;
}
