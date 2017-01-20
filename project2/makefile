#target dependencies
#	rule to build
#

all: prog

prog: shape.o circle.o rectangle.o triangle.o proj2.o 
	g++ shape.o circle.o rectangle.o triangle.o proj2.o -o prog

proj2.o: proj2.cpp
	g++ -c proj2.cpp

shape.o: shape.cpp
	g++ -c shape.cpp

circle.o: circle.cpp
	g++ -c circle.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

triangle.o: triangle.cpp
	g++ -c triangle.cpp

clean:
	rm *.o prog
