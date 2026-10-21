#include "types.h"

struct Unk_main_0203bffc {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
};

extern "C" u32 func_0203bffc(Unk_main_0203bffc* self) {
    return self->unk38;
}
