#include "types.h"

struct Unk_ov014_02096790 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_ov011_02070df0[];
extern "C" void func_ov014_0209696c(void* p);

extern "C" Unk_ov014_02096790* func_ov014_02096790(Unk_ov014_02096790* self) {
    self->unk00 = data_ov011_02070df0;
    func_ov014_0209696c(self);
    return self;
}
