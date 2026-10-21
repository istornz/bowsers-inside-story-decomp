#include "types.h"

struct Unk_02022034 {
    /* 0x0 */ u8 unk0[0xc];
};

struct Unk_02021f98 {
    /* 0x0 */ u8 unk0[0x10];
};

struct Unk_02025b74 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ Unk_02021f98 unk1c;
    /* 0x2c */ Unk_02022034 unk2c;
    /* 0x38 */ Unk_02022034 unk38;
};

extern "C" void func_02020300(void* p);
extern "C" void func_02021f98(Unk_02021f98* p);
extern "C" void func_02022034(Unk_02022034* p);

extern "C" Unk_02025b74* func_ov004_020d1228(Unk_02025b74* self) {
    func_02022034(&self->unk38);
    func_02022034(&self->unk2c);
    func_02021f98(&self->unk1c);
    func_02020300(self);
    return self;
}
