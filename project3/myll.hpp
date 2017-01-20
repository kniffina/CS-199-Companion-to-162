/*************************************************************
* Filename: myll.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 2/16/2016
* Description: This is the hpp file for a Node structure. It contains
* two member variable declarations. 
***************************************************************/
#include "monster.hpp"
#ifndef MYLL_HPP
#define MYLL_HPP

class myLL
{
protected:
	//create a Node structure
	struct Node
	{
		Monster *value;//declare Monster pointer named value
		Node *next;//declare Node element pointer of next

	}; Node *head;
public:
	//constructor that sets the head of the list to NULL
	myLL() { head = NULL; }

	//destructor
	~myLL();

	//displayList outputs all of the types of monsters in the list
	void displayList();

	//add / remove functions
	void addValue(Monster *);
	void removeLast();

	//uses the attack method for each of the Monster and displays their attacks
	void attack();


};


#endif