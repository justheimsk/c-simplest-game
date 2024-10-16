CC = cc
CFLAGS = -Wall
SRC = $(wildcard src/*.c src/*/*.c)
OBJ = $(SRC:.c=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -lSDL2 -o $(TARGET) $(OBJ)

run:
	./main

clean:
	rm -f $(OBJ) $(TARGET)
