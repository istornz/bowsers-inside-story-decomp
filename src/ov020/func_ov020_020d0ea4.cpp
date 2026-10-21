#include "types.h"

struct Unk_ov020_Scene {
    /* 0x000 */ u8 unk000[0xc44];
    /* 0xc44 */ u8 unkC44[1];
};

extern "C" u32 data_ov020_020d604c;
extern "C" Unk_ov020_Scene* data_ov008_02064f0c;

extern "C" void func_0201f7ec(void* p, void (*callback)());
extern "C" void func_ov020_020d0ee0();

extern "C" void func_ov020_020d0ea4() {
    if (data_ov020_020d604c == 0) {
        return;
    }
    func_0201f7ec(data_ov008_02064f0c->unkC44, func_ov020_020d0ee0);
}
