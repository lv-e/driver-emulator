
// for arm microlib compatb.
#ifdef LV_USE_STDIO
#include <stdio.h>
#endif

// 8/16/32bits Integers definitions
#ifndef LV_PRIMITIVES
#define LV_PRIMITIVES
typedef signed char int8_t;
typedef short int   int16_t;
typedef int         int32_t;
typedef unsigned char       uint8_t;
typedef unsigned short int  uint16_t;
typedef unsigned int        uint32_t;
#endif

#include "render.h"

void driver_draw_hline(uint32_t line, uint32_t* buffer, uint32_t size){
    draw_hline((unsigned int)line, (unsigned int*)buffer, (unsigned int) size);
}