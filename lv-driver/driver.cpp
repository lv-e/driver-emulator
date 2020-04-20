
#include "lv-driver/driver.h"
#include "lv-driver/render.h"
#include "lv-engine/engine.h"

// for arm microlib compatb.
#ifdef LV_USE_STDIO
#include <stdio.h>
#endif

void driver_LvReady(){
    #ifdef LV_USE_STDIO
    printf("Lv just signal it's readness!\n");
    #endif

    for (int c = 0; c < 16; c++){
        for (int x = 0; x < 20; x++) {
            for (int y = 0; y < 20; y++) {
                if(x%2 && y%2) continue;
                lv.ui.drawPixel(
                    makePoint((c%4) * 20 + x, (170 - (y + c/4 * 20))),
                    makeColor((char) c)
                );
            }
        }
    }

    startRender();
}

uint32_t driver_GamePadState(uint32_t player){
    return 0;
}

void driver_DrawHLine(uint32_t line, uint32_t* buffer, uint32_t size){
    drawHLine((unsigned int)line, (unsigned int*)buffer, (unsigned int) size);
}