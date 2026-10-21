#include "types.h"

struct Unk_ov128_0206ea10 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ void* unk04;
};

extern "C" void func_ov128_02071d4c(void* p);

extern "C" void func_ov128_0206ea10(Unk_ov128_0206ea10* self) {
    func_ov128_02071d4c(self->unk04);
}
