#include "types.h"

extern "C" void func_02020774(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov120_020d84bc(void* p) {
    func_02020774(p);
    func_0201a168(p);
    return p;
}
