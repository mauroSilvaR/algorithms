# Makefile for bubble_sort project

CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g
TARGET = bubble_sort
SRC = $(TARGET).c
OBJ = $(TARGET).o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: clean
