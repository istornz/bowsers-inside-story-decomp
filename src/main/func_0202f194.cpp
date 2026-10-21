#include "types.h"

struct Unk_main_0202f194 {
    /* 0x00 */ void* unk00;
};

extern "C" void func_0202f6a4(void* p);

extern "C" void func_0202f194(Unk_main_0202f194* self) {
    func_0202f6a4(self->unk00);
}
