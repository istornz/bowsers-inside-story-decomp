#include "types.h"

struct Unk_ov118_Scene {
    /* 0x000 */ u8 unk000[0xc44];
    /* 0xc44 */ u8 unkC44[1];
};

extern "C" Unk_ov118_Scene* data_ov008_02064f0c;

extern "C" void func_0201f7ec(void* p, void (*callback)());
extern "C" void func_ov118_020e2d30();

extern "C" void func_ov118_020e2d08() {
    func_0201f7ec(data_ov008_02064f0c->unkC44, func_ov118_020e2d30);
}
