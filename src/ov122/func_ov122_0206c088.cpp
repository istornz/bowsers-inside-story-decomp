#include "types.h"

struct Unk_ov122_0206c088 {
    /* 0x00 */ u8 unk00[0x5b];
    /* 0x5b */ s8 unk5b;
};

extern "C" s8 func_ov122_0206c088(Unk_ov122_0206c088* self) {
    return self->unk5b;
}
