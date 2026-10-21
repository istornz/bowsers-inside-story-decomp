#include "types.h"

struct Unk_ov049_020d4c94 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_ov049_020dafa0[];
extern "C" void func_ov014_0209696c(void* p);
extern "C" void func_ov014_02096790(void* p);

extern "C" Unk_ov049_020d4c94* func_ov049_020d4c94(Unk_ov049_020d4c94* self) {
    self->unk00 = data_ov049_020dafa0;
    func_ov014_0209696c(self);
    func_ov014_02096790(self);
    return self;
}
