#include "types.h"

struct Unk_02020774 {
    /* 0x0 */ u8 unk0[0xc];
};

struct Unk_02025a64 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u8 unk0c[0xc];
    /* 0x18 */ Unk_02020774 unk18;
    /* 0x24 */ u32 unk24;
};

extern "C" void func_02020774(Unk_02020774* p);
extern "C" void func_020205e0(void* p);
extern "C" void func_020204a4(void* p);

extern "C" Unk_02025a64* func_02025a34(Unk_02025a64* self) {
    self->unk24 = 0;
    func_02020774(&self->unk18);
    func_020205e0(self->unk0c);
    func_020204a4(self);
    return self;
}
