#include "types.h"

struct Unk_main_0201f5cc {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054e10[];
extern "C" void func_0201f6cc(void* p);
extern "C" void func_0201a168(void* p);

extern "C" Unk_main_0201f5cc* func_0201f5cc(Unk_main_0201f5cc* self) {
    self->unk00 = data_02054e10;
    func_0201f6cc(self);
    func_0201a168(self);
    return self;
}
