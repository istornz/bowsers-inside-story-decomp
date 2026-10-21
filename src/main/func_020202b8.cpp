#include "types.h"

struct Unk_main_020202b8 {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054e6c[];
extern "C" void func_02020418(void* p);

extern "C" Unk_main_020202b8* func_020202b8(Unk_main_020202b8* self) {
    self->unk00 = data_02054e6c;
    func_02020418(self);
    return self;
}
