#include "types.h"

struct Unk_ov127_0206b638 {
    /* 0x00 */ u8 unk00[0xe1];
    /* 0xe1 */ u8 unke1;
};

extern "C" void func_ov127_0206b638(Unk_ov127_0206b638* self) {
    self->unke1 = 1;
}
