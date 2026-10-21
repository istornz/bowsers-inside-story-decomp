#include "types.h"

struct Unk_main_02038700 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u16 unk04;
};

extern "C" u16 func_02038700(Unk_main_02038700* self) {
    return self->unk04;
}
