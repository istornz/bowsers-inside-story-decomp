#include "types.h"

struct Unk_ov127_0206a318 {
    /* 0x00 */ u8 unk00[0xc44];
    /* 0xc44 */ void* unkc44;
};

extern "C" void func_ov127_0206c2a8(void* p);

extern "C" void func_ov127_0206a318(Unk_ov127_0206a318* self) {
    func_ov127_0206c2a8(self->unkc44);
}
