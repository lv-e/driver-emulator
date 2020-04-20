csrc = $(wildcard lv-driver/*.c) \
       $(wildcard lv-driver/**/*.c) \
	   $(wildcard shallow-engine/lv-engine/**/*.c) \
	   $(wildcard shallow-engine/lv-engine/*.c) \
	   $(wildcard sandbox/*.c)

cppsrc = $(wildcard lv-driver/*.cpp) \
         $(wildcard lv-driver/**/*.cpp) \
		 $(wildcard shallow-engine/lv-engine/**/*.cpp) \
	   	 $(wildcard shallow-engine/lv-engine/*.cpp) \
		 $(wildcard sandbox/*.cpp)

obj = $(csrc:.c=.o) $(cppsrc:.cpp=.o)
flags = -DDRIVER_SANDBOX=1 -DLV_USE_STDIO=1
includes = -I./ -I./shallow-engine

CXXFLAGS = -std=c++11 $(flags) $(includes)
CFLAGS 	 = $(flags) $(includes)

CC = clang
CXX = clang
LINKER = clang

game: $(obj)
	$(LINKER) -lc++ -o sandbox/$@ $^

.PHONY:
	clean

clean:
	rm -f $(obj)