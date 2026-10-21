#include "types.h"

struct Unk_ov055_Scene {
    /* 0x000 */ u8 unk000[0xc44];
    /* 0xc44 */ u8 unkC44[1];
};

extern "C" Unk_ov055_Scene* data_ov008_02064f0c;

extern "C" void func_0201f7ec(void* p, void (*callback)());
extern "C" void func_ov055_020cd848();

extern "C" void func_ov055_020cd820() {
    func_0201f7ec(data_ov008_02064f0c->unkC44, func_ov055_020cd848);
}
