#include "types.h"

struct Unk_ov056_020cf0a8 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void* unk0c;
};

extern "C" void func_ov056_020cf0b8();

extern "C" void func_ov056_020cf0a8(Unk_ov056_020cf0a8* self) {
    self->unk0c = (void*)func_ov056_020cf0b8;
}
