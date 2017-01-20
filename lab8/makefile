#target dependencies
#	rule to build
#

all: prog

prog: myStack.o lab8.o 
	g++ myStack.o lab8.o -o prog

lab8.o: lab8.cpp
	g++ -c lab8.cpp

myStack.o: myStack.cpp
	g++ -c myStack.cpp

clean:
	rm *.o prog
