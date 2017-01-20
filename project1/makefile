#target dependencies
#	rule to build
#

all: prog

prog: person.o address.o main.o
	g++ person.o address.o main.o -o prog

main.o: main.cpp
	g++ -c main.cpp

person.o: person.cpp
	g++ -c person.cpp

address.o: address.cpp
	g++ -c address.cpp

clean:
	rm *.o prog

