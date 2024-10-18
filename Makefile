CC = cc
CFLAGS = -Wall
SRC = $(wildcard src/*.c src/*/*.c)
OBJ = $(SRC:.c=.o)
TARGET = main
LDFLAGS = -lSDL2
BUILD_DIR = build

all: $(TARGET)

$(TARGET): $(BUILD_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(BUILD_DIR)/$(TARGET) $(OBJ)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

run:
	./main

clean:
	rm -f $(OBJ) $(TARGET)
