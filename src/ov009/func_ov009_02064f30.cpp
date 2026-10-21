#include "types.h"

struct Unk_ov009_Point {
    /* 0x0 */ s16 unk0;
    /* 0x2 */ s16 unk2;
};

struct Unk_ov009_Scene {
    /* 0x0000 */ void* vtbl;
    /* 0x0004 */ u8 unk0004[0xc54 - 0x4];
    /* 0x0c54 */ void (*unkC54)(Unk_ov009_Scene* scene);
    /* 0x0c58 */ u8 unk0c58[0x1cf4 - 0xc58];
    /* 0x1cf4 */ Unk_ov009_Point unk1cf4[7];
    /* 0x1d10 */ Unk_ov009_Point unk1d10;
    /* 0x1d14 */ Unk_ov009_Point unk1d14;
    /* 0x1d18 */ Unk_ov009_Point unk1d18;
    /* 0x1d1c */ Unk_ov009_Point unk1d1c;
};

inline void Point_init(Unk_ov009_Point* p) {
    p->unk2 = 0;
    p->unk0 = 0;
}

extern "C" u8 data_ov008_02064ebc[];
extern "C" Unk_ov009_Scene* data_ov008_02064f0c;

extern "C" void func_02047364(void* block, s32 count, s32 size, void (*ctor)(Unk_ov009_Point*), void (*dtor)(Unk_ov009_Point*));
extern "C" void func_ov000_02063b00(Unk_ov009_Scene* scene, s32 a, s32 b);
extern "C" void func_ov008_02064b18(Unk_ov009_Point* point);
extern "C" void func_ov009_02064f20(Unk_ov009_Point* point);
extern "C" void func_ov009_02064fc8(Unk_ov009_Scene* scene);

// TODO: 84.00%. Same instructions, different scheduling: the original loads the dtor pointer (r12) after storing the
// vtable and does all eight `strh` before loading data_ov008_02064f0c. Looks like a real constructor (members built by
// __construct_array and an inline Point ctor), which can't keep the extern "C" names. Tried: inline helper, loop, swapped
// tail stores.
extern "C" Unk_ov009_Scene* func_ov009_02064f30(Unk_ov009_Scene* scene) {
    func_ov000_02063b00(scene, 0x18, 0x28);
    scene->vtbl = data_ov008_02064ebc;
    func_02047364(scene->unk1cf4, 7, 4, func_ov009_02064f20, func_ov008_02064b18);
    Point_init(&scene->unk1d10);
    Point_init(&scene->unk1d14);
    Point_init(&scene->unk1d18);
    Point_init(&scene->unk1d1c);
    data_ov008_02064f0c = scene;
    scene->unkC54 = func_ov009_02064fc8;
    return scene;
}
