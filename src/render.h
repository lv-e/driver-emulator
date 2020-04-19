#ifdef __cplusplus
extern "C" {
#endif

// simulator interface
void startRender();

// lv required
void draw_hline(unsigned int line, unsigned int* buffer, unsigned int size);

#ifdef __cplusplus
}
#endif