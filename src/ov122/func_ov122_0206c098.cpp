#include "types.h"

struct Unk_ov122_0206c098 {
    /* 0x00 */ u8 unk00[0x59];
    /* 0x59 */ s8 unk59;
};

extern "C" s8 func_ov122_0206c098(Unk_ov122_0206c098* self) {
    return self->unk59;
}
