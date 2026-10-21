#include "types.h"

struct Unk_ov130_0206db70 {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ void* unk04;
};

extern "C" void func_ov130_0206eaf4(void* p);

extern "C" void func_ov130_0206db70(Unk_ov130_0206db70* self) {
    func_ov130_0206eaf4(self->unk04);
}
