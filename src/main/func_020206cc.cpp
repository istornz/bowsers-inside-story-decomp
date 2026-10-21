#include "types.h"

extern "C" void func_020205e0(void* p);

extern "C" void* func_020206cc(void* p) {
    func_020205e0(p);
    return p;
}
