# Makefile for algorithms project
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = algorithms
SOURCES = main.c game_character.c
HEADERS = game_character.h
OBJECTS = $(SOURCES:.c=.o)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: clean
