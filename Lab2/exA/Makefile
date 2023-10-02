CC=g++
EXECUTABLES=myprog.out
.DEFAULT_GOAL := all

all: $(EXECUTABLES)

myprog.out: exBmain.cpp mystring_B.cpp dictionaryList.cpp
	$(CC) -o $@ $^

clean:
	rm -f $(EXECUTABLES)
