CC=gcc
CFLAGS=-g -m32 -g -Wall
RM=rm -f
TARGET=exec
OBJECTS=main.o
LDLIBS = -lm

.PHONY: clean

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

all: exec

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDLIBS) -o $@ $^

clean:
	$(RM) *.o $(TARGET)
	
