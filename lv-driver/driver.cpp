
#include "lv-driver/driver.h"

// for arm microlib compatb.
#ifdef LV_USE_STDIO
#include <stdio.h>
#endif

#include "lv-engine/engine.h"

void driver_draw_hline(uint32_t line, uint32_t* buffer, uint32_t size){
    draw_hline((unsigned int)line, (unsigned int*)buffer, (unsigned int) size);
}