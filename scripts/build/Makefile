csrc = $(wildcard /lv/source/*.c) \
       $(wildcard /lv/source/lv-engine/*.c) \
       $(wildcard /lv/source/lv-driver/*.c)

cppsrc = $(wildcard /lv/source/*.cpp) \
         $(wildcard /lv/source/lv-engine/*.cpp) \
         $(wildcard /lv/source/lv-driver/*.cpp)

obj = $(csrc:.c=.o) $(cppsrc:.cpp=.o)

CXXFLAGS = -std=c++11
COMPILER = gcc

game: $(obj)
	$(COMPILER) -o /lv/bin/$@ $^ -I.

.PHONY:
	clean

clean:
	rm -f $(obj) game