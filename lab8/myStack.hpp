/*******************************************************************
* Filename: myStack.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/24/2016
* Description: This is the header file for the myStack class. It contains
* member variables and function declarations.
**********************************************************************/
#include <iostream>
#ifndef MYSTACK_HPP
#define MYSTACK_HPP

class myStack
{
private:
	//member variables
	int array[10];//integer array of 10 elements
	int numberElements;//counts values in array
public:
	//constructor
	myStack(); 

	//push, pop, and top function declarations
	bool push(int val);
	bool pop();
	int top();

	//print function for testing purposes, and to display to the user
	void print();
};

#endif