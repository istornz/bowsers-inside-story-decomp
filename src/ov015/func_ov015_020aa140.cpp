#include "types.h"

struct Unk_ov015_020aa140 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void* unk10;
};

extern "C" void func_ov015_020ac644(void* p);

extern "C" void func_ov015_020aa140(Unk_ov015_020aa140* self) {
    func_ov015_020ac644(self->unk10);
}
