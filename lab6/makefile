#target dependencies
#	rule to build
#

all: prog

prog: nodeFunctions.o lab6.o
	g++ node.hpp  nodeFunctions.o lab6.o -o prog
lab6.o: lab6.cpp
	g++ -c lab6.cpp

nodeFunctions.o: nodeFunctions.cpp
	g++ -c nodeFunctions.cpp

clean:
	rm *.o prog
