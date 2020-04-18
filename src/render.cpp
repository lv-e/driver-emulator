#include "render.h"
#include "graphics.hpp"
#include "io.hpp"
#include "pad.hpp"

#include <stdio.h>

void draw_hline(unsigned int line, unsigned int* buffer, unsigned int size){
    printf("delegated!");
}

//Screen dimension constants
const int SCREEN_WIDTH  = 160;
const int SCREEN_HEIGHT = 128;
BMP frame_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);

void nextFrame(HTTP *server) {
    int fd = server->clientfd;
    lv.system.update();
    lv.system.draw();
    frame_buffer.writeToFD(fd);
}

void run(){
    lvInit();
    HTTP http("1996", nextFrame);
}