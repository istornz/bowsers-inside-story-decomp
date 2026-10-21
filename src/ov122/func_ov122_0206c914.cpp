#include "types.h"

struct Unk_ov122_0206c914 {
    /* 0x00 */ u8 unk00[0x9];
    /* 0x09 */ u8 unk09;
};

extern "C" u8 func_ov122_0206c914(Unk_ov122_0206c914* self) {
    return self->unk09;
}
