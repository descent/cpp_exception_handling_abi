#include "throw.h"

extern "C" {
    void seppuku() {
        throw Exception();
        // __cxa_allocate_exception()
        // __cxa_throw
    }
}


