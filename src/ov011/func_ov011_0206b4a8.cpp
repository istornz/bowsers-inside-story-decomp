#include "types.h"

struct Unk_ov011_0206b4a8 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ void* unk04;
};

extern "C" void func_0202b0d0(void* p);

extern "C" void func_ov011_0206b4a8(Unk_ov011_0206b4a8* self) {
    func_0202b0d0(self->unk04);
}
