#include "types.h"

struct Unk_ov121_020e3728 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ void* unk0c;
};

extern "C" void func_ov016_020b7f08();

extern "C" void func_ov121_020e3728(Unk_ov121_020e3728* self) {
    self->unk0c = (void*)func_ov016_020b7f08;
}
