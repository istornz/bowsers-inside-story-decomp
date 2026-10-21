#include "types.h"

struct Unk_ov122_0206c064 {
    /* 0x00 */ u8 unk00[0x5a];
    /* 0x5a */ u8 unk5a;
};

extern "C" void func_ov122_0206c064(Unk_ov122_0206c064* self, u8 value) {
    self->unk5a = value;
}
