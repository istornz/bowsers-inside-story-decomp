#include "types.h"

struct Unk_ov009_Flags {
    u32 unk0 : 2;
    u32 unk2 : 30;
};

struct Unk_ov009_Main {
    /* 0x000 */ u8 unk000[0x504];
    /* 0x504 */ Unk_ov009_Flags unk504;
};

struct Unk_ov009_Scene {
    /* 0x0000 */ u8 unk0000[0x1d1c];
    /* 0x1d1c */ s16 unk1d1c;
};

extern "C" Unk_ov009_Main data_02055fe4;
extern "C" Unk_ov009_Scene* data_ov008_02064f0c;

extern "C" BOOL func_ov008_020648d4(Unk_ov009_Scene* scene);
extern "C" void func_ov018_020c8fc0();

extern "C" void func_ov009_02065bc4() {
    if (data_02055fe4.unk504.unk0 != 3) {
        if (data_ov008_02064f0c->unk1d1c == 0) {
            return;
        }
    } else if (func_ov008_020648d4(data_ov008_02064f0c)) {
        return;
    }
    func_ov018_020c8fc0();
}
