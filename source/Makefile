# Makefile
# by : ashz
# reason : EXECUTION CODE FOR COMPILING SOURCE CODE

# default variables
TARGET = KredShellMaster
COMPILER = gcc
INCLUDE = -I.
OUTPUT = -o
COMPILE = -c
HEADER = ./utility/color_unix.h
.DEFAULT_GOAL := $(TARGET)

# external library
UTILITY = ./utility/

# objects
OBJECT += $(TARGET).o

%.o: %.c
	$(COMPILER) $(COMPILE) $(OUTPUT) $@ $< $(INCLUDE) 

$(TARGET): $(TARGET).o
	$(COMPILER) $(OUTPUT) $(TARGET) $(OBJECT)
	rm -f *.o

clean:
	rm -f KredShellMaster
	

.PHONY: clean
