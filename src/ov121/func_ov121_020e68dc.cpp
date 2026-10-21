#include "types.h"

struct Unk_ov121_020e68dc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void* unk0c;
};

extern "C" void func_ov121_020e68ec();

extern "C" void func_ov121_020e68dc(Unk_ov121_020e68dc* self) {
    self->unk0c = (void*)func_ov121_020e68ec;
}
