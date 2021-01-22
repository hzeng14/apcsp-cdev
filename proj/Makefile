TARGET = studentproj
LIBS = -lm -lenc
CC = gcc
CFLAGS = -g -Wall -I. -Iencrypt
LDFLAGS = -Lencrypt

.PHONY: clean all default

default: $(TARGET)
all: default

HEADERS = encrypt.h
OBJECTS = studentmain.o student.o

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $^ $(LIBS) $(LDFLAGS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
