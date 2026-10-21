#include "types.h"

struct Unk_02020774 {
    /* 0x00 */ u8 unk00[0x2c];
};

struct Unk_ov055_Obj {
    /* 0x00 */ void* vtbl;
    /* 0x04 */ u8 unk04[0x60 - 0x4];
    /* 0x60 */ Unk_02020774 unk60;
    /* 0x8c */ Unk_02020774 unk8c;
    /* 0xb8 */ Unk_02020774 unkb8;
};

extern "C" u8 data_ov011_020710c0[];

extern "C" void func_02020774(Unk_02020774* p);
extern "C" void func_ov014_02096790(Unk_ov055_Obj* obj);
extern "C" void func_ov014_02098210(Unk_ov055_Obj* obj);

extern "C" Unk_ov055_Obj* func_ov055_020cf99c(Unk_ov055_Obj* self) {
    self->vtbl = data_ov011_020710c0;
    func_ov014_02098210(self);
    func_02020774(&self->unkb8);
    func_02020774(&self->unk8c);
    func_02020774(&self->unk60);
    func_ov014_02096790(self);
    return self;
}
