#include "types.h"

struct Unk_main_0201fe9c {
    /* 0x00 */ void* unk00;
};

extern "C" u8 data_02054e38[];
extern "C" void func_0201ff80(void* p);
extern "C" void func_0201a168(void* p);

extern "C" Unk_main_0201fe9c* func_0201fe9c(Unk_main_0201fe9c* self) {
    self->unk00 = data_02054e38;
    func_0201ff80(self);
    func_0201a168(self);
    return self;
}
