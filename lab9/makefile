#target dependencies
#	rule to build
#

all: prog

prog: lab9.o
	g++ myll.hpp lab9.o -o prog

lab9.o: lab9.cpp
	g++ -c lab9.cpp

clean:
	rm *.o
