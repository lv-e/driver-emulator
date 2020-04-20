#include <stdio.h>
#include "lv-driver/driver.h"
#include "lv-engine/engine.h"

int main(){
    printf("hello from emulator driver\n");
    lvInit();
    return 0;
}