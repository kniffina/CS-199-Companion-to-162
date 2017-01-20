#target dependencies
#	rule to build
#

all: prog

prog: shape.o circle.o rectangle.o lab3.o
	g++ shape.o circle.o rectangle.o lab3.o -o prog

lab3.o: lab3.cpp
	g++ -c lab3.cpp

shape.o: shape.cpp
	g++ -c shape.cpp

circle.o: circle.cpp
	g++ -c circle.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

clean:
	rm *.o prog
