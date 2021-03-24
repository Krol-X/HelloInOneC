#if 0
# MAKEFILE

NAME=hello
OBJECTS=
CFLAGS=-g -Wall -O2 -std=gnu11
LDFLAGS=
LDLIBS=
CC=gcc

.PHONY: all mingw clean

all: mingw

mingw: $(NAME).exe

$(NAME).exe: $(NAME).o
	$(CC) $(LDFLAGS) $(NAME).o $(LDLIBS) -o $@

$(NAME).o: $(NAME).c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $*.c

clean:
	rm -rf *.o $(NAME) $(NAME).exe

ifdef 0
#endif
// PROGRAM

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	printf("Hello World!\n");
	_getch();
	return 0;
}

#if 0
endif
#endif
