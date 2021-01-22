TARGET = libenc.a
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -I.
LDFLAGS = -L.

.PHONY: clean all default

default: $(TARGET)
all: default

HEADERS = encrypt.h
OBJECTS = encrypt.o
TOBJECTS = testEncrypt.o encrypt.o

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	ar ru $@ $^
	ranlib $@

test: $(TOBJECTS)
	$(CC) $^ $(LIBS) $(LDFLAGS) -lenc -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
	-rm -f test
