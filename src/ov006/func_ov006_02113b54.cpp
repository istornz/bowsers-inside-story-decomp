#include "types.h"

extern "C" void func_020161c0(void* p);
extern "C" void func_0201a168(void* p);

extern "C" void* func_ov006_02113b54(void* p) {
    func_020161c0(p);
    func_0201a168(p);
    return p;
}
