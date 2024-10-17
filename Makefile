CC = cc
CFLAGS = -Wall
SRC = $(wildcard src/*.c src/*/*.c)
OBJ = $(SRC:.c=.o)
TARGET = main
LDFLAGS = -lSDL2

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJ)

run:
	./main

clean:
	rm -f $(OBJ) $(TARGET)
