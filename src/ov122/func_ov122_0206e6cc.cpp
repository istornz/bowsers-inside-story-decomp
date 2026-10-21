#include "types.h"

struct Unk_ov122_Node {
    /* 0x0 */ u8 unk0[0xc];
    /* 0xc */ void* unkC;
};

extern "C" Unk_ov122_Node* func_ov122_02069a60(void* a, void* b);

extern "C" void* func_ov122_0206e6cc(void* a, void* b) {
    return func_ov122_02069a60(a, b)->unkC;
}
