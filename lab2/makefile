#target dependencies
#	rule to build
#	

all: prog

prog: contact.o lab2.o
	g++ contact.cpp lab2.cpp -o prog

lab2.o: lab2.cpp
	g++ -c lab2.cpp

contact.o: contact.cpp
	g++ -c contact.cpp

clean: 
	rm *.o prog
