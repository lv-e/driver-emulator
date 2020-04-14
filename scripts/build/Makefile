csrc = $(wildcard *.c) \
       $(wildcard lv-engine/*.c) \
       $(wildcard lv-driver/*.c)

cppsrc = $(wildcard *.cpp) \
        $(wildcard lv-engine/*.cpp) \
        $(wildcard lv-driver/*.cpp)

obj = $(csrc:.c=.o) $(cppsrc:.cpp=.o)

COMPILER = clang

game: $(obj)
	$(COMPILER) -o $@ $^ -I.

.PHONY:
	clean

clean:
	rm -f $(obj) game