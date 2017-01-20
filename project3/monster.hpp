/*************************************************************
* Filename: monster.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 2/16/2016
* Description: This is the hpp file for the Monster class. It is an
* abstract class. There are also member variables, function declarations,
* and any other useful functions in this file.
***************************************************************/
#include <iostream>
#include <string>
using std::string;
#ifndef MONSTER_HPP
#define MONSTER_HPP

class Monster
{
protected:
	//member variables
	int attacks;
	int strength;
	string type;
public:
	//attack function
	virtual int attack() = 0;

	//accessor for type
	virtual string getType() = 0;
};

#endif