# by : ashz
# reason : To compile shell code that I already don't like coding

RESULT=ksm
COMPILER=gcc
OPTION_OUTPUT= -o
OPTION_GENERATE= -c
OPTION_EX_LIB= -lreadline

%.o: %.c
	$(COMPILER) $(OPTION_GENERATE) $(OPTION_OUTPUT) $@ $< 

.DEFAULT_GOAL := $(RESULT)
$(RESULT): main.o
	$(COMPILER) $(OPTION_OUTPUT) $@ $< $(OPTION_EX_LIB)
	rm -f *.o
	
clean:
	rm -f ksm
	rm -f *.o

.PHONY: clean

