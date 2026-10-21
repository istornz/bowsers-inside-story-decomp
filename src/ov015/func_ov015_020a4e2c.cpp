#include "types.h"

struct Unk_ov015_020a4e2c {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ void* unk04;
};

extern "C" void func_ov015_020a439c(void* p);

extern "C" void func_ov015_020a4e2c(Unk_ov015_020a4e2c* self) {
    func_ov015_020a439c(self->unk04);
}
