#include "types.h"

struct Unk_ov056_020ce2a0 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void* unk0c;
};

extern "C" void func_ov056_020ce2b0();

extern "C" void func_ov056_020ce2a0(Unk_ov056_020ce2a0* self) {
    self->unk0c = (void*)func_ov056_020ce2b0;
}
