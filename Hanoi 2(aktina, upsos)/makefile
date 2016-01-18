CC=gcc
CFLAGS=-g -Wall
SOURCES=Hanoi.c TStoixeioyStoivas.c ch4_Stack.c
OBJECTS=$(SOURCES:.c=.o)
DEPS=TStoixeioyStoivas.h ch4_Stack.h
EXECUTABLE=hanoi.out

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) $(SOURCES) $(DEPS)
	$(CC) $(OBJECTS) -o $@

.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) *.o *.gch
