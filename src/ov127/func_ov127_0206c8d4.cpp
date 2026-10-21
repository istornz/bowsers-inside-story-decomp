#include "types.h"

extern "C" void* func_ov127_0206c8d4(u8* data, s32 index) {
    return data + ((s32*)data)[index];
}
