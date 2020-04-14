csrc = $(wildcard *.c) \
       $(wildcard src/*.c)

cppsrc = $(wildcard *.cpp) \
        $(wildcard src/*.cpp) \
		$(wildcard sandbox/*.cpp) 

obj = $(csrc:.c=.o) $(cppsrc:.cpp=.o)

CXXFLAGS = -std=c++11 -I./src
CFLAGS 	 = -I./src

CC = clang
CXX = clang
LINKER = clang

game: $(obj)
	$(LINKER) -o sandbox/$@ $^

.PHONY:
	clean

clean:
	rm -f $(obj)