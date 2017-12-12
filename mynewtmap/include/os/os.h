

#ifndef OS_H
#define OS_H

#include <malloc.h>

#include "os/os_error.h"
#include "os/endian.h"
#include "os/os_mempool.h"
#include "os/os_mutex.h"

#include "syscfg/syscfg.h"


#define OS_TICKS_PER_SEC        (1000000U)


#define MYNEWT_VAL(x)       x


#ifndef min
#define min(a, b) ((a)<(b)?(a):(b))
#endif

#ifndef max
#define max(a, b) ((a)>(b)?(a):(b))
#endif


#endif /* OS_H */
