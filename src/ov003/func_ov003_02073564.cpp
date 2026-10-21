#include "types.h"

struct Unk_ov003_02073564 {
    /* 0x00 */ u8 unk00[0x770];
    /* 0x770 */ u8 unk770;
};

extern "C" u8 func_ov003_02073564(Unk_ov003_02073564* self) {
    return self->unk770;
}
