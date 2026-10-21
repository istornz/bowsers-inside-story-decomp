#include "types.h"

struct Unk_main_0201f5f4 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054e10[];
extern "C" void func_0201f6cc(void* p);

extern "C" Unk_main_0201f5f4* func_0201f5f4(Unk_main_0201f5f4* self) {
    self->unk00 = data_02054e10;
    func_0201f6cc(self);
    return self;
}
