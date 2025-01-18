# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g -DDEBUG_TRACE_EXECUTION
LDFLAGS =

# Output executable
TARGET = main

# Source files
SRCS = chunk.c debug.c main.c memory.c value.c vm.c

# Header files
HEADERS = chunk.h common.h debug.h memory.h value.h vm.h

# Object files (replace .c with .o)
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

# Compile source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
rebuild: clean all
