csrc = $(wildcard *.c) \
       $(wildcard lv-driver/**/*.c) \
	   $(wildcard shallow-engine/**/*.c) \
	   $(wildcard sandbox/*.c) 

cppsrc = $(wildcard *.cpp) \
        $(wildcard lv-driver/**/*.cpp) \
		$(wildcard shallow-engine/**/*.cpp) 

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