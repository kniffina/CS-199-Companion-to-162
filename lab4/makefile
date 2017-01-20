#target dependencies
#	rule to build
#

all: prog

prog: recursion.o lab4.o
	g++ recursion.o lab4.o -o prog

lab4.o: lab4.cpp
	g++ -c lab4.cpp

recursion.o: recursion.cpp
	g++ -c recursion.cpp

clean:
	rm *.o prog
