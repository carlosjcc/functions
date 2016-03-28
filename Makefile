# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -Werror -ggdb -std=c99

#SOURCES=hello.c water.c 
#OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=function

.PHONY: all
all: $(EXECUTABLE)


function: function.o
	$(CC) function.o -o function

function.o: function.c
	$(CC) $(CFLAGS) function.c



clean:
	rm -f *.o $(EXECUTABLE)