#include "types.h"

extern "C" void func_ov003_0206b774(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov004_020873cc(void* p) {
    func_ov003_0206b774(p);
    func_0201a168(p);
    return p;
}
