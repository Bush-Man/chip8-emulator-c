CFLAGS=-std=c11 -Wall -Wextra -Werror
all: 
	gcc main.c -o main $(CFLAGS)