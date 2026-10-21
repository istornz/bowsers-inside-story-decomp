#include "types.h"

struct Unk_ov122_0206a588 {
    /* 0x00 */ u8 unk00[0xc24];
    /* 0xc24 */ u32 unkc24;
};

extern "C" u32 func_ov122_0206a588(Unk_ov122_0206a588* self) {
    return self->unkc24;
}
