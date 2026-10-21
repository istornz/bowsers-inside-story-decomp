#include "types.h"

struct Unk_02020774 {
    /* 0x00 */ u8 unk00[0x2c];
};

struct Unk_ov056_Obj {
    /* 0x00 */ void* vtbl;
    /* 0x04 */ u8 unk04[0x60 - 0x4];
    /* 0x60 */ Unk_02020774 unk60;
    /* 0x8c */ Unk_02020774 unk8c;
    /* 0xb8 */ Unk_02020774 unkb8;
    /* 0xe4 */ Unk_02020774 unke4;
};

extern "C" u8 data_ov011_020710c0[];

extern "C" void func_02020774(Unk_02020774* p);
extern "C" void func_ov014_02096790(Unk_ov056_Obj* obj);
extern "C" void func_ov014_02098210(Unk_ov056_Obj* obj);
extern "C" void func_020204a4(void* p);

extern "C" Unk_ov056_Obj* func_ov056_020cfafc(Unk_ov056_Obj* self) {
    func_02020774(&self->unke4);
    self->vtbl = data_ov011_020710c0;
    func_ov014_02098210(self);
    func_02020774(&self->unkb8);
    func_02020774(&self->unk8c);
    func_02020774(&self->unk60);
    func_ov014_02096790(self);
    func_020204a4(self);
    return self;
}
