#include "types.h"

struct Unk_02020774 {
    /* 0x0 */ u8 unk0[0xc];
};

struct Unk_02021e60 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Unk_02020774 unk0c;
    /* 0x18 */ u32 unk18;
};

extern "C" void func_02020774(Unk_02020774* p);
extern "C" void func_020205e0(void* p);

extern "C" Unk_02021e60* func_ov016_020ad8c8(Unk_02021e60* self) {
    self->unk18 = 0;
    func_02020774(&self->unk0c);
    func_020205e0(self);
    return self;
}
