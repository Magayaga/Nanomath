# Nanomath - It is the scientific calculator!

# Copyright 2023 Cyril John Magayaga

CC = gcc
CFLAGS = -lm

TARGET = nanomath
SOURCES = src/linux/nanomath.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
        $(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c
        $(CC) $(CFLAGS) -c $<

nanomath:
        rm -f $(TARGET) $(OBJECTS)

