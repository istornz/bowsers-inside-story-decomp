#include "types.h"

struct Unk_main_02022034 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054fcc[];
extern "C" void func_020220c8(void* p);

extern "C" Unk_main_02022034* func_02022034(Unk_main_02022034* self) {
    self->unk00 = data_02054fcc;
    func_020220c8(self);
    return self;
}
