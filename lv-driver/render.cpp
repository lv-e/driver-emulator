
#include <stdio.h>

#include "lv-driver/render.h"
#include "lv-driver/components/graphics.hpp"
#include "lv-driver/components/io.hpp"
#include "lv-driver/components/pad.hpp"

#include "lv-engine/engine.h"

//Screen dimension constants
const int SCREEN_WIDTH  = DRIVER_SCREEN_WIDTH;
const int SCREEN_HEIGHT = DRIVER_SCREEN_HEIGHT;
BMP frame_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);

void draw_hline(unsigned int line, unsigned int* buffer, unsigned int size){
    for(unsigned int x = 0; x < size; x++) {
        unsigned int color = buffer[x];
        frame_buffer.set_pixel(x, line,
            ((color >> 16) & 0xFF),
            ((color >> 8)  & 0xFF),
            ((color)       & 0xFF));
    }
}

void nextFrame(HTTP *server) {
    int fd = server->clientfd;
    lv.system.update();
    lv.system.draw();
    frame_buffer.writeToFD(fd);
}

void startRender(){
    HTTP http("1996", nextFrame);
}