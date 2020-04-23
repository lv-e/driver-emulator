csrc = $(wildcard *.c) \
	   $(wildcard **/*.c) \
       $(wildcard lv-engine/*.c) \
	   $(wildcard lv-engine/**/*.c) \
       $(wildcard lv-driver/*.c) \
	   $(wildcard lv-driver/**/*.c) 

cppsrc = $(wildcard *.cpp) \
		 $(wildcard **/*.cpp) \
         $(wildcard lv-engine/*.cpp) \
		 $(wildcard lv-engine/**/*.cpp) \
         $(wildcard lv-driver/*.cpp) \
		 $(wildcard lv-driver/**/*.cpp)

obj             = $(csrc:.c=.o) $(cppsrc:.cpp=.o)
flags           = -DLV_USE_STDIO=1
includes        = -I./

CXXFLAGS        = -std=c++11 $(flags) $(includes)
CFLAGS          = $(flags) $(includes)

CC              = gcc
CXX             = g++
LINKER          = g++

game: $(obj)
	$(LINKER) $(flags) $(includes) -lc++ -o /lv/bin/$@ $^ -I.

.PHONY:
	clean
	
clean:
	rm -f $(obj)