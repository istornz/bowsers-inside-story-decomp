#include "types.h"

struct Unk_ov122_0206c564 {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ u8 unk08;
};

extern "C" u8 func_ov122_0206c564(Unk_ov122_0206c564* self) {
    return self->unk08;
}
