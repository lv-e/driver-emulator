
// for arm microlib compatb.
#ifdef LV_USE_STDIO
#include <stdio.h>
#endif

#define DRIVER_SCREEN_WIDTH  220
#define DRIVER_SCREEN_HEIGHT 176

#ifdef DRIVER_SANDBOX
#include "engine.h"
#endif

#include "render.h"

void driver_draw_hline(uint32_t line, uint32_t* buffer, uint32_t size){
    draw_hline((unsigned int)line, (unsigned int*)buffer, (unsigned int) size);
}