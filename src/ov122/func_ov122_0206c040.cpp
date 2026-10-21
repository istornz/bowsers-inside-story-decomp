#include "types.h"

struct Unk_ov122_0206c040 {
    /* 0x00 */ u8 unk00[0xd0];
    /* 0xd0 */ u8 unkd0;
};

extern "C" u8 func_ov122_0206c040(Unk_ov122_0206c040* self) {
    return self->unkd0;
}
