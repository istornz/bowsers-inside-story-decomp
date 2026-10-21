#include "types.h"

struct Unk_ov016_020ae238 {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 unk12;
};

extern "C" u16 func_ov016_020ae238(Unk_ov016_020ae238* self) {
    return self->unk12;
}
