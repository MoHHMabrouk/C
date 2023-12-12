OUTPUT_NAME = main.out
SRC_DIR = src
INC_DIR = inc

# Find all source files in the src directory
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# Compiler and flags
CC = gcc
CFLAGS = -I$(INC_DIR)

.PHONY: all run clean

all: $(OUTPUT_NAME) run

$(OUTPUT_NAME): $(SRC_FILES)
	$(CC) $(CFLAGS) $^ -o $@
	@echo "Compilation successful."

run: $(OUTPUT_NAME)
	@./$(OUTPUT_NAME)

clean:
	del $(OUTPUT_NAME)
	@echo "Cleaned up."
