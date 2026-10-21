#include "types.h"

struct Unk_main_0202f1a4 {
    /* 0x00 */ void* unk00;
};

extern "C" void func_0202f6f0(void* p);

extern "C" void func_0202f1a4(Unk_main_0202f1a4* self) {
    func_0202f6f0(self->unk00);
}
