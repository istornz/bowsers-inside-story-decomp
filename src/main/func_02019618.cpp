#include "types.h"

struct Unk_main_02019618 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 unk04;
};

extern "C" u32 func_02019618(Unk_main_02019618* self) {
    return self->unk04;
}
