#include "types.h"

extern "C" void* func_02015000(u8* data, s32 index) {
    return data + ((s32*)data)[index];
}
