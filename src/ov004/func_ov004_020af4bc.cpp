#include "types.h"

extern "C" void func_ov004_0209bfe4(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov004_020af4bc(void* p) {
    func_ov004_0209bfe4(p);
    func_0201a168(p);
    return p;
}
