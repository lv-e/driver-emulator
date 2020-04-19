#include <stdio.h>
#include "driver.h"
#include "engine.h"

int main(){
    
    printf("hello from emulator driver\n");
    
    lvInit();
    
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
    return 0;
}