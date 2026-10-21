#include "types.h"

struct Unk_ov049_020cc7cc {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_ov049_020dafa0[];
extern "C" void func_ov014_0209696c(void* p);
extern "C" void func_ov014_02096790(void* p);
extern "C" void func_020204a4(void* p);

extern "C" Unk_ov049_020cc7cc* func_ov049_020cc7cc(Unk_ov049_020cc7cc* self) {
    self->unk00 = data_ov049_020dafa0;
    func_ov014_0209696c(self);
    func_ov014_02096790(self);
    func_020204a4(self);
    return self;
}
