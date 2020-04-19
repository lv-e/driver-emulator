csrc = $(wildcard *.c) \
       $(wildcard src/*.c) \
	   $(wildcard shallow-engine/src/*.c) \
	   $(wildcard sandbox/*.c) 

cppsrc = $(wildcard *.cpp) \
        $(wildcard src/*.cpp) \
		$(wildcard sandbox/*.cpp) 

obj = $(csrc:.c=.o) $(cppsrc:.cpp=.o)
flags = -DDRIVER_SANDBOX=1 -DLV_USE_STDIO=1
includes = -I./src -I./shallow-engine/src

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