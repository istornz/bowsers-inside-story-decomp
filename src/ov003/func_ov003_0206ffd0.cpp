#include "types.h"

struct Unk_ov003_0206ffd0 {
    /* 0x00 */ u8 unk00[0x5fc];
    /* 0x5fc */ u32 unk5fc;
};

extern "C" u32 func_ov003_0206ffd0(Unk_ov003_0206ffd0* self) {
    return self->unk5fc;
}
