#include "types.h"

struct Unk_ov122_0206d968 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 unk10;
};

extern "C" s16 func_ov122_0206d968(Unk_ov122_0206d968* self) {
    return self->unk10;
}
