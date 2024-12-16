CFLAGS=-std=c11 -Wall -Wextra -Werror
LIBS=./sdl/lib -lmingw32 -lSDL2main -lSDL2
INCLUDES=./sdl/include
all: 
	gcc main.c -o main $(CFLAGS) -L$(LIBS) -I$(INCLUDES)