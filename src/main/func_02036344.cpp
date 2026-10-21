#include "types.h"

extern "C" u8 data_02060528[];
extern "C" void func_02036250(void* p);

extern "C" void func_02036344() {
    func_02036250(data_02060528);
}
