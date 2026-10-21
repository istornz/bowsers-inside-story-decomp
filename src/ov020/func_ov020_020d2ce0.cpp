#include "types.h"

struct Unk_ov019_020cd524 {
    /* 0x0 */ u8 unk0[0x2];
    /* 0x2 */ u16 unk2;
    /* 0x4 */ u16 unk4;
};

extern "C" Unk_ov019_020cd524 data_ov019_020cd524;

extern "C" void func_ov020_020d2d9c();
extern "C" void func_ov020_020d3228();

extern "C" void func_ov020_020d2ce0(u32 state) {
    switch (state) {
    case 0:
        data_ov019_020cd524.unk2 = 0;
        data_ov019_020cd524.unk4 = 0x40;
        func_ov020_020d2d9c();
        break;
    case 1:
        func_ov020_020d2d9c();
        break;
    case 2:
        func_ov020_020d2d9c();
        break;
    case 3: {
        u16 angle = data_ov019_020cd524.unk2 & 0xfff;
        if (angle >= 0x400 && angle < 0xc00) {
            angle += 0x800;
        }
        data_ov019_020cd524.unk2 = angle & 0xfff;
        *(volatile u16*)0x04000304 &= ~0x8000;
        func_ov020_020d3228();
        break;
    }
    case 4:
        func_ov020_020d3228();
        break;
    }
}
