#include "types.h"

struct Unk_main_0201f5ac {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054e10[];
extern "C" void func_0201f6cc(void* p);

extern "C" Unk_main_0201f5ac* func_0201f5ac(Unk_main_0201f5ac* self) {
    self->unk00 = data_02054e10;
    func_0201f6cc(self);
    return self;
}
