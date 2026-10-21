#include "types.h"

extern "C" void func_02020774(void* p);

extern "C" void* func_020199b8(void* p) {
    func_02020774(p);
    return p;
}
