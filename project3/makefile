#target dependencies
#	rule to build
#

all: prog

prog: troll.o myll.o icedragon.o goblin.o firedragon.o dragon.o proj3.o
	g++ monster.hpp troll.o icedragon.o myll.o goblin.o firedragon.o dragon.o proj3.o  -o prog

proj3.o: proj3.cpp
	g++ -c proj3.cpp

goblin.o: goblin.cpp
	g++ -c goblin.cpp

troll.o: troll.cpp
	g++ -c troll.cpp

dragon.o: dragon.cpp
	g++ -c dragon.cpp

icedragon.o: icedragon.cpp
	g++ -c icedragon.cpp

firedragon.o: firedragon.cpp
	g++ -c firedragon.cpp

myll.o: myll.cpp
	g++ -c myll.cpp

clean: 
	rm *.o prog

 
