#include "types.h"

struct Unk_main_02022054 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054fcc[];
extern "C" void func_020220c8(void* p);
extern "C" void func_0201a168(void* p);

extern "C" Unk_main_02022054* func_02022054(Unk_main_02022054* self) {
    self->unk00 = data_02054fcc;
    func_020220c8(self);
    func_0201a168(self);
    return self;
}
