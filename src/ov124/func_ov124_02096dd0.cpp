#include "types.h"

struct Unk_ov124_02096dd0 {
    /* 0x00 */ u8 unk00[0x21];
    /* 0x21 */ s8 unk21;
};

extern "C" s8 func_ov124_02096dd0(Unk_ov124_02096dd0* self) {
    return self->unk21;
}
