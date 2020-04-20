#pragma once
#ifdef __cplusplus
extern "C" {
#endif

// simulator interface
void startRender();

// lv required implementation
void drawHLine(unsigned int line, unsigned int* buffer, unsigned int size);

#ifdef __cplusplus
}
#endif