#include "types.h"

struct Unk_ov016_020b1fdc {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void* unk10;
};

extern "C" void func_ov015_020ac644(void* p);

extern "C" void func_ov016_020b1fdc(Unk_ov016_020b1fdc* self) {
    func_ov015_020ac644(self->unk10);
}
