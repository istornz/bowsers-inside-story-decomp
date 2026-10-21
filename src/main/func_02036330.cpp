#include "types.h"

extern "C" u8 data_02060526[];
extern "C" void func_02036250(void* p);

extern "C" void func_02036330() {
    func_02036250(data_02060526);
}
